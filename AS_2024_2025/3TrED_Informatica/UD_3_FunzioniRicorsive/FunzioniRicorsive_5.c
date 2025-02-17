#include <stdio.h>

int fibonacci(int n);

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

int fibonacci(int n) {

    // Caso base: se n è 0 o 1, ritorna n
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        // Caso/Passo ricorsivo: somma dei due numeri precedenti della sequenza
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int sommaFibonacci(int a, int b) {
    // Calcola la somma dei numeri di Fibonacci in posizione a e b
    return fibonacci(a) + fibonacci(b);
}

int MCD(int a, int b) {
    // Caso base: se b è 0, ritorna a
    if (b == 0) {
        return a;
    }
    else {
        // Caso/Passo ricorsivo: chiama MCD con b e il resto della divisione di a per b
        return MCD(b, a % b);
    }
}

void stampaInversaNumero(int n) {
    // Caso base: se n è 0, termina la ricorsione
    if (n == 0) {
        return;
    }
    else {
        // Caso/Passo ricorsivo: stampa l'ultima cifra di n e chiama la funzione con n diviso per 10
        printf("%d ", n % 10);
        stampaInversaNumero(n / 10);
    }
}