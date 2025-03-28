#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma deve inveritre l'ordine degli elementi del vettore.

ESEMPIO: 
Vet = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
Dopo l'operazione di inversione
Vet = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
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
    int vet[DIM];
    int i; // Variabile di iterazione
    int temp; // Variabile di supporto per lo scambio

    // Chiamata della funzione per generare dei numeri casuali nel vettore
    initRandomVet(vet, DIM);

    // Stampa vettore iniziale
    printf("Il vettore iniziale è: \n");
    for(i = 0; i< DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Inversione dell'ordine degli elementi del vettore
    for(i = 0; i < DIM / 2; i++) {
        // Eseguo lo scambio
        temp = vet[i];
        vet[i] = vet[DIM - 1 - i];
        vet[DIM - 1 - i] = temp;
    }

    // Stampa vettore invertito
    printf("Il vettore invertito è: \n");
    for(i = 0; i< DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;
    }
}