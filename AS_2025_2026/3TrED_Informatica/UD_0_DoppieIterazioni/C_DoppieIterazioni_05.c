/* Doppie Iterazioni 5 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il valore A deve essere strettamente maggiore di 1.

Il programma deve stampare il triangolo di Floid.

ESEMPIO:
Se l'utente inserisce A=3, il programma deve stampare:
1
2 3
4 5 6

Se l'utente inserisce A=5, il programma deve stampare:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>

int main() {
    int A; // Variabili per le dimensioni della figura
    int i, j; // Variabili di iterazione
    int numero = 1; // Variabile per il numero da stampare

    // Prendo in input il valore di A strettamente maggiore di 1
    do {
        printf("Inserisci un valore per A (strettamente maggiore di 1): ");
        scanf("%d", &A);
    } while (A <= 1); // NOI VOGLIAMO: A>1

    // Stampa del triangolo di Floyd
    for (i = 1; i <= A; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= i; j++) { // Ciclo interno per le colonne
            printf("%d ", numero); // Stampa del numero corrente
            numero++; // Incremento del numero
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}