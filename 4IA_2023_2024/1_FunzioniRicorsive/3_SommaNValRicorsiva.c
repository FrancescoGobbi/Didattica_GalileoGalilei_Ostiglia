#include <stdio.h>

int sommaNValRicorsiva(int val);

int main() {
    int val;

    printf("Insersci un valore N da sommare fino a 0: ");
    scanf("%d", &val);

    int somma = sommaNValRicorsiva(val);
    printf("La somma dei primi %d valori è: %d\n", val, somma);
}

int sommaNValRicorsiva(int val) {
    if(val == 1) {
        return val;
    }
    else {
        return val + sommaNValRicorsiva(val-1);
    }
}