#include <stdio.h>

// Richiesta in input un valore n e ne fa la somma dei primi n-valori interi
// ESEMPIO: se n = 5, dovrò fare 5 + 4 + 3 + 2 + 1 = 15
// ARGOMENTO: while (iterazioni)

int main() {
    int n, somma = 0, i = 0; // oppure i = 1;

    printf("Inserisci un valore per cui sommare i primi n numeri: ");
    scanf("%d", &n);

    while(i <= n) {
        somma = somma + i;
        i++; // i = i + 1;
    }

    // ALTERNATIVA
    /*
    i = 1; // Così ho un ciclo in meno
    while(i <= n) {
        somma = somma + i;
        i++; // i = i + 1;
    }
    */

    printf("La somma dei primi %d numeri è: %d\n", n, somma);
}