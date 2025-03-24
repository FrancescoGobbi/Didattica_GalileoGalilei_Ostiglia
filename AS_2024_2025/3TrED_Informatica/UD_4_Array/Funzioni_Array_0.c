#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void initRandomVet(int vet[], int dim);

int main() {
    int vet[DIM] = {0};
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    printf("Vettore inziale: (prima della generazione randomica)\n");
    // Stampiamo il vettore inziale
    for(i = 0; i < DIM; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");

    initRandomVet(vet, DIM);

    printf("\n\n\nVettore inziale: (dopo la generazione randomica)\n");
    // Stampiamo il vettore inziale
    for(i = 0; i < DIM; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");
}

void initRandomVet(int vet[], int dim) {
    int i;

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %10;
    }
}