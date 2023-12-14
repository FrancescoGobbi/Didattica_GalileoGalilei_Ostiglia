#include <stdio.h>

// Richiesta in input di due valori e ne fa il prodotto usando la somma ripetuta in un ciclo
// ARGOMENTO: while (iterazioni)

int main() {
    int a, b;
    int i = 0;
    int prodotto = 0;

    printf("Inserisci due valori da moltiplicare: ");
    scanf("%d %d", &a, &b);

    while(i < b) {
        prodotto = prodotto + a;
        i++; // i = i + 1;
    }
    // ALTERNATIVA
    /*
    i = 1; // Parto a contare da 1
    while(i <= b) { // arrivo fino al valore di b
        prodotto = prodotto + a;
        i++; // i = i + 1;
    }
    */

    printf("%d * %d = %d\n", a, b, prodotto);
}