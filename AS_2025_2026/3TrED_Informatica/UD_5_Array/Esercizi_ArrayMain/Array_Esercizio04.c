/*
Creare un codice in C in cui dato un array di dimensione fissata, vengono inseriti in modo randomico i valori
al suo interno tra 1 e 10.

Il codie dovrà sostituire i valori dell'array con i corrispettivi valori della Serie di Fibonacci.
Considerando che la Serie di Fibonacci parte da 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
e che ogni numero è dato dalla somma dei due numeri precedenti.
N.B. Il numero 0 possiamo considerarlo come il primo numero della Serie di Fibonacci, 
quindi l'elemento dell'array che contiene il valore 0 sarà sostituito con 0, 
l'elemento che contiene il valore 1 sarà sostituito con 1, 
l'elemento che contiene il valore 2 sarà sostituito con 1, 
l'elemento che contiene il valore 3 sarà sostituito con 2, e così via.

Quindi dovrò calcolare l'i-esimo numero della Serie di Fibonacci,
dove i è il valore dell'elemento dell'array, e sostituire l'elemento con il numero calcolato.

ESEMPIO: se l'array è [3, 5, 2, 8, 1, 4, 6, 7, 9, 10] allora l'array diventerà [2, 5, 1, 21, 1, 3, 8, 13, 34, 55]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define DIM 10

// Funzione per inizializzare un array con valori randomici compresi tra inizio e fine
void initRandomVet(int vet[], int dim, int inizio, int fine); 

// Funzione ricorsiva per calcolare l'i-esimo numero della Serie di Fibonacci
int fibonacci(int n); 

// Funzione per stampare un array di interi
void stampaVettore(int vet[], int dim);

int main() {
    int arr[DIM] = {0};
    printf("Indirizzo di memoria del puntatore nel main(): %p\n", &arr);
    printf("Sono nel main(): %p\n", arr);
    initRandomVet(arr, DIM, 1, 10);

    stampaVettore(arr, DIM);
    printf("\n");
    int i;
    for(i = 0; i<DIM; i++){
        arr[i] = fibonacci(arr[i]);
    }

    stampaVettore(arr, DIM);
    printf("\n");
}


void initRandomVet(int vet[], int dim, int inizio, int fine) {
    srand(time(0));
    printf("Indirizzo di memoria del puntatore nel initRandomVet(): %p\n", &vet);
    printf("Sono in initRandomVet(): %p\n", vet);
    int i;
    for(i = 0; i < dim; i++) {
        vet[i] = rand() % (fine - inizio + 1) + inizio; // Genera un numero casuale tra n e m
        // rand() % (m - n + 1) genera un numero tra 0 e (m - n), quindi aggiungendo n otteniamo un numero tra n e m
    }
}

int fibonacci(int n) {
    if (n == 0 || n == 1){
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void stampaVettore(int vet[], int dim) {
    printf("Indirizzo di memoria del puntatore nel stampaVettore(): %p\n", &vet);
    printf("Sono in stampaVettore(): %p\n", vet);
    int i;
    for(i = 0; i < dim; i++) {
        printf("%4d", vet[i]);
    }
}