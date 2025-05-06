/*
Iterazione 24 (Utilizzo delle iterazioni)
Creare un programma in C che prenda in input 2 numeri interi A e B.
Il programma deve calcolare e stampare il massimo comune divisore (MCD) tra i due numeri A e B.
Il MCD è il più grande numero intero che divide entrambi i numeri senza lasciare resto.

ESEMPIO:
Se l'utente inserisce A=12 e B=18, il programma deve stampare "Il MCD tra 12 e 18 è 6".
Se l'utente inserisce A=15 e B=25, il programma deve stampare "Il MCD tra 15 e 25 è 5".
Se l'utente inserisce A=7 e B=21, il programma deve stampare "Il MCD tra 7 e 21 è 7".
*/

#include <stdio.h>

int main() {
    int A, B; // Variabili per i numeri
    int mcd; // Variabile per il massimo comune divisore
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

    // Stampa del risultato finale
    printf("Il MCD tra %d e %d è %d\n", A, B, mcd);
}