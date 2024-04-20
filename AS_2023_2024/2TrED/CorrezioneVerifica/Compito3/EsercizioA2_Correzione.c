/*
Verifica 2TRED
Nome:
Cognome:
*/

#include <stdio.h>

int main() {
    /*
    Creare un programma in C che prenda in input due valori (A e B) interi e compresi tra 1 e 10.
    Il programma deve eseguire il fattoriale per i due numeri A e B.
    Successivamente il programma deve calcolare l'operazione: (fattoriale maggiore) - (fattoriale minore)
    e stampare il risultato.

    ESEMPIO:
    Se A = 5 e B = 6,
    il fattoriale di A è 120, mentre il fattoriale di B è 720.
    Quindi il valore maggiore tra i fattoriali è quelli di B, mentre il minore quello di A.
    Il programma calcolerà 720 - 120 = 600 e stamperà il risultato.
    */

    int A, B;
    int fattA = 1, fattB = 1;
    int i;
    int diffFatt;

    do{
        printf("Inserisci due numeri interi: ");
        scanf("%d %d", &A, &B);
    }while((A<1 ||A>10) || (B<1 || B>10));

    for(i = 1; i<=A; i++) {
        fattA = fattA * i;
    }

    for(i = 1; i<=B; i++) {
        fattB = fattB * i;
    }

    if (fattA > fattB) {
        diffFatt = fattA - fattB;
    }
    else {
        diffFatt = fattB - fattA;
    }

    printf("La differenza tra i due fattoriali è: %d\n", diffFatt);
}