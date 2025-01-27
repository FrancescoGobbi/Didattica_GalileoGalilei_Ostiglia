/*

Nome:
Cognome: 
Classe:
Data:


Es3 B (3 punti)
Creare un programma in C che prenda in input 2 valori interi (A e B).
Il programma moltiplicare alla variabile A il numero 3, mentre alla variabile B deve aggiungere il valore di 10.
Successivamente al valore di A devo aggiungere 15, mentre vede sottrarre al valore di B 10.
Il programma deve verificare quale tra i due valori, dopo le varie operazioni, è il minore.
Il programma deve stampare il valore minore.
Il programma deve poi verificare e stampare i valori dispari sulle variabili A e B,
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
    A = A * 3; // A *= 3;
    B = B + 10; // B += 10;
    A = A + 15; // A += 15;
    B = B - 10; // B -= 10;

    // Verifica e stampa del valore minore
    if (A < B) {
        printf("Il valore minore è A: %d\n", A);
    } 
    else {
        printf("Il valore minore è B: %d\n", B);
    }

    // Verifica e stampa dei valori dispari
    if (A % 2 != 0) {
        printf("A è dispari: %d\n", A);
    } 
    else {
        printf("A non è dispari: %d\n", A);
    }
    if (B % 2 != 0) {
        printf("B è dispari: %d\n", B);
    } 
    else {
        printf("B non è dispari: %d\n", B);
    }
}