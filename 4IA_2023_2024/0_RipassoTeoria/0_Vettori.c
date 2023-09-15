#include <stdio.h>

#define dim 10

int main() {
    int vet[dim] = {0};
    int i;

    for(i=0; i<dim, i++){
        printf("Inserisci un valore in posizione %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nIl vettore è così composto:\n");
    for(i=0; i<dim, i++){
        printf("%4d: ", vet[i]);
    }
}