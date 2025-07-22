---
title: Courses
date: 2024-03-19 10:00:00
---

<link rel="stylesheet" href="/css/custom.css">

# My Course Journey

This page documents my academic journey through various courses, including my understanding, experiences, and projects completed during these courses.

## Spring 2025 Semester
**Institution**: University of Wisconsin–Madison

### COMP SCI 200: Programming I
**Instructor**: Professor Jim Williams

#### Course Description
An introductory programming course focusing on fundamental concepts using Java.

#### Key Learnings
- Reinforced core programming fundamentals
- Enhanced understanding of lower-level operational logic
- Developed teaching and peer support skills
- Gained confidence in collaborative learning environments

```java
public class Student {
    private String name;
    private int age;
    private double gpa;

    public Student(String name, int age) {
        this.name = name;
        this.age = age;
        this.gpa = 0.0;
    }

    public void updateGPA(double newGPA) {
        if (newGPA >= 0.0 && newGPA <= 4.0) {
            this.gpa = newGPA;
        }
    }

    public String getStatus() {
        if (gpa >= 3.5) return "Dean's List";
        if (gpa >= 2.0) return "Good Standing";
        return "Academic Warning";
    }
}
```

#### Reflection
While the material was relatively straightforward, the discussion sections proved to be the most valuable aspect of the course.

The opportunity to assist classmates not only reinforced my own understanding but also deepened my appreciation for programming fundamentals.

Professor Williams' teaching style was particularly effective - engaging, clear, and well-paced.

This experience has inspired me to consider becoming a TA for this course in the future.

---

### E C E 252: Introduction to Computer Engineering
**Instructor**: Professor Bhuvana Krishnaswamy

#### Course Description
A foundational course in computer organization and low-level computing concepts.

#### Key Learnings
- Understanding of computer organization
- Assembly language programming
- Byte and register-level data management
- Computer architecture fundamentals

```assembly
;************************************
; Multiples two numbers AxB
;
; Parameters
;   R0 - A 
;   R1 - B 
;Returns 
;   R0 - AxB
;************************************
MULT
        ST R2, MULT_R2
        AND R2, R2, #0

        ADD R1, R1, #0
        BRp MULT_LOOP
        AND R0, R0, #0
        BR END_SUB

MULT_LOOP
        ADD R2, R2, R0
        ADD R1, R1, #-1
        BRp MULT_LOOP

        ADD R0, R2, #0
        LD R2, MULT_R2
END_SUB
    RET

MULT_R2 .BLKW 1
	.END
```

#### Reflection
This was my favorite course of the semester.

The exploration of assembly language and low-level computing concepts provided a fascinating insight into how computers operate at their core.

The course structure, featuring one lecture and two group-based discussion sections weekly, effectively reinforced the material.

This experience has motivated me to pursue COMP SCI 352: Digital System Fundamentals and COMP SCI 552: Introduction to Computer Architecture in future semesters.

---

### MATH 340: Elementary Matrix and Linear Algebra
**Instructor**: Professor Ruhui Jin

#### Course Description
An advanced mathematics course covering matrix operations and linear algebra concepts.

#### Key Learnings
- Linear transformations
- Matrix operations
- High-dimensional mathematical structures
- Applications in machine learning and neural networks

#### Reflection
This intellectually stimulating course provided a deeper understanding of mathematical structures.

The concepts of linear transformations have significantly enhanced my understanding of neural network architectures, like Transformers.

While I'm performing well academically, I recognize the need for further study to fully grasp the interconnections between concepts.

---

### COMP SCI 240: Introduction to Discrete Mathematics
**Instructor**: Professor Mitch Keller

#### Course Description
A course covering fundamental discrete mathematics concepts and their applications in computer science.

#### Key Learnings
- Mathematical proofs
- Relations and functions
- Graph theory
- Tree structures
- Abstract logic

#### Reflection
This was the most challenging course of the semester, primarily due to the abstract nature of the content.

While I understand the importance of these concepts for data structures and algorithms, I found it difficult to maintain motivation for some of the more theoretical aspects.

I hope to gain a deeper appreciation of these concepts through their application in future advanced CS courses.

---

## Overall Semester Reflection

This semester has been transformative in several ways:
- Solidified my interest in computer systems and architecture
- Developed a passion for low-level programming
- Gained valuable experience in collaborative learning
- Enhanced understanding of theoretical mathematics in relation to machine learning
- Improved communication and teaching skills through peer support

While not all subjects resonated equally, each course has contributed to shaping my academic path and future interests. I'm particularly excited about pursuing further studies in computer architecture and systems, while continuing to build on my mathematical foundation for machine learning applications.

---

*Note: This page is continuously updated as I progress through my academic journey.* 