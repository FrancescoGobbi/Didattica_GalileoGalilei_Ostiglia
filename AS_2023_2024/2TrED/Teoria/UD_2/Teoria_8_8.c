#include <stdio.h>

/*
Creare un programma in C che prenda in input un 
valore n (n>0) e che stampi il seguente disegno numerico:

Se n = 5:
5 10 15 20 25
50 45 40 35 30
55 60 65 70 75
100 95 90 85 80
105 110 115 120 125

N.B. Notate che il disegno è quadrato.
*/

int main() {
    //i = RIGHE
    //j = COLONNNE
    int i, j;

    for(i=0; i<=10; i++){ // For per le righe
        for(j=0; j<=10; j++){ // For per le colonne
            printf("%4d", i*j);
        }// Fine for colonne
        printf("\n"); // Vado a capo
    } 
}