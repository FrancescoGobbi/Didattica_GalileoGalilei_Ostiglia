#include <stdio.h>

#define DIM 15

int main() {
    // Nome del file
    char file_name[] = "scrittura.txt";
    // Variabili
    char str[DIM];
    int n;

    // Apertura del file
    FILE * fpIn = fopen(file_name, "wt");

    // ESERCIZIO 1
    /* Dato il file/stream aperto per la scrittura:
    - chiedere in input all'untente un valore numerico n
    - chiedere n-parole di lunghezza minore di 15 all'utente
    - ogni parola deve essere scritta nel file
    */


    fclose(fpIn);
}