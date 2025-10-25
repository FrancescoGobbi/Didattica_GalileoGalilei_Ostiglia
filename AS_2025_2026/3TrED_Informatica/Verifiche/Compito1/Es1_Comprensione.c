#include <stdio.h>

int main() {
    int a = 3, b = 5, c = 10;

    int *p1 = &a;
    int *p2 = &c;
    int *p3 = &c;

    *p1 = *p2 + *p3; 
    p2 = &b;

    *p3 = *p1 + *p2;
    *p1 = *p2 + *p3;
    p3 = &a;
    *p2 = *p1 + *p3;
    *p1 = *p2 + *p3;

    printf("%d %d %d\n", a, b, c);
}

