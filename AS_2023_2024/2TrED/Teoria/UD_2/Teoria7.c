#include <stdio.h>

/*
Creare un programma in C che prende in input un numero intero n (n>0)
e stampare tante volte quanto è il valore n la parola "Ciao!"
N.B. Serve andare a capo ad ogni parola stampata
*/

int main() {
    int n, i;

    do{
        printf("Inserisci un numero n: ");
        scanf("%d", &n);
    }while(n<=0);

    for(i=1; i<=n; i++) {
        printf("Ciao!\n");
    }
}