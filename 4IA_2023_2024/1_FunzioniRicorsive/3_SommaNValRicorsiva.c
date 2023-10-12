#include <stdio.h>

int sommaNValRicorsiva(int n);

int main() {
    int val;

    printf("Insersci un valore N da sommare fino a 0: ");
    scanf("%d", &val);

    int somma = sommaNValRicorsiva(val);
    printf("La somma dei primi %d valori è: %d\n", val, somma);
}

int sommaNValRicorsiva(int n) {
    if(n == 1) {
        return n;
    }
    else {
        return n + sommaNValRicorsiva(n-1);
    }
}