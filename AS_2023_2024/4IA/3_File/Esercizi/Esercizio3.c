#include <stdio.h>

#define DIM 15

int main() {
    // Nome del file
    char file_name[] = "valori.txt";
    // Variabili
    int val;
    int n;

    // Apertura del file
    FILE * fpIn = fopen(file_name, "wt");

    // Esercizio 3
    /*
    Scrivere il file "valori.txt":
    - chiedere un numero di valori in input all'utente, terminati con il valore 0
    - i valori che l'utente inserisce devono essere scritti nel file "valori.txt"
    - i valori che si possono scrivere nel file sono esclusivi, quindi non ci possono essere doppioni/ripetizioni

    ES input: 3, 4, 4, 5, 6, -9 , 0
    Nel file dovrà esserci: 3, 4, 5, 6, -9 (chiaramente non lo 0)
    */

}