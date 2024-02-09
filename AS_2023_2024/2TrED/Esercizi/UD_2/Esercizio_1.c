#include <stdio.h>

/*
Creare un codice in C che prenda in input 5 valori interi
e ne segua la somma.
Alla fine il programma deve stampare la somma ottenuta.
*/

int main() {
    int n, somma = 0, i;

    for(i = 1; i <= 5; i++) {
        printf("Inserisci il %d° valore: ", i);
        scanf("%d", &n);
        somma = somma + n;
    }

    printf("La somma totale è: %d\n", somma);
}