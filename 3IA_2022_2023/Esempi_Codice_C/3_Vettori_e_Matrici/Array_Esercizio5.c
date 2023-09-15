#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Per le variabili booleane
#define DIM 10

void randomVal(int vet[], int dim, int vmin, int vmax);

void stampaVet(int vet[], int dim);

void bubbleSort(int vet[], int dim);

void swap(int *n, int *m);

int main() {
    int vet[DIM];

    randomVal(vet, DIM, 1, 20);
    stampaVet(vet, DIM);

    bubbleSort(vet, DIM);
    stampaVet(vet, DIM);
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

void bubbleSort(int vet[], int dim) {
    int i, j;

    for(i=0; i<(dim - 1); i++) {
        for(j=0; j<(dim - i - 1); j++) {
            if(vet[j]>vet[j+1]) {
                swap(&(vet[j]), &(vet[j+1]));
            }
        }
    }
}

void swap(int *n, int *m) {
    int tmp;
    tmp = *n;
    *n = *m;
    *m = tmp;
}