/**
 * @file Puntatori7_Esercizio.c
 * @author your name
 * @brief Crea un programma in C che, utilizzando solamente i puntatori,
 * prenda in input con 3 variabili (A, B e C) intere e scambi 
 * i valori contentui nelle variabili tra loro, nel seguente modo:
 * - La variabile B deve contenere il valore di A
 * - La variabile C deve contenere il valore di B
 * - La variabile A deve contenere il valore di C
 * 
 * ESEMPIO: 
 * Se A = 5, B = 6 e C = 8
 * Il programma deve fare:
 * A = 8, B = 5 e C = 6
 * 
 * @version 0.1
 * @date 2024-10-04
 * 
 */

#include <stdio.h>

int main() {
    int A, B, C, tmp;
    int * pA = &A;
    int * pB = &B;
    int * pC = &C;

    printf("Inserisci il valore di A: ");
    scanf("%d", pA);
    printf("Inserisci il valore di B: ");
    scanf("%d", pB);
    printf("Inserisci il valore di C: ");
    scanf("%d", pC);

    printf("I valori sono:\n A = %d, B = %d e C = %d\n", A, B, C);

    // Scambio A - B
    tmp = *pA;
    *pA = *pB;
    *pB = tmp;

    // Scambio C - A
    tmp = *pA;
    *pA = *pC;
    *pC = tmp;

    printf("I valori sono: A = %d, B = %d e C = %d\n", A, B, C);
}