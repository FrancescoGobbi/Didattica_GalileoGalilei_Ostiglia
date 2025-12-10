/*
Esercizio 6: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Creare una funzione in C che prenda in input un numero intero n.
La funzione deve calcolare e restituire la maedia dei fattoriali dei numeri da 1 a n.
ESEMPIO: n = 4 --> return della funzione = 8.25 (perchè (1! + 2! + 3! + 4!) / 4 = 8.25)

FUNZIONE 2:
Creare una funzione in C che prenda in input un numero intero a ed un numero intero b.
La funzione deve calcolare e restituire il numero(quantitativo) di numeri primi tra il numero a ed il numero b (compresi).
ESEMPIO: a = 5, b = 15 --> return della funzione = 4 (perchè i numeri primi tra 5 e 15 sono: 5, 7, 11, 13 --> totale 4 numeri primi)
*/

#include <stdio.h>

// Definizione delle funzioni da creare
int isPrimo(int n);

// FUNZIONE 1
float mediaFattoriali(int n);

// FUNZIONE 2
int contaNumeriPrimi(int a, int b);

int main(){
    int n = 4;
    int a = 5;
    int b = 15;

    float media = mediaFattoriali(n);
    int countPrimi = contaNumeriPrimi(a, b);

    printf("Media dei fattoriali da 1 a %d: %f\n", n, media);
    printf("Numero di numeri primi tra %d e %d: %d\n", a, b, countPrimi);
}

// Definizione delle funzioni da creare
int isPrimo(int n) {
    int i;
    int countDivisori = 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            countDivisori++;
        }
    }

    if (countDivisori == 2) {
        return 1;
    } else {
        return 0;
    }
}

// FUNZIONE 1
float mediaFattoriali(int n) {
    int i, j;
    float sommaFattoriali = 0.0;
    float fattoriale;

    for (i = 1; i <= n; i++) {
        fattoriale = 1.0;
        for (j = 1; j <= i; j++) {
            fattoriale *= j;
        }
        sommaFattoriali += fattoriale;
    }

    return sommaFattoriali / n;
}

// FUNZIONE 2
int contaNumeriPrimi(int a, int b) {
    int i, j;
    int countPrimi = 0;

    // Assicurarsi che a sia minore o uguale a b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (isPrimo(i)) {
            countPrimi++;
        }
    }

    return countPrimi;
}   