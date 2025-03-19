/*
Iterazione 10 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente due numeri interi A e B.
Il programma deve stampare tutti i numeri compresi tra A e B, estremi inclusi, che sono divisibili sia per 3 che per 5.
Se A è maggiore di B, il programma non deve stampare nulla e deve terminare.
*/

#include <stdio.h>

int main() {
    // Creazione delle variaibli
    int A, B;

    // Input dei due numeri
    printf("Inserisci il primo numero (A): ");
    scanf("%d", &A);
    printf("Inserisci il secondo numero (B): ");
    scanf("%d", &B);

    // Controllo se A è maggiore di B
    if (A > B) {
        printf("Il primo numero (A) è maggiore del secondo numero (B). Nessun numero da stampare.\n");
        return 0; // Termina il programma
    }

    // Stampa dei numeri divisibili per 3 e 5 compresi tra A e B
    printf("Numeri divisibili per 3 e 5 compresi tra %d e %d:\n", A, B);
    int i = A; // Inizializzazione della variabile di controllo del ciclo
    while (i <= B) { // Condizione del ciclo: continua finché i è minore o uguale a B
        if (i % 3 == 0 && i % 5 == 0) { // Controlla se il numero è divisibile sia per 3 che per 5
            printf("%d ", i); // Stampa il numero
        }
        i++; // Incremento della variabile di controllo del ciclo
    }
    printf("\n"); // Aggiunge una nuova riga alla fine
}