#include <stdio.h>

int main() {
    int a = 3, b = 5, c = 10;
    int *p1 = &a, *p2 = &c, *p3 = &c, *tmp;

    *p1 = *p2 + *p3;
    p2 = &b;
    *p3 = *p1 + *p2;
    *p1 = *p2 + *p3;
    tmp = p2; 
    p2 = p3; 
    p3 = tmp;
    *p2 = *p1 - *p3;
    p3 = &a;
    *p2 = *p2 + *p3;
    *p1 = *p2 + *p3;

    printf("%d %d %d\n", a, b, c);
}

