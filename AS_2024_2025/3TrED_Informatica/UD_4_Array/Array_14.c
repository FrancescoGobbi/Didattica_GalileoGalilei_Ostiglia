#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma, in un nuovo vettore, deve contare la frequenza di ogni elemento nel primo vettore.

ESEMPIO: (Vettore di dimensione 10 con numeri da 1 a 10)
Se Vet = {1, 2, 3, 4, 4, 3, 5, 6, 1, 3}
VetFrequenza = {0, 2, 1, 3, 2, 1, 1, 0, 0, 0, 10} 
Il VetFrequenza è di dimensione 11 nell'esempio, perché i numeri vanno da 1 a 10, quindi l'elemento 
con indice 0 sarà sempre 0, l'elemento con indice 1 identifica il numero di elementi prensenti in Vet
con valore 1, VetFrequenza[2] = numero di elementi con 2 in Vet, ...
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
    // TO DO...
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;
    }
}