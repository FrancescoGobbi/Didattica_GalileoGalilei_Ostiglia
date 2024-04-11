#include <stdio.h>

// ESERCIZIO 13
/*
    Prendere in input due valori numerici A e B (interi e maggiori di 0).
    N.B. A deve essere maggiore di B (A>B).
    Il programma deve stampare tutti i numeri compresi tra A e B 
    che siano dispari (estremi compresi!).

    ESEMPIO:
    Se B = 5 e A = 15 --> Stampo: 5, 7, 9, 11, 13, 15.

    A > 0 AND B > 0 AND A > B

    Controllo quindi: B > 0 AND A > B

*/

int main() {
    int A, B;
    int i;

    // Input di B > 0
    do{
        printf("Inserisci il valore di B: ");
        scanf("%d", &B);
    }while(B<=0);

    // Input di A > B (quindi per forza anche A sarà > 0)
    do{
        printf("Inserisci il valore di A: ");
        scanf("%d", &A);
    }while(B>=A);

    printf("I numeri sono: ");
    for(i = B; i<=A; i++) {
        if(i%2 == 1) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}