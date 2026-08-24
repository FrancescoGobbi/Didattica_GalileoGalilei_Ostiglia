#include <stdio.h>
int funzione1(int a, int b);
void funzione2(int x, int y);
int main() {
    int a = 5;
    int b = 3;
    int r = funzione1(a, b);
    funzione2(r, a);
    printf("Fine main: r = %d\n", r);
}

int funzione1(int a, int b) {
    int i;
    int s = 0;
    for (i = 0; i < b; i++) {
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
        if (i == 2 || i == 4 || i == 6) {
            i++;
        }
    }
    printf("Dentro funzione2: tot = %d, i = %d\n", tot, i);
}


