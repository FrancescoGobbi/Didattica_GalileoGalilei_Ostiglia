/*

2) Creare una funzione in C, SOLO FUNZIONE, che prenda in input
un puntatore/riferimento di memoria di una variabile contenuta
nel main().
La funzione esegue la scomposizione in fattori primi del numero
puntato e stampa a video tutti i suoi fattori primi.
La funzione deve poi sostituire nel numero puntato la somma
dei fattori primi del numero appena scomposto.

ESEMPIO:
*x = 10
Scomposizione di *x = 2, 5.
Quindi in *x dovrà essere assegnato 7, in quanto 2+5 = 7

*/

#include <stdio.h>

// Prototipo/Dichiarazione delle funzioni
int contaNumPos(int n);
void fattPrimi1(int *x);
void fattPrimi2(int *x);
void fattPrimi3(int *x);

int main() {
    int n = 5;
    int conta = contaNumPos(n); // Chiamata di funzione
    printf("%d\n", conta); // Prova di stampa del return

    // SOLUZUONE 1 
    n = 50; // cambio il valore di n
    fattPrimi1(&n); // Chiamata di funzione
    printf("%d\n", n); // Prova di stampa

    // SOLUZUONE 2
    n = 50; // cambio il valore di n
    fattPrimi2(&n); // Chiamata di funzione
    printf("%d\n", n); // Prova di stampa

    // SOLUZUONE 3
    n = 50; // cambio il valore di n
    fattPrimi3(&n); // Chiamata di funzione
    printf("%d\n", n); // Prova di stampa
}

// Definizione delle funzioni
/*
1) Creare una funzione in C, SOLO FUNZIONE, che prenda
in input un valore interno (n).
La funzione chiede in input n-valori all'utente.
La funzione restituisce il numero di valori strettamente 
maggiori di 0
*/
int contaNumPos(int n) {
    int i; // Contatore per i cicli
    int count = 0; // Conta i numeri positi
    int val;

    for (i = 0; i< n; i++) {
        printf("Inserisci un valore numerico: ");
        scanf("%d", &val);
        if (val > 0) {
            count++;
        }
    }

    return count; // return(count);
}

void fattPrimi1(int *x) {
    int fatt = 2; // Fattori primi
    int somma = 0; // Somma dei fattori primi
    int val = *x; // Creo una variabile di supporto per non sporcare *x

    while(val > 1) {
        if (val % fatt == 0) {
            printf("%d ", fatt);
            somma += fatt; // somma = somma + fatt;
            val = val / fatt;
        }
        else {
            fatt++;
        }
    }
    *x = somma;
}

void fattPrimi2(int *x) {
    int fatt = 2; // Fattori primi
    int somma = 0; // Somma dei fattori primi
    int val = *x; // Creo una variabile di supporto per non sporcare *x

    while(val > 1) {
        while(val % fatt == 0) {
            printf("%d ", fatt);
            somma += fatt; // somma = somma + fatt;
            val = val / fatt;
        }
            fatt++;
    }
    *x = somma;
}

void fattPrimi3(int *x) {
    int fatt = 2; // Fattori primi
    int somma = 0; // Somma dei fattori primi
    int val = *x; // Creo una variabile di supporto per non sporcare *x

    for (fatt; fatt<=val; fatt++) {
        while(val % fatt == 0) {
            printf("%d ", fatt);
            somma += fatt; // somma = somma + fatt;
            val = val / fatt;
        }
    }
    *x = somma;
}