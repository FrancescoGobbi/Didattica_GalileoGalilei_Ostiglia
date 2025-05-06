/*
Iterazione 25 (Utilizzo delle iterazioni)
Creare un programma in C che prenda in input 2 numeri interi A e B.
Il programma deve calcolare e stampare il minimo comune multiplo (MCM) tra i due numeri A e B.
Il MCM è il più piccolo numero intero positivo che è multiplo di entrambi i numeri A e B.

Considerando che il MCM può essere calcolato utilizzando la formula:
MCM(A, B) = (A * B) / MCD(A, B)
dove MCD è il massimo comune divisore tra A e B.

ESEMPIO:
Se l'utente inserisce A=12 e B=18, il programma deve stampare "Il MCM tra 12 e 18 è 36".
Se l'utente inserisce A=15 e B=25, il programma deve stampare "Il MCM tra 15 e 25 è 75".
Se l'utente inserisce A=7 e B=21, il programma deve stampare "Il MCM tra 7 e 21 è 21".
*/

#include <stdio.h>

int main() {
    int A, B; // Variabili per i numeri
    int mcd; // Variabile per il massimo comune divisore
    int mcm; // Variabile per il minimo comune multiplo
    int i; // Variabile di iterazione

    // Prendo in input i valori di A e B
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);
    printf("Inserisci il valore di B: ");
    scanf("%d", &B);

    // Calcolo il MCD tra A e B
    for (i = 1; i <= A && i <= B; i++) {
        if (A % i == 0 && B % i == 0) {
            mcd = i; // Aggiorno il MCD se è un divisore comune
        }
    }

    // Calcolo il MCM tra A e B
    mcm = (A * B) / mcd;

    // Stampa del risultato finale
    printf("Il MCM tra %d e %d è %d\n", A, B, mcm);
}