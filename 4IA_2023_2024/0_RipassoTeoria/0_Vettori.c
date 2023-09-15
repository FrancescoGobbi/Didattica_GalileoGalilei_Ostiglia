#include <stdio.h>

#define dim 10

int main() {
    int vet[dim] = {0}; // Create a new vector
    int i; // index of vector

    // Request number in vector
    for(i=0; i<dim; i++){
        printf("Inserisci un valore in posizione %d: ", i);
        scanf("%d", &vet[i]);
    }

    // Print all number in vector
    printf("\nIl vettore è così composto:\n");
    for(i=0; i<dim; i++){
        printf("%4d", vet[i]);
    }
    printf("\n"); // new line
}