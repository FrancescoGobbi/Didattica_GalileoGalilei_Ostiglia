#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0)
e stampi un triangolo al contrario formato da asterischi in base alla dimensione della variabile n

ESEMPIO: se n = 4
La stampa dovrà essere:
* * * *
* * *
* *
*

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
    
    // Doppia iterazione annidata
    // Parto al contrario con la variabile di iterazione
    for(i=n; i>0; i--) { // For per le righe
        for(j=1; j<=i; j++) { // For per le colonne
            printf(" * ");
        }
        printf("\n"); // Vado a capo
    }

}