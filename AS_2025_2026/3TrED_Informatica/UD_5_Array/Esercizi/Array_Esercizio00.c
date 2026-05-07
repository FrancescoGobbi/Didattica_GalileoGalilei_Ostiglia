/*
Codice in C che dato i valori di un array di interi in input ricerca il massimo tra nell'array.

*/

#include <stdio.h>

# define dim 10

int main() {
    int vet[dim] = {0}; // Creazione di un array di interi di dimensione 10, con tutti i valori inizializzati a 0
    int i, max; // Dichiarazione delle variabili: i per il ciclo e max per il massimo valore dell'array

    // Ciclo for per inserire i valori nell'array, 
    // chiedendo all'utente di inserire un valore per ogni posizione dell'array
    for(i = 0; i < dim; i++) {
        printf("Inserisci un valore in posizione [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    max = vet[0]; // Inizializzazione del massimo al primo elemento dell'array

    // Ciclo for per trovare il massimo valore nell'array
    // Posso iniziare guardando la seconda posizione dell'array, perché ho già considerato la prima posizione come massimo iniziale
    for(i = 1; i < dim; i++) {
        if(vet[i] > max) { // Se l'elemento corrente è maggiore del massimo attuale
            max = vet[i]; // Aggiorna il massimo
        }
    }

    // Stampa del massimo valore trovato nell'array
    printf("Il massimo valore nell'array è: %d\n", max);
}