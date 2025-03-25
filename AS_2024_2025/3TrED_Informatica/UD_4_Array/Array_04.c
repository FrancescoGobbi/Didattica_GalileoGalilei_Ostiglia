#include <stdio.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensine 10.
L'array deve essere riempito con dei valori interi inseriti dall'utente.
Il programma deve stampare al contrario i valori inseriti.
*/

#define dim 10

int main() {
    int vet[10] = {0};
    int i; // Per scorrere il vettore

    // Prendiamo in input i valori per il vettore
    for(i = 0; i < dim; i++) {
        printf("Inserisci un elemento in posizone [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    // Stampiamo il vettore inziale
    for(i = 0; i < dim; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");

    // Stampa al contrario i valori inseriti
    for(i = dim - 1; i >= 0 ; i-- ) {
        printf("%3d", vet[i]);
    }
    printf("\n");
}