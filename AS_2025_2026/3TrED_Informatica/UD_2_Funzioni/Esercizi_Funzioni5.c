/*
Esercizio 5: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Creare una funzione in C che prenda in input un numero intero n.
La funzione sommare tutti i numeri perfetti minori o uguali a n e restituisce la somma.

ESEMPIO: n = 10 --> return della funzione = 18 (perchè 6 è l'unico numero perfetto minore o uguale a 10, quindi 6 = 6)


FUNZIONE 2:
Creare una funzione in C che prenda in input un numero intero a ed un numero intero b.
La funzione calcolare e restituisce la media dei numeri maggiori di b tra i primi a numeri primi.

ESEMPIO: a = 5, b = 3
I primi 5 numeri primi sono: 2, 3, 5, 7, 11
I numeri maggiori di 3 sono: 5, 7, 11
Return della funzione = 7.67 (perchè (5 + 7 + 11) / 3 = 7.67)
*/

#include <stdio.h>

// Definizione delle funzioni da creare
// FUNZIONE 1


// FUNZIONE 2

int main(){

    int val;
    int a, b;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &val);

    // Chiamata delle funzioni da creare
    int risultato1 = sommaNumeriPerfetti(val);
    printf("La somma dei numeri perfetti minori o uguali a %d è: %d\n", val, risultato1);

    printf("\n\nInserisci due numeri interi a e b: ");
    scanf("%d %d", &a, &b);

    float risultato2 = mediaPrimiMaggioriDiB(a, b);
    printf("La media dei numeri maggiori di %d tra i primi %d numeri primi è: %.2f\n", b, a, risultato2);
}

// Definizione delle funzioni da creare

// FUNZIONE 1

// FUNZIONE 2