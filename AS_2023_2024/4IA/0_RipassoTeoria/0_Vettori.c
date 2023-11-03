#include <stdio.h>

#define dim 10

void stampaVet(int _vet[], int DIM);
void inserisciVal(int _vet[], int DIM);

int main() {
    int vet[dim] = {0}; // Create a new vector
    
    // Request number in vector
    inserisciVal(vet, dim);

    // Print all number in vector
    stampaVet(vet, dim);
}

void stampaVet(int _vet[], int DIM){
    int i;
    printf("\nIl vettore è così composto:\n");
    for(i=0; i<dim; i++){
        printf("%4d", _vet[i]);
    }
    printf("\n"); // new line
}

void inserisciVal(int _vet[], int DIM) {
    int i; // index of vector

    for(i=0; i<DIM; i++){
        printf("Inserisci un valore in posizione %d: ", i);
        scanf("%d", &_vet[i]);
    }
}
