/*
Verifica 2TRED
Nome:
Cognome:
*/

#include <stdio.h>

int main() {
    /*
    Creare un programma in C che prenda in input due valori (A e B) interi e compresi tra 1 e 10.
    Il programma deve eseguire la somma dei primi A-valori e la somma dei primi B-valori.
    Successivamente il programma deve calcolare l'operazione: (somma dei primi A-valori) - (somma dei primi B-valori)
    e stampare il risultato.

    ESEMPIO:
    Se A = 5 e B = 6,
    la sommatoria dei valori di A è 5+4+3+2+1=15, mentre il sommatoria di B è 6+5+4+3+2+1=21.
    Quindi il valore maggiore tra la somma dei primi valori di B, mentre il minore sarà quello di A.
    Il programma calcolerà 21 - 15 = 6 e stamperà il risultato.
    */

    int A, B;
    int sommatoriaA = 1, sommatoriaB = 1;
    int i;
    int diffSommatoria;

    do{
        printf("Inserisci due numeri interi: ");
        scanf("%d %d", &A, &B);
    }while((A<1 ||A>10) || (B<1 || B>10));

    for(i = 1; i <= A; i++) {
        sommatoriaA+=i;
    }

    for(i = 1; i <= B; i++) {
        sommatoriaB+=i;
    }

    if(sommatoriaA > sommatoriaB) {
        diffSommatoria = sommatoriaA - sommatoriaB;
    }
    else {
        diffSommatoria = sommatoriaB - sommatoriaA;
    }

    printf("La differenza tra le due sommatorie è: %d\n", diffSommatoria);
}