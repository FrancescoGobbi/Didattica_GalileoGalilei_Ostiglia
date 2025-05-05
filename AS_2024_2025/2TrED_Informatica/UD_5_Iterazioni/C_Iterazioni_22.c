/*
Iterazione 22 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente due valori interi A e B.
Il valore di A deve essere compreso tra 1 e 10, mentre il valore di B deve essere compreso tra 1 e 10.
Il programma deve eseguire e stampare la potenza A^B (A elevato alla B) utilizzando l'iterezione per la potenza.
Quindi dovrò chiedere in input A e B, e poi calcolare la potenza A^B.

ESEMPIO:
Se l'utente inserisce A=2 e B=3, il programma deve stampare "2^3 = 8".
Se l'utente inserisce A=3 e B=2, il programma deve stampare "3^2 = 9".
*/

#include <stdio.h>

int main() {
    int A, B;
    int potenza = 1; // Inizializzo la potenza a 1
    int i; // Variabile di iterazione

    // Prendo in input il valore di A compreso tra 1 e 10
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 10): ");
        scanf("%d", &A);
    } while (A < 1 || A > 10); // NOI VOGLIAMO: A>=1 && A<=10

    // Prendo in input il valore di B compreso tra 1 e 10
    do {
        printf("Inserisci un valore per B (compreso tra 1 e 10): ");
        scanf("%d", &B);
    } while (B < 1 || B > 10); // NOI VOGLIAMO: B>=1 && B<=10

    // Volendo si possono prendere in input anche i valori di A e B in un unico do-while()
    /*
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 10): ");
        scanf("%d", &A);
        printf("Inserisci un valore per B (compreso tra 1 e 10): ");
        scanf("%d", &B);
    }while(A < 1 || A > 10 || B < 1 || B > 10);
    NOI VOGLIAMO: A>=1 && A<=10 && B>=1 && B<=10
    Quindi, quello che NON VOGLIAMO: A<1 || A>10 || B<1 || B>10
    */

    // Calcolo della potenza A^B
    for (i = 1; i <= B; i++) {
        potenza *= A; // potenza = potenza * A;
    }

    // Stampa del risultato finale
    printf("%d^%d = %d\n", A, B, potenza);
}