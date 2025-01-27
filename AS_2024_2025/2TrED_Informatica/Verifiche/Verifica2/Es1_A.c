/*

Nome:
Cognome: 
Classe:
Data:


Es1 A (2,5 punti)
Creare un programma in C che prenda in input da parte dell'utente due valori interi (A e B).
Il programma deve sottrarre dal valore di A al valore di B. (Quindi decrementare al valore di A il valore di B)
Successivamente il programma vede aggiungere a B il valore di 10. (Il valore di B deve essere aumentato di 10)
Infine il programma deve moltiplicare al il valore di A al valore di B e salvare il tutto in nuova variabile C.
Stampare poi il valore di A, di B e di C.

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
    A = A - B; // A -= B;
    B = B + 10; // B += 10;
    C = A * B;

    // Stampa dei valori finali
    printf("Valore finale di A: %d\n", A);
    printf("Valore finale di B: %d\n", B);
    printf("Valore finale di C: %d\n", C);
}