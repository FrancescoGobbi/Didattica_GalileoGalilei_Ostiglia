#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma deve poi eseguire la sommatoria di tutti i numeri presenti nel vettore
e stampare il risultato.
*/

#define DIM 10

void initRandomVet(int vet[], int dim);

int main() {
    int vet[DIM];
    int i, somma = 0;

    // Chiamata della funzione per generare dei numeri casuali nel vettore
    initRandomVet(vet, DIM);

    // Vettore iniziale
    printf("Il vettore iniziale è: \n");
    for(i = 0; i< DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Sommatoria dei valori dell'array
    for(i = 0; i< DIM; i++) {
        somma = somma + vet[i];
    }

    // Stampare la somma dei valori dell'array
    printf("\n\nLa somma dei valori dell'array è: %d\n", somma);
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() % 100  + 1;
    }
}