#include <stdio.h>

#define dimensione 10
/*
Crea una funzione che prende in input un vettore e la sua dimensione.
La funzione trovare e stampare il secondo massimo ed il secondo minimo del vettore.
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
void SecondoMaxMinVet(int vet[], int dim);

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

void SecondoMaxMinVet(int vet[], int dim){
    // TO DO...
}