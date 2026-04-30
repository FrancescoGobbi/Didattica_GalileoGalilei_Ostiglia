#include <stdio.h>

// Definizione di una costante simbolica per la dimensione dell'array
// Quasta non è una variabile, ma un alias per un valore costante, che non può essere
// modificato durante l'esecuzione del programma
# define dim 10

int main() {

    // Creazione di un array di interi di dimensione 10, con tutti i valori inizializzati a 0
    int vet[dim] = {0};
    int i;

    // Ciclo for per inserire i valori nell'array, 
    // chiedendo all'utente di inserire un valore per ogni posizione dell'array
    for(i = 0; i < dim; i++) {
        printf("Inserisci un valore in posizione [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    // Ciclo for per stampare i valori inseriti nell'array
    for(i = 0; i < dim; i++) {
        printf("%5d", vet[i]);
    }

    printf("\n"); // Vado a capo dopo la stampa dell'array, per migliorare la leggibilità dell'output 
    //(Specialmente per il terminale di MacOS)
}