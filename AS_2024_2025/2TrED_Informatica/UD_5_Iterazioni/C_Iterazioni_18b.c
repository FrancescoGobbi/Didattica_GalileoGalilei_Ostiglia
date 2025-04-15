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

    // Inizio del ciclo do-while per la variabile A e B insieme - iterazione con controllo in coda
    do {
        printf("Inserisci un valore per A (maggiore di 0 e minore di 100): ");
        scanf("%d", &A);
        printf("Inserisci un valore per B (maggiore di A): ");
        scanf("%d", &B);
    } while ((A <= 0 || A >= 100) || B<=A); 
    // Condizione del ciclo: continua finché A è minore di 0 o maggiore di 100
    // oppure B è minore o uguale ad A
    // Quando la condizione del ciclo non è più vera, il ciclo termina
    // Noi VOGLIAMO che il ciclo termini quando A è compreso tra 0 e 100
    // e B è maggiore di A
    // Quindi quello che VOGLIAMO è : A > 0 && A < 100 && B > A
    // Quindi, negando la condizione, otteniamo: A <= 0 || A >= 100 || B <= A
    // Inseriamo questo nella condizione e otteniamo il ciclo do-while

    // Calcolo della differenza
    differenza = B - A;
    // Stampa del risultato finale
    printf("La differenza tra B e A è: %d\n", differenza);
}