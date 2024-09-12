#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0) e m (m>0)
e stampi un rettandolo di dimensione nxm come mostrato in figura.

ESEMPIO: se n = 4 e m = 5
La stampa dovrà essere:
* * * * *
*       *
*       *
* * * * *

*/

int main() {
    int n, m;
    int i; // Per le righe
    int j; // Per le colonne
    int val = 1;

    do{
        printf("Inserisci un numero n per le righe: ");
        scanf("%d", &n);
    }while(n<=0);

    do{
        printf("Inserisci un numero n per le colonne: ");
        scanf("%d", &m);
    }while(m<=0);

    for(i=1; i<=n; i++){ // Iterazione per le righe
        for(j=1; j<=m; j++) { // Iterazione per le colonne
            if (i==1 || i==n || j==1 || j==m) {
                printf(" * ");
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }
}