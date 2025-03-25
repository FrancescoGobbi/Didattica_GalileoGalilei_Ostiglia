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
    int vet[DIM];
    int i; // Variabile di iterazione
    int max, max2; // Variabili per il massimo 

    // Chiamata della funzione per generare dei numeri casuali nel vettore
    initRandomVet(vet, DIM);

    // Vettore iniziale
    printf("Il vettore iniziale è: \n");
    for(i = 0; i< DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Troviamo il massimo in assoluto del vettore
    max = vet[0];

    // Trovare il valore massimo assoluto nell'array
    for (i = 1; i < DIM; i++) {
        if (vet[i] > max) { // Per trovare il massimo
            max = vet[i];
        }
    }

    // Troviamo il secondo massimo del vettore
    max2 = vet[0];

    for (i = 1; i < DIM; i++) {
        if (vet[i] < max && vet[i] > max2) {
            max2 = vet[i];
        }
    }

    // Stampare il valore massimo
    printf("Il secondo massimo del vettore è: %d\n", max2);
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;
    }
}