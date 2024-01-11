#include <stdio.h>

// Richiesta in input un valore n e ne esegue il fattoriale (prodotto dei primi n numeri partendo da 1)
// ARGOMENTO: while (iterazioni)

int main() {
    int n, fattoriale = 1, i = 1;

    printf("Inserisci un valore di cui fare il fattoriale: ");
    scanf("%d", &n);

    while(i <= n) {
        fattoriale = fattoriale * i;
        i++; // i = i + 1;
    }

    printf("La somma dei primi %d numeri è: %d\n", n, fattoriale);
}