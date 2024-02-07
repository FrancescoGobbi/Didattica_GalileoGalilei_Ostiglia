#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0)
e stampi un triangolo formato da asterischi in base alla dimensione della variabile n

ESEMPIO: se n = 4
La stampa dovrà essere:
*
* *
* * *
* * * *

*/

int main() {
    int n;
    int i; // Per le righe della figura
    int j; // Per le colonne della figura

    do{
        printf("Inserisci un numero n: ");
        scanf("%d", &n);
    }while(n<=0);

    printf("Stampo la figura:\n");
    
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

}