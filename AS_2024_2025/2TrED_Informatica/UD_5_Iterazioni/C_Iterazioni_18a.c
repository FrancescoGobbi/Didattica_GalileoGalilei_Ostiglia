/*
Iterazione 18 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente due valori interi (a e b).
Il programma deve far in modo che il valore di A sia maggiore di 0 e minore di 100.
Mentre il valore di B deve essere maggiore di A.

Il programma deve eseguire la differenza tra i due numeri (b-a) e stampare il risultato.
Il programma deve continuare a chiedere all'utente di inserire un numero valido finché non vengono rispettate le condizioni.

*/

#include <stdio.h>

int main() {
    int A, B;
    int differenza; // Variabile per la differenza tra i due numeri

    // Inizio del ciclo do-while per la variabile A - iterazione con controllo in coda
    do {
        printf("Inserisci un valore per A (maggiore di 0 e minore di 100): ");
        scanf("%d", &A);
    } while (A <= 0 || A >= 100); // Condizione del ciclo: continua finché A non è compreso tra 0 e 100

    do { // ciclo do-while per la variabile B - iterazione con controllo in coda
        printf("Inserisci un valore per B (maggiore di A): ");
        scanf("%d", &B);
    } while (B <= A); // Condizione del ciclo: continua finché B non è maggiore di A

    // Calcolo della differenza
    differenza = B - A;
    // Stampa del risultato finale
    printf("La differenza tra B e A è: %d\n", differenza);
}