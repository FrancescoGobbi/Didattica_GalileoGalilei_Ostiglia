#include <stdio.h>

// Esercizio 7
/* 
TESTO ESERCIZIO:  
Creare un programma in C che prenda in input un valore n (n>0).
Il programma chiederà poi all'utente di inserire n-valori interi e maggiori di 0.
Il programma deve eseguire la somma dei valori inseriti e stmapare il valore.

ESEMPIO: Se n = 5, ipotizziamo che l'utente inserisca
questi 5 valori: 6, 5, 4, 8, 10 --> la somma sarà: 33
*/

int main() {
    int n, val, somma = 0, i;

    do{
        printf("Inserisci un valore da fare il fattoriale: ");
        scanf("%d", &n); 
    }while(n<=0);

    for(i = 1; i <= n; i++) {
        printf("Inserisci il (%d)° valore: ", i);
        scanf("%d", &val);
        somma = somma + val;
    }

    printf("La somma dei valori inseriti è: %d\n", somma);
}