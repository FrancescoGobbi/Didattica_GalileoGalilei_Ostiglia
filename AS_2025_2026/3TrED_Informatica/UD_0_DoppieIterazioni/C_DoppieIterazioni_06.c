/* Doppie Iterazioni 6 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A ed un valore B.
Il valore A deve essere strettamente maggiore di 3 ed il valore B deve essere maggiore del valore di A.

Il programma deve stampare una figura con il medesimo pattern:
* * * * *
- - - - -
* * * * *
- - - - -

Con A il numero di righe e B il numero di colonne.

ESEMPIO:
Se l'utente inserisce A=3 e B=5, il programma deve stampare:
* * * * *
- - - - -
* * * * *

Se l'utente inserisce A=4 e B=6, il programma deve stampare:
* * * * * *
- - - - - -
* * * * * *
- - - - - -

*/

#include <stdio.h>

int main() {
    int A, B; // Variabili per le dimensioni della figura
    int i, j; // Variabili di iterazione

    // Prendo in input il valore di A strettamente maggiore di 3
    do {
        printf("Inserisci un valore per A (strettamente maggiore di 3): ");
        scanf("%d", &A);
    } while (A <= 3); // NOI VOGLIAMO: A>3

    // Prendo in input il valore di B maggiore di A
    do {
        printf("Inserisci un valore per B (maggiore di A): ");
        scanf("%d", &B);
    } while (B <= A); // NOI VOGLIAMO: B>A

    // Stampa della figura formata da asterischi e trattini
    for (i = 1; i <= A; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= B; j++) { // Ciclo interno per le colonne
            if (i % 2 != 0) {
                printf("* "); // Stampa dell'asterisco
            } else {
                printf("- "); // Stampa del trattino
            }
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}