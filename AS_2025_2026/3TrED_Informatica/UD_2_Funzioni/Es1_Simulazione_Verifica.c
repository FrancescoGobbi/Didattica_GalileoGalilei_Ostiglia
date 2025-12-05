#include <stdio.h>

int funzione1(int x, int y);
int funzione2(int a);
void funzione3(int a);

int main() {
    int x = 3;
    int y = 10;
    funzione3(x);
    int z = funzione1(y, x);
    printf("%d\n", z);
}

int funzione1(int x, int y) {
    int z = x * y;
    x = funzione2(x);
    return x;
}

int funzione2(int a) {
    int i;
    for(i = 1; i <= a; i++){
        a = a + i;
        i = i * 5;
    }
    return a;
}

void funzione3(int a) {
    a = a * a;
}

