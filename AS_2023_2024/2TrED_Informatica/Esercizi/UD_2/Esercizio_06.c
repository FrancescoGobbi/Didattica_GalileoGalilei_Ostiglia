#include <stdio.h>

// Esercizio 6
/* 
TESTO ESERCIZIO:   
Creare un programma in C che prenda in input un valore n
ed esegua il fattoriale di n, stampando il valore del fattoriale.
N.B. Con n>0

ESEMPIO: Se n = 5, il fattoriale sarà 120.
*/

int main() {
    int n, fattoriale = 1, i;

    do {
        printf("Inserisci un valore da fare il fattoriale: ");
        scanf("%d", &n);
    }while(n<=0);

    for(i = 1; i<=n; i++) {
        fattoriale = fattoriale * i; // fattoriale*=1;
    }
    
    printf("Il fattoriale di %d è %d\n", n, fattoriale);
}