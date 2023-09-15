#include <stdio.h>

int main() {
    int a = 2;
    float b = 3.5;

    printf("I numeri sono %d e %f\n\n", a, b);

    a = b; // CAST IMPLICITO
    b = a; // CAST IMPLICITO

    printf("I numeri ora sono %d e %f\n\n", a, b);

    int x = 3;
    float y = 4.6859;

    printf("I numeri sono %d e %f\n\n", x, y);

    x = (int)y; // CAST ESPLICITO
    y = (float)x; // CAST ESPLICITO

    printf("I numeri ora sono %d e %f\n\n", x, y);
}