/*
Verifica 2TRED
Nome:
Cognome:
*/

#include <stdio.h>

int main() {
    /*
    Creare un programma in C che prenda in input due valori 
    interi e maggiori di 0(A e B) con A<B.
    Il programma deve stampare tutti i numeri compresi tra A e B (compreso)
    che siano divisibili per 2.


    ESEMPIO:
    Se A = 1 e B = 6,
    il programma deve stampare : 2, 4, 6 . 
    In quanto sono dei numeri divisibili per 2 e compresi nel range A>B
    */


    int A, B;
    int i;

    do{
        printf("Inserisci il primo valore: ");
        scanf("%d", &A);
    }while(A<=0);

    do{
        printf("Inserisci il secondo valore: ");
        scanf("%d", &B);
    }while(A>=B);

    printf("Numeri divisivili per 2 tra %d e %d:\n", A, B);
    for(i = A; i<=B; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}