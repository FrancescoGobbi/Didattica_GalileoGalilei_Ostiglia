/**
 * @file Ripasso1.c
 * @author your name 
 * @brief Creare un file in C che prenda in input due valor interi A e B, con A < B.
 * Il programma deve stampare una matrice di AxB con tutti * .
 * @version 0.1
 * @date 2024-09-13
 *
 * 
 */

#include <stdio.h>

int main() {
    // Creazione delle variabili
    int A, B, i, j;

    // Input delle variaibli
    do {
        printf("Inserisci due valori: ");
        scanf("%d %d", &A, &B);
    }while(A>=B); // Condizione da verificare

    for(i = 1; i<=A; i++) { // Iterazione per le righe
        for(j = 1; j<=B; j++) { // Iterazione per le colonne
            printf(" * ");
        }
        printf("\n"); // Vado a capo riga
    }
}