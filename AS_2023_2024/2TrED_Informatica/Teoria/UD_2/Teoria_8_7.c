#include <stdio.h>

/*
Creare un programma in C che esegua l'intera tabella 
delle moltiplicazioni.

Vedi la seguente tabella:
https://digilander.libero.it/sergiobor/La%20tabella%20della%20moltiplicazione.pdf

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