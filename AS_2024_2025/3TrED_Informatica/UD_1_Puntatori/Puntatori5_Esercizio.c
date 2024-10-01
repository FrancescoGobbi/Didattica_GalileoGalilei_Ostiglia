/**
 * @file Puntatori5_Esercizio.c
 * @author your name
 * @brief Crea un programma in C che prenda in input un valore intero naturale n (n>=0) 
 * e due caratteri (char) in input A e B.
 * Il programma deve stampare una matrice quadrata in cui le righe si alternano tra il
 * valore contenuto nella variabile A e quello contenuto nella variabile B.
 * 
 * ESEMPIO: n = 3, A = 'c' e B = 'd'
 * Quindi si stamperà:
 * c c c 
 * d d d
 * c c c
 * 
 * N.B. L'intero esercizio deve essere svolto utilizzando i puntatori
 * che puntano alle variabili (il tipo è di vostra interpretazione ed utilizzo)
 * @version 0.1
 * @date 2024-09-28
 * 
 */

#include <stdio.h>

int main() {
    int n;
    int *pn = &n;
    char A, B;
    char *pA = &A;
    char *pB = &B;
    int i, j;

    printf("Inserisci la dimensione della figura: ");
    scanf("%d", pn);
    fflush(stdin);

    printf("Inserisci una prima lettera: ");
    scanf("%c", pA);
    fflush(stdin);
    printf("Inserisci una seconda lettera: ");
    scanf("%c", pB);
    fflush(stdin);
    
    for(i = 1; i<= *pn; i++) {
        for(j = 1; j<= *pn; j++) {
            if (i % 2 == 0) { // Riga pari
                printf(" %c ", *pB);
            }
            else {
                printf(" %c ", *pA);
            }
        }
        printf("\n");
    }
}