/*

Nome:
Cognome: 
Classe:
Data:


Es3 A (3 punti)
Creare un programma in C che prenda in input 2 valori interi (A e B).
Il programma moltiplicare alla variabile A il numero 5, mentre alla variabile B deve aggiungere il valore di 20.
Successivamente al valore di A devo aggiungere 15, mentre vede sottrarre al valore di B 10.
Il programma deve verificare quale tra i due valori, dopo le varie operazioni, è il maggiore.
Il programma deve stampare il valore maggiore.
Il programma deve poi verificare e stampare i valori pari sulle variabili A e B, 
dopo aver eseguito le varie operazioni su A e B.

*/ 
// Questo sopra è un commento ad area da non eliminare o modificare!


#include <stdio.h>

int main() {
    int A, B;

    // Input dei valori
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);
    printf("Inserisci il valore di B: ");
    scanf("%d", &B);

    // Operazioni richieste
    A = A * 5; // A *= 5;
    B = B + 20; // B += 20;
    A = A + 15; // A += 15;
    B = B - 10; // B -= 10;

    // Verifica e stampa del valore maggiore
    if (A > B) {
        printf("Il valore maggiore è A: %d\n", A);
    }
    else {
        printf("Il valore maggiore è B: %d\n", B);
    }

    // Verifica e stampa dei valori pari
    if (A % 2 == 0) {
        printf("A è pari: %d\n", A);
    } 
    else {
        printf("A non è pari: %d\n", A);
    }
    if (B % 2 == 0) {
        printf("B è pari: %d\n", B);
    } 
    else {
        printf("B non è pari: %d\n", B);
    }
}