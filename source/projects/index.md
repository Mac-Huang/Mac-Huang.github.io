---
title: Projects
date: 2024-06-06 17:25:49
---

Welcome to the projects section of my blog. 

Here, you'll find detailed descriptions of the various initiatives and research projects I've undertaken during my academic and professional journey. 

Each project reflects my passion for pushing the boundaries of computer science and technology.



## CIFAR10 Image Classification using Res-MacNet

**Repository Link:** [CIFAR10 Image Classification](https://github.com/Mac-Huang/CIFAR10-Image-Classification)

<p style="text-align: center;">
  <img src="/images/about/ResMacNet1.png" alt="Res-MacNet Architecture 1" style="max-width: 90%; height: auto;">
</p>

This project demonstrates the application of various machine learning methods to classify images from the CIFAR10 dataset, which consists of 60,000 32x32 color images in 10 different classes. 

It serves as a comprehensive guide to implementing and understanding deep learning models tailored for image classification.

## Transformer Model Implementation in PyTorch

**Repository Link:** [Transformer](https://github.com/Mac-Huang/Transformer)

<p style="text-align: center;">
  <img src="/images/blog/Transformer-arc.png" alt="Transformer Architecture" style="max-width: 60%; height: auto;">
</p>

This repository contains an implementation of the Transformer model, which was introduced in the groundbreaking paper ["Attention Is All You Need"](https://arxiv.org/abs/1706.03762). 

The Transformer model has revolutionized the fields of natural language processing (NLP) and machine translation by introducing a fully attention-based architecture, eliminating the need for traditional RNNs or CNNs.

### Core Code Snippets:

#### Transformer Model
```python
class Transformer(nn.Module):
    def __init__(self, src_vocab_size, tgt_vocab_size, N=6, d_model=512, d_ff=2048, head=8, dropout=0.1):
        super(Transformer, self).__init__()
        position = PositionalEncoding(d_model, dropout)
        src_embed = nn.Sequential(Embeddings(src_vocab_size, d_model), position)
        tgt_embed = nn.Sequential(Embeddings(tgt_vocab_size, d_model), position)
        encoder = Encoder(EncoderLayer(d_model, MultiHeadAttention(head, d_model), FeedForward(d_model, d_ff), dropout), N)
        decoder = Decoder(DecoderLayer(d_model, MultiHeadAttention(head, d_model), MultiHeadAttention(head, d_model), FeedForward(d_model, d_ff), dropout), N)
        self.model = EncoderDecoder(src_embed, tgt_embed, encoder, decoder, Generator(d_model, tgt_vocab_size))
```

#### Multi-Head Attention
```python
class MultiHeadAttention(nn.Module):
    def __init__(self, head, d_model):
        super(MultiHeadAttention, self).__init__()
        assert d_model % head == 0
        self.d_k = d_model // head
        self.head = head
        self.linear_layers = clones(nn.Linear(d_model, d_model), 4)
        self.attention = None

    def forward(self, query, key, value, mask=None):
        batch_size = query.size(0)
        query, key, value = [l(x).view(batch_size, -1, self.head, self.d_k).transpose(1, 2)
                             for l, x in zip(self.linear_layers, (query, key, value))]
        x, self.attention = attention(query, key, value, mask)
        x = x.transpose(1, 2).contiguous().view(batch_size, -1, self.head * self.d_k)
        return self.linear_layers[-1](x)
```

For detailed usage instructions and further information, please refer to the [Transformer Implementation repository](https://github.com/Mac-Huang/Transformer).