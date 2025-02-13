#include <stdio.h>

/*
Creare una funzione sommaFibonacci che prenda in input due valori interi a e b.
La funzione deve restituire la somma tra il numero di Fibonacci di a e il numero di Fibonacci di b.
Quindi la somma tra il numero in posizione a della serie di Fibonacci con il numero b della serie di Fibonacci.
*/
int sommaFibonacci(int a , int b);

/*
Crea una funzione ricorsiva MCD (Massimo Comun Divisore) che prenda in input due valori unteri a e b.
La funzione deve calcolare in modo ricorsivo l'MCD tra a e b.
N.B. Utilizzare l'algoritmo di Euclide per il calcolo dell'MCD.
*/
float MCD(int a, int b);

/*
Creare una funzione ricorsiva che prenda in input un numero intero n.
La funzione deve stampare in ordine inverso il numero n.asm
Se n = 1234, la funzione deve stampare 4 3 2 1
*/
void stampaInversaNumero(int n);

int main() {
    int a = 5, b = 6;

    int somma = sommaFibonacci(a, b);
    printf("La somma dei numeri di Fibonacci in posizione %d e %d è: %d\n", a, b, somma);

    int mcd = MCD(a, b);
    printf("L'MCD tra %d e %d è: %d\n", a, b, mcd);
}

int sommaFibonacci(int a , int b){
    // TO DO...
}

float MCD(int a, int b) {
    // TO DO...
}

void stampaInversaNumero(int n){
    // TO DO...
}