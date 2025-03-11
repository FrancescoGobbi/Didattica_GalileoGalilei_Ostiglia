#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Successivamente, il programma deve trovare e stampare il valore massimo e minimo presenti nell'array.
Infine, il programma deve stampare i valori dell'array.
*/

#define DIM 10

int main() {
    int vet[DIM];
    int i;
    int max, min;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    // Riempire l'array con numeri casuali compresi tra 1 e 100
    for (i = 0; i < DIM; i++) {
        vet[i] = rand() % 100 + 1;
    }

    // Inizializzazione dei valori massimo e minimo
    max = vet[0];
    min = vet[0];

    // Trovare il valore massimo e minimo nell'array
    for (i = 1; i < DIM; i++) {
        if (vet[i] > max) { // Per trovare il massimo
            max = vet[i];
        }
        if (vet[i] < min) { // Per trovare il minimo
            min = vet[i];
        }
    }

    // Stampa i valori dell'array
    printf("I valori dell'array sono: ");
    for (i = 0; i < DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Stampa il valore massimo e minimo
    printf("Il valore massimo è: %d\n", max);
    printf("Il valore minimo è: %d\n", min);
}