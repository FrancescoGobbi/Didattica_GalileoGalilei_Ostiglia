/*
Iterazione 16 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il numero deve essere maggiore o uguale a 0.
Stampare il numero intero.

Esempio:
Se l'utente inserisce 50, il programma deve stampare il valore 50.
Se l'utente inserisce -10, il programma richiedere in input un numero numero intero.
*/

#include <stdio.h>

int main() {
    int n; // Dichiarazione della variabile n

    // Inizio del ciclo do-while - iterazione con controllo in coda
    do {
        printf("Inserisci un numero positivo o il numero 0: ");
        scanf("%d", &n); // Input dell'utente
    } while (n < 0); 

    // Stampa finale
    printf("Il numero %d è valido.\n", n);
}