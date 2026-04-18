#include <stdio.h>

/*
Creare una funzione ricoriva in C che prenda in input un numero intero n.
La funzione deve contare e restituire il numero dei numeri pari tra n ed 1.

ESEMPIO: se n = 5, deve restituire 2 in quanto ci sono 2 numeri pari tra 1 e 5 (2 e 4).
*/
int contaPari(int n);

int main() { 
    int valore;
    printf("Inserisci un numero intero: ");
    scanf("%d", &valore);

    printf("Esercizio di conta dei numeri pari\n");
    int pari = contaPari(valore);
    printf("Il numero di numeri pari tra 1 e %d è: %d\n", valore, pari);
}

int contaPari(int n) {
    // TO DO...
}