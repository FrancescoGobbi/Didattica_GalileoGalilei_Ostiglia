#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma deve ordinare crescente gli elemnti del vettore inziale.
In poche parole il vettore dovrà poi essere ordinato.

ESEMPIO:
vet = {1, 3, 4, 5, 2, 6, 7, 8, 8, 6}
Dopo l'ordinamento
vet = {1, 2, 3, 4, 5, 6, 6, 7, 8, 8}
*/

#define DIM 10

/**
 * @brief Funzione che inizializza un vettore di dimensione dim con numeri casuali
 * 
 * @param vet 
 * @param dim 
 */
void initRandomVet(int vet[], int dim);

int main() {
    // TO DO...
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;
    }
}