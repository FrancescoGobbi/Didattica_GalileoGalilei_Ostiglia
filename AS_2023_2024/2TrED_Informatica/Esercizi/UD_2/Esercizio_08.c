#include <stdio.h>

// Esercizio 8
/* 
TESTO ESERCIZIO:   
Creare un programma in C che prenda in input un valore n (n>0).
Il programma chiederà poi all'utente di inserire n-valori interi e maggiori di 0.
Il programma deve eseguire la media dei valori inseriti e stampare il risultato.

ESEMPIO: Se n = 5, ipotizziamo che l'utente inserisca
questi 5 valori: 6, 5, 4, 8, 10 --> la media tra questi sarà: 6,6
*/

int main() {
    int n, val, somma = 0, i;
    float media;

    do{
        printf("Inserisci il numero di valori che vuoi inserire: ");
        scanf("%d", &n); 
    }while(n<=0);

    for(i = 1; i <= n; i++) {
        printf("Inserisci il (%d)° valore: ", i);
        scanf("%d", &val);
        somma = somma + val;
    }

    media = (float)somma / n;
    printf("La media dei valori inseriti è: %f\n", media);
}

// ALTERNATIVA
/*
    int n, val, i;
    float media = 0;

    do{
        printf("Inserisci un valore da fare il fattoriale: ");
        scanf("%d", &n); 
    }while(n<=0);

    for(i = 1; i <= n; i++) {
        printf("Inserisci il (%d)° valore: ", i);
        scanf("%d", &val);
        media = media + val;
    }

    media = media / n;
    printf("La media dei valori inseriti è: %f\n", media);
*/