#include <stdio.h>

#define dimensione 10
/*
Crea una funzione che prende in input un vettore e la sua dimensione.
La funzione deve calcolare il fattoriale di tutti i valori presenti nel vettore.
I fattoriali devono esere sovrascritti nella cella i-esima corrispondente del vettore.

ESEMPIO:
Se vet[2] = 5, allora vet[2] = 5! = 120
*/
int fattorialeVet(int vet[], int dim);

int main() {
    int vet[dimensione] = {0};
    int i; // Per scorrere il vettore

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

    // Calcoliamo il fattoriale di tutti i valori del vettore
    fattorialeVet(vet, dimensione);

    // Stampiamo il vettore con i fattoriali
    for(i = 0; i < dimensione; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");
}   

int fattorialeVet(int vet[], int dim);