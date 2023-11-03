#include <stdio.h>

int main() {
    char a = 'a';
    
    printf("%d\n", a);
    printf("%c\n", a);

    int b = 1000;
    a = b;

    printf("%d\n", a);
    printf("%c\n", a);
}