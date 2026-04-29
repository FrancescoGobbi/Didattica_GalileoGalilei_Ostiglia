#include <stdio.h>

#define dimensione 10
/*
Crea una funzione che prende in input un vettore e la sua dimensione.
La funzione deve calcolare la somma di tutti i valori presenti nel vettore.
*/
int sommaVet(int vet[], int dim);

int main() {
    int vet[dimensione] = {0};
    int i; // Per scorrere il vettore
    int somma = 0;

    // Prendiamo in input i valori per il vettore
    for(i = 0; i < dimensione; i++) {
        printf("Inserisci un elemento in posizone [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    // Stampiamo il vettore inziale
    for(i = 0; i < dimensione; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");

    // Calcoliamo la somma di tutti i valori del vettore
    somma = sommaVet(vet, dimensione);
    printf("La somma dei valori del vettore è: %d\n", somma);
}

int sommaVet(int vet[], int dim) {
    // Creazione delle variabili
    int i, sum = 0;

    for(i = 0; i < dim; i++) {
        sum = sum + vet[i];
    }
    return sum;
}