#include <stdio.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensine 10.
L'array deve essere riempito con dei valori interi inseriti dall'utente.
Il programma deve calcolare la media presenti nel vettore e stampare il risultato.
*/

#define dim 10

int main() {
    int vet[10] = {0};
    int i; // Per scorrere il vettore
    int somma = 0;
    float media = 0;

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

    // For per eseguire la somma di tutti i valori nel vettore
    for(i = 0; i < dim; i++) {
        somma = somma + vet[i];
    }

    // For alternitivo essenziale
    /*
    for(i = 0; i < dim; i++) {
        printf("Inserisci un elemento in posizone [%d]: ", i);
        scanf("%d", &vet[i]);
        somma = somma + vet[i];
    }
    */

    media = (float)somma / dim;
    printf("La media dei %d valori del vettore è: %f\n", dim, media);
}