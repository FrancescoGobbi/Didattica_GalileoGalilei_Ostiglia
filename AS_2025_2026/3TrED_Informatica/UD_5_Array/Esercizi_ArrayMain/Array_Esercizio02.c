/*
Creare un codice in C in cui dato un array di dimensione fissata, vengono inseriti in modo randomico i valori
al suo interno tra 1 e 100.

Il codice dovrà calcolare e stampare la media dei valori dell'array.
Chiaramente la media è data dalla somma di tutti i valori dell'array diviso per la dimensione dell'array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define DIM 10

int main(){
    int vet[DIM];
    int i;
    float somma = 0;
    float media;

    srand(time(0));

    for(i = 0; i < DIM; i++) {
        vet[i] = rand() % 100 + 1;
        somma += vet[i];
    }
    // Stampa del vettore
    printf("Il vettore generato è: ");
    for(i = 0; i < DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    media = somma / DIM;

    printf("La media dei valori dell'array è: %.2f\n", media);
}