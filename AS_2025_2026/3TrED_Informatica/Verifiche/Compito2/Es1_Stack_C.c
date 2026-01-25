#include <stdio.h>
int funzione1(int a, int b);
void funzione2(int x, int y);
int main() {
    int n = 4;
    int m = 2;
    int p = 5;
    int r = funzione1(n, p);
    funzione2(r, m);
    printf("Fine main: p = %d, r = %d\n", p, r);
}
int funzione1(int a, int b) {
    int i;
    int s = 0;
    for (i = 1; i <= b; i++) {
        s = s + a;
        if (i % 2 == 0) {  
            a = a - 1;
        } else {       
            a = a + 2;
        }
    }
    return s;
}
void funzione2(int x, int y) {
    int i, tot = 0;
    for (i = 0; i < y; i++) {
        if (i == 0) {
            tot = tot + x;
        } else {
            tot = tot - (x / (i + 1));
        }
    }
    printf("Dentro funzione2: tot = %d, i = %d\n", tot, i);
}

