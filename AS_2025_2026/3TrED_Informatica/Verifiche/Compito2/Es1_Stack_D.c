#include <stdio.h>
int funzione1(int a, int b);
void funzione2(int x, int y);
int main() {
    int n = 5;
    int m = 2;
    int p = 3;
    int r = funzione1(n, m); 
    funzione2(p, r);      
    printf("Fine main: p = %d, r = %d\n", p, r);
}
int funzione1(int a, int b) {
    int i;
    int s = 0;
    for (i = 0; i < b; i++) {
        s = s + a;
        if (a % 2 == 0) { 
            a = a / 2;
        } else {
            a = a + 3;
        }
    }
    return s;
}
void funzione2(int x, int y) {
    int i;
    int tot = 0;
    for (i = 1; i <= y; i++) {
        tot = tot + x;
        if (i < y) {
            i = i + 1;
        }
    }
    printf("Dentro funzione2: tot = %d, i = %d\n", tot, i);
}

