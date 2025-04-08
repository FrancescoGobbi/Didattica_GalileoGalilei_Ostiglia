#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dimensione 10
/*
Crea una funzione che prende in input un vettore e la sua dimensione.
La funzione deve ordinare il vettore in ordine crescente (con l'algoritmo Bubble Sort).

ESEMPIO:
Se vet[0] = 5, vet[1] = 2, vet[2] = 3, 
allora vet[0] = 2, vet[1] = 3, vet[2] = 5
*/

/**
 * @brief Funzione che inizializza un vettore di interi con valori randomici.
 * 
 * @param vet 
 * @param dim 
 */
void initRandomVet(int vet[], int dim);

/**
 * @brief Funzione che ordina un vettore con algoritmo Bubble Sort
 * 
 * @param vet 
 * @param dim 
 */
void BubbleSort(int vet[], int dim);

int main() {
    int vet[dimensione] = {0};
    int i;

    initRandomVet(vet, dimensione);

    printf("\nVettore inziale: (dopo la generazione randomica)\n");
    // Stampiamo il vettore inziale
    for(i = 0; i < dimensione; i++) {
        printf("%4d", vet[i]);
    }
    printf("\n");

    // Ordino il vettore
    BubbleSort(vet, dimensione);

    printf("\nVettore dopo l'ordinamento:\n");
    for(i = 0; i < dimensione; i++) {
        printf("%4d", vet[i]);
    }
    printf("\n");
}  

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;// Da eventualmente cambiare
        // in base alla richiesta del problema
    }
}

void BubbleSort(int vet[], int dim){
    int i;
    int tmp;

    // N.B. DA TERMINARE
    for(i = 0; i< dim; i++) {
        // Confrontro tra la posizione i e la posizione i+1
        if(vet[i] > vet[i+1]) {
            tmp = vet[i]; 
            vet[i] = vet[i+1];
            vet[i+1] = tmp;
        }
    }
}