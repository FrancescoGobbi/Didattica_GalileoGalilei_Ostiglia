/*

Nome:
Cognome: 
Classe:
Data:


Es3 C (3 punti)
Creare un programma in C che prenda in input 3 valori interi (A, B e C).
Il programma deve moltiplicare alla variabile A il numero 5, mentre alla variabile C deve aggiungere il valore di 20.
Successivamente al valore di A devo aggiungere il valore di B, mentre devo sottrarre al valore di B il valore di C.
Infine il programma deve aggiungere al valore di A 10, al valore di B 60 ed al valore di C -10.

Il programma deve poi verificare e stampare i valori pari sulle variabili A e B e C, 
dopo aver eseguito le varie operazioni su A e B e C.

*/ 
// Questo sopra è un commento ad area da non eliminare o modificare!


#include <stdio.h>

int main() {
int A, B, C;

    // Input dei valori
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);
    printf("Inserisci il valore di B: ");
    scanf("%d", &B);
    printf("Inserisci il valore di C: ");
    scanf("%d", &C);

    // Operazioni richieste
    A = A * 5; // A *= 5;
    C = C + 20; // C += 20;
    A = A + B; // A += B;
    B = B - C; // B -= C;
    A = A + 10; // A += 10;
    B = B + 60; // B += 60;
    C = C - 10; // C -= 10;

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
    if (C % 2 == 0) {
        printf("C è pari: %d\n", C);
    } 
    else {
        printf("C non è pari: %d\n", C);
    }
}