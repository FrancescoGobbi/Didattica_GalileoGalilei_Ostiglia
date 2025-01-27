/*

Nome:
Cognome: 
Classe:
Data:


Es1 B (2,5 punti)
Creare un programma in C che prenda in input da parte dell'utente due valori interi (A e B).
Il programma deve abbiungere al valore di B il valore di A, ovvero al valore di B deve essere aggiunto
il valore di A.
Successivamente si deve sottrarre al valore di B 10, quindi decrementrare di 10 il valore di B.
Infine si deve moltiplicare il valore di A al valore di B in una nuova variabile C.
Stampre il valore finale di A, di B e di C.

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

    // Operazioni richieste
    B = B + A; // B += A;
    B = B - 10; // B -= 10;
    C = A * B;

    // Stampa dei valori finali
    printf("Valore finale di A: %d\n", A);
    printf("Valore finale di B: %d\n", B);
    printf("Valore finale di C: %d\n", C);
}