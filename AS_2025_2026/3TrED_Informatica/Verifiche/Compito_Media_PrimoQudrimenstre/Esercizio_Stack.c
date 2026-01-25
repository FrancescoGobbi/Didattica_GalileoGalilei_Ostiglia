#include <stdio.h>
int funzione1(int a);
void funzione2(int x, int y);
int main() {
    int n = 4;
    int m = 6;
    int p = 2;
    int r = funzione1(m);
    funzione2(r, n);
    printf("Fine main: r = %d\n", r);
}

int funzione1(int a) {
    int i;
    int s = 0;
    for (i = 0; i < a; i++) {
        s = s + a;
        a--;
    }
    return s;
}

void funzione2(int x, int y) {
    int i;
    int tot = 0;
    for (i = 1; i <= y; i++) {
        tot = tot + x;
        if (i == 2) {
            i++;
        }
    }
    printf("Dentro funzione2: tot = %d, i = %d\n", tot, i);
}

