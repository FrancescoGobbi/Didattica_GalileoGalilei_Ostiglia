#include <stdio.h>

#define dim 10

void stampaVet(int vet[], int DIM);
void insertioSort(int vet[], int DIM);
void swap(int *x, int *y);

int main() {
    int vet[dim] = {3,4,5,2,1,0,6,8,9,7}; // Create a new vector
    int i; // index of vector

    printf("\nPrima dell'ordinamento: ");
    stampaVet(vet, dim);
    insertioSort(vet, dim);
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

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void insertioSort(int vet[], int DIM) {
    int i, j;
    int key;

    for(i=1; i<DIM; i++) {
        key = vet[i];
        j = i-1;

        while(j>=0 && vet[j]>key) {
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = key;
    }
}