/*
Creare un codice in C in cui dato un array di dimensione fissata, vengono inseriti in modo randomico i valori
al suo interno tra 1 e 100.

Il programma deve ordinare il vettore in ordine crescente e stamparlo a video.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define DIM 10

int main() {
    int vet[DIM]; // Creazione di un array di interi di dimensione 10
    int i, j, temp; // Dichiarazione delle variabili per i cicli e per lo scambio dei valori

    srand(time(0)); // Inizializzazione del generatore di numeri casuali con il tempo attuale
    // Ciclo for per riempire l'array con valori randomici compresi tra 1 e 100
    for(i = 0; i < DIM; i++) {
        vet[i] = rand() % 100 + 1; // Genera un numero casuale tra 1 e 100
    } 

    // Stampa del vettore non ordinato
    printf("Il vettore generato è: ");
    for(i = 0; i < DIM; i++) {
        printf("%d ", vet[i]); // Stampa di ogni elemento dell'array seguito da uno spazio
    }
    printf("\n"); // Stampa di una nuova linea alla fine del vettore

    // Ordinamento del vettore in ordine crescente usando il metodo Bubble Sort
    for(i = 0; i < DIM - 1; i++) {
        for(j = 0; j < DIM - i - 1; j++) {
            if(vet[j] > vet[j + 1]) { // Se l'elemento corrente è maggiore del successivo
                // Scambio dei valori
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    // Stampa del vettore ordinato
    printf("Il vettore ordinato è: ");
    for(i = 0; i < DIM; i++) {
        printf("%d ", vet[i]); // Stampa di ogni elemento dell'array seguito da uno spazio
    }
    printf("\n"); // Stampa di una nuova linea alla fine del vettore
}
