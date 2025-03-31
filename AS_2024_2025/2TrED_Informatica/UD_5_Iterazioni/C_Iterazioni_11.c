/*
Iterazione 11 (Utilizzo del for)
Creare un programma in C che prenda in input da parte dell'utente due numeri interi A e B.
Il programma deve stampare tutti i numeri compresi tra A e B, estremi inclusi, che sono divisibili sia per 3 che per 5.
Se A è maggiore di B, il programma non deve stampare nulla e deve terminare.
*/

#include <stdio.h>

int main() {
    // Creazione delle variabili
    int A, B;
    int i;

    // Input dei due numeri
    printf("Inserisci il primo numero (A): ");
    scanf("%d", &A);
    printf("Inserisci il secondo numero (B): ");
    scanf("%d", &B);

    // Stampa dei numeri divisibili per 3 e 5 compresi tra A e B
    printf("Numeri divisibili per 3 e 5 compresi tra %d e %d:\n", A, B);
    
    // Utilizzo del for: il for ha bisogno di 3 componenti
    // Prima componente: Inizializzazione della variabile di controllo del ciclo
    // Seconda componente: Condizione del ciclo: continua finché i è minore o uguale a B
    // Terza componente: Incremento della variabile di controllo del ciclo
    for (i = A; i <= B; i++) { // For per eseguire le iterazioni
        if (i % 3 == 0 && i % 5 == 0) { // Controlla se il numero è divisibile sia per 3 che per 5
            printf("%d ", i); // Stampa il numero
        }
    }
    printf("\n"); // Aggiunge una nuova riga alla fine
}