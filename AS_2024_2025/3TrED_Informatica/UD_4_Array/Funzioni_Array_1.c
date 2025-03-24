#include <stdio.h>

#define dimensione 10
/*
Crea una funzione che prende in input un vettore e la sua dimensione.
La funzione deve restituire il valore massimo presente nel vettore.
*/
int maxVet(int vet[], int dim);

int main() {
    int vet[dimensione] = {0};
    int i; // Per scorrere il vettore
    int max = 0;

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

    // Calcoliamo il valore massimo del vettore
    max = maxVet(vet, dimensione);
    printf("Il valore massimo del vettore è: %d\n", max);
}

int maxVet(int vet[], int dim) {
    // TO DO...
}