#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma deve trovare il secondo numero più grande del vettore.
Il programma deve poi stampare tale valore.
*/

#define DIM 10

void initRandomVet(int vet[], int dim);

int main() {
    // TO DO...
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %10;
    }
}