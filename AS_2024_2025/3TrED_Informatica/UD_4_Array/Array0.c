#include <stdio.h>

int main() {
    // Dichiarazione di un array di interi di dimensione 5
    int numeri[5];
    int i;

    // Inizializzazione dell'array
    numeri[0] = 10;
    numeri[1] = 20;
    numeri[2] = 30;
    numeri[3] = 40;
    numeri[4] = 50;

    // Stampa degli elementi dell'array
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeri[i]);
    }

    // Modifica degli elementi dell'array
    numeri[0] = 5;
    numeri[0] += 5;
    numeri[1] -= 5;
    numeri[2] *= 2;
    numeri[3] /= 2;
    numeri[4] %= 3;

    // Stampa degli elementi modificati dell'array
    printf("\nElementi modificati:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeri[i]);
    }
}