#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma deve ricercare quanti casi/valori all'interno del vettore hanno
il numero precedente minore del corrette ed il numero successivo maggiore del precente.

ESEMPIO:
Se vet[5] = 6, vet[4] = 4 e vet[6] = 10 possiamo contare tale elemento.
Se vet[5] = 6, vet[4] = 6 e vet[6] = 10 NON dobbiamo contare tale elemento.
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
    int i, count = 0;

    // Chiamata della funzione per generare dei numeri casuali nel vettore
    initRandomVet(vet, DIM);

    // Vettore iniziale
    printf("Il vettore iniziale è: \n");
    for(i = 0; i< DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Troviamo quanti sono corretti rispetto alla relazione richiesta
    for(i = 1; i < DIM - 1; i++) {
        if (vet[i] > vet[i-1] && vet[i] < vet[i+1]) {
            count++;
        }
    }

    // Stampa finale
    printf("Ci sono %d casi in cui il numero precedente è minore del corrente e il successivo è maggiore del corrente.\n", count);
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;
    }
}