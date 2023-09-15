#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Per le variabili booleane
#define DIM 20
#define DIM2 10

void randomVal(int vet[], int dim, int vmin, int vmax);

void stampaVet(int vet[], int dim);

void fibonacciVet(int vet[], int dim);

int main() {
    int vet[DIM];

    fibonacciVet(vet, DIM);
    stampaVet(vet, DIM);

    int vet2[DIM2];
    randomVal(vet2, DIM2, 1, 100);
    stampaVet(vet2, DIM2);
    int vet3[DIM2];
    randomVal(vet3, DIM2, 1, 100);
    stampaVet(vet3, DIM2);
}

void randomVal(int vet[], int dim, int vmin, int vmax) {
    int i;
    for(i=0;i<dim;i++) {
        vet[i] = rand()%vmax + vmin;
    }
}

void stampaVet(int vet[], int dim) {
    int i;
    printf("Il vettore è così composto: \n");
    for(i=0; i<dim; i++) {
        printf("%5d", vet[i]);
    }
    printf("\n");
}

void fibonacciVet(int vet[], int dim) {
    int i;

    // Inizializzo per la sedie di Fibonacci
    vet[0] = 0;
    vet[1] = 1;

    for(i=2; i<dim; i++) {
        vet[i] = vet[i-1] + vet[i-2];
    }
}

