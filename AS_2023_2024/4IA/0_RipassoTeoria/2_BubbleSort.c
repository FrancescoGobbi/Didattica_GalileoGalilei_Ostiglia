#include <stdio.h>

#define dim 10

void stampaVet(int vet[], int DIM);
void bubbleSort(int vet[], int DIM);
void swap(int *x, int *y);

int main() {
    int vet[dim] = {3,4,5,2,1,0,6,8,9,7}; // Create a new vector
    int i; // index of vector

    printf("\nPrima dell'ordinamento: ");
    stampaVet(vet, dim);
    bubbleSort(vet, dim);
    printf("\nDopo dell'ordinamento: ");
    stampaVet(vet, dim);
}

void stampaVet(int vet[], int DIM){
    int i;
    printf("\nIl vettore è così composto:\n");
    for(i=0; i<DIM; i++){
        printf("%4d", vet[i]);
    }
    printf("\n"); // new line
}

void bubbleSort(int vet[], int DIM) {
    int i,j;
    int tmp;

    for(i=0; i<DIM-1; i++){ // Look vector
        for(j=0; j<(DIM-1-i); j++) { // Compare the values
            if(vet[j]>vet[j+1]) {
                swap(&vet[j], &vet[j+1]);
            }
        }
    }
}

// Swap two value in two different location, with pointer
void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}