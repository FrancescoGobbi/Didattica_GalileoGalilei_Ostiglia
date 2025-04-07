#include <stdio.h>

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
    // TO DO...
}  

void initRandomVet(int vet[], int dim) {
    int i;

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;// Da eventualmente cambiare
        // in base alla richiesta del problema
    }
}

void BubbleSort(int vet[], int dim);