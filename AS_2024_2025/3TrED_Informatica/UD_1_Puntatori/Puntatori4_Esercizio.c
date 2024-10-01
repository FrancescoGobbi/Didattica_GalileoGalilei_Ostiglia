/**
 * @file Puntatori4_Esercizio.c
 * @author your name 
 * @brief Creare un file in C che prenda in input due valori interi A e B
 * utilizzando i puntatori, quindi un puntatore per la variabile A ed
 * uno per la variabile B.
 * Sempre utilizzando i puntatori eseguire la stampa di una rettandolo
 * formato da '*' con dimensioni A x B.
 * 
 * ESEMPIO: Se A = 4 e B = 3
 * L'output dovrà essere:
 * * * *
 * * * *
 * * * *
 * * * *
 * 
 * @version 0.1
 * @date 2024-09-28
 * 
 */

#include <stdio.h>

int main() {
    int A, B;
    int *pA = &A;
    int *pB = &B;
    int i, j;

    printf("Inserisci la dimensione delle righe: ");
    scanf("%d", pA);
    printf("Inserisci la dimensione delle colonne: ");
    scanf("%d", pB);

    for(i = 1; i<= *pA; i++) {
        for(j = 1; j<= *pB; j++) {
            printf(" * ");
        }
        printf("\n");
    }
}