/*
Condizione 4
Creare un programma in C che prenda in input da parte dell'utente tre valori interi (A, B e C).
Il programma deve trovare il massimo tra i tre numeri.
Utilizzare if annidati o condizioni congiunte per determinare il massimo.
Il programma deve stampare "Il numero massimo è X."
*/

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

    // TO DO...
    // Soluzione 1 (Abbastanza corretta)
    if (A > B && A > C) {
        printf("Il numero A: %d è il maggiore\n", A);
    }
    if (B > A && B > C) {
        printf("Il numero B: %d è il maggiore\n", B);
    }
    if (C > A && C > B) {
        printf("Il numero C: %d è il maggiore\n", C);
    }

    // Soluzione 2 (Corretta con if annidati)
    if (A > B) {
        if (A > C) {
            printf("Il numero A: %d è il maggiore\n", A);
        }
        else {
            printf("Il numero C: %d è il maggiore\n", C);
        }
    }
    else {
        if (B > C){
            printf("Il numero B: %d è il maggiore\n", B);
        }
        else {
            printf("Il numero C: %d è il maggiore\n", C);
        }
    }

    // Soluzione 3 (Corretta con else-if, condizioni ed utilizzo di oepratori logici)
    if (A > B && A > C) {
        printf("Il numero A: %d è il maggiore\n", A);
    }
    else if (B > A && B > C) {
        printf("Il numero B: %d è il maggiore\n", B);
    }
    else {
        printf("Il numero C: %d è il maggiore\n", C);
    }
}