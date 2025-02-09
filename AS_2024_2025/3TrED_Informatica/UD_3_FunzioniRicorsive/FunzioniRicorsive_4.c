#include <stdio.h>

/* Creare una funzione ricorsiva in C che prenda in input un numero intero n.
La funzione deve contare e restituire il numero dei numeri pari tra n ed 1.
*/
int contaPari(int n);

/*  Creare una funzione ricorsiva in C che prenda in input un numero n ed un
numero m.
La funzione deve sommare e restituire la somma di tutti i numeri pari tra 1 e n 
sommata a quella tra 1 ed m.
*/
int sommaPari(int n, int m);

/*
Creare una funzione ricorsiva in C che prenda in input un numero a ed un
numero b.
La funzione deve restituire il risultato della divisione tra a e b, utilizzando
la ricorsione.
*/
int divisione(int a, int b);

int main() {
    int n = 5, m = 6;

    printf("Esercizio di conta dei numeri pari\n");
    int pari = contaPari(n);
    printf("Il numero di numeri pari tra 1 e %d è: %d\n", n, pari);
    int pari2 = contaPari(m);
    printf("Il numero di numeri pari tra 1 e %d è: %d\n", m, pari2);

    printf("\n\n\nEsercizio della SOMMA dei numeri pari\n");
    int somma = sommaPari(n, m);
    printf("La somma dei numeri pari tra 1 e %d e tra 1 e %d è: %d\n", n, m, somma);

    printf("\n\n\nEsercizio della DIVISIONE\n");
    int a = 10, b = 2;
    int div = divisione(a, b);
    printf("La divisione tra %d e %d è: %d\n", a, b, div);
}

int contaPari(int n) {
    // TO DO...
}

int sommaPari(int n, int m){
    // TO DO...
}

int divisione(int a, int b){
    // TO DO...
}