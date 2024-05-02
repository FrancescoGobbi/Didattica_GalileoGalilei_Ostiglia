#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0) ed un valore m(m>0)
e stampi un rettangolo di dimensioni n*m, con n numero delle righe
ed m numero delle colonne

ESEMPIO: se n = 4 e m = 5
La stampa dovrà essere:
* * * * *
* * * * *
* * * * *
* * * * *

*/

int main() {
    int n, m;
    int i; // Per le righe della figura
    int j; // Per le colonne della figura

    do{
        printf("Inserisci un numero n: ");
        scanf("%d", &n);
    }while(n<=0);

    do{
        printf("Inserisci un numero m: ");
        scanf("%d", &m);
    }while(m<=0);

    printf("Stampo la figura:\n");
    
    // Doppia iterazione annidata
    for(i=1; i<=n; i++) { // For per le righe
        for(j=1; j<=m; j++) { // For per le colonne
            printf(" * ");
        }
        printf("\n"); // Vado a capo
    }

}