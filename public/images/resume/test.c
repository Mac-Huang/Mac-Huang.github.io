#include <stdio.h>
#include <string.h>

int main() {
    char *ch1 = "key";
    char *ch2 = "ke";
    printf("%s/n", strstr(ch2, ch1));
    return 0;
}