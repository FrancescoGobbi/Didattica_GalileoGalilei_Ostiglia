#include <stdio.h>

// Questo programma calcola la somma degli elementi di un array di interi
// L'utente inserisce la dimensione dell'array e i valori degli elementi

int main() {
    int n, i, sum = 0; // Dichiarazione delle variabili: n per la dimensione dell'array, i per il ciclo e sum per la somma degli elementi
    
    // Richiesta della dimensione dell'array all'utente
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n); // Lettura della dimensione dell'array

    int array[n]; // Dichiarazione dell'array di dimensione n

    // Ciclo per inserire i valori degli elementi dell'array
    for (i = 0; i < n; i++) {
        printf("Inserisci il valore per l'elemento %d: ", i); // Richiesta del valore per l'elemento i+1
        scanf("%d", &array[i]); // Lettura del valore e assegnazione all'elemento i dell'array
    }

    // Ciclo per calcolare la somma degli elementi dell'array
    for (i = 0; i < n; i++) {
        sum += array[i]; // Aggiunta del valore dell'elemento i alla somma
    }

    // Stampa della somma degli elementi dell'array
    printf("La somma degli elementi del vettore è: %d\n", sum);
}