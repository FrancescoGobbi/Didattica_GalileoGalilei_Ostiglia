#include <stdio.h>

#define dimensione 10
/*
Crea una funzione che prende in input un vettore e la sua dimensione.
La funzione deve invertire il vettore.

ESEMPIO:
Se vet[0] = 5, vet[1] = 2, vet[2] = 3,
allora vet[0] = 3, vet[1] = 2, vet[2] = 5
*/

/**
 * @brief Funzione che inizializza un vettore di interi con valori randomici.
 * 
 * @param vet 
 * @param dim 
 */
void initRandomVet(int vet[], int dim);

/**
 * @brief Funzione che inverte il vettore in input.
 * 
 * @param vet 
 * @param dim 
 */
void invertiVettore(int vet[], int dim);

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

void invertiVettore(int vet[], int dim){
    // TO DO...
}