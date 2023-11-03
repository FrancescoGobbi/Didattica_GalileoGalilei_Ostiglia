#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void initRandomVal(int vet[], int dim, int min, int max);

void stampaVet(int vet[], int dim);

int contaVal(int vet[], int dim, int x);

int main(){
    int vet[DIM] = {0};
    srand(time(NULL));

    initRandomVal(vet, DIM, 1, 10);
    stampaVet(vet, DIM);

    int cnt = contaVal(vet, DIM, 10);
    printf("Il valore %d compare %d volte nel vettore\n", 10, cnt);
}

void initRandomVal(int vet[], int dim, int min, int max) {
    int i;
    for(i=0;i<dim;i++) {
        vet[i] = rand()%(max-min+1) + min;
    }
}

void stampaVet(int vet[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        printf("%5d", vet[i]);
    }
    printf("\n");
}

int contaVal(int vet[], int dim, int x) {
    int i;
    int count = 0;
    for(i=0; i<dim; i++) {
        if(vet[i] == x) {
            count++;
        }
    }
    return count;
}