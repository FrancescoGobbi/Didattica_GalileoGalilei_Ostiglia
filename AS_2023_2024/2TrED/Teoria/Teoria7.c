#include <stdio.h>

int main() {
    int n, somma = 0, i = 0; // oppure i = 1;

    printf("Inserisci un valore per cui sommare i primi n numeri: ");
    scanf("%d", &n);

    while(i <= n) {
        somma = somma + i;
        i++; // i = i + 1;
    }

    printf("La somma dei primi %d numeri è: %d\n", n, somma);
}