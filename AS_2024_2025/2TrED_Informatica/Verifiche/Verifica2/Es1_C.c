/*

Nome:
Cognome: 
Classe:
Data:


Es1 C (2,5 punti)
Creare un programma in C che prenda in input da parte dell'utente due valori interi (A e B).
Il programma deve abbiungere al valore di B il doppio del valore di A (quindi al valore di B deve essere aggiunto
due volte il valore di A).
Successivamente si deve aggiungere al valore di A il valore di B.
Poi ancora si deve ridurre il valore di B di 20.
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
    B = B + 2 * A; // B += 2 * A;
    A = A + B; // A += B;
    B = B - 20; // B -= 20;
    C = A * B;

    // Stampa dei valori finali
    printf("Valore finale di A: %d\n", A);
    printf("Valore finale di B: %d\n", B);
    printf("Valore finale di C: %d\n", C);
}