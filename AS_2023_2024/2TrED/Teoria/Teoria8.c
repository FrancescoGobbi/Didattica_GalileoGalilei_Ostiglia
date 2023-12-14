#include <stdio.h>

int main() {
    int n, prodotto = 1, i = 1;

    printf("Inserisci un valore di cui fare il fattoriale: ");
    scanf("%d", &n);

    while(i <= n) {
        prodotto = prodotto * i;
        i++; // i = i + 1;
    }

    printf("La somma dei primi %d numeri è: %d\n", n, prodotto);
}