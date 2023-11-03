#include <stdio.h>

#define DIM 10

void stampaVetRicorsiva(int vet[], int dim, int index);

int main() {
    int vet[DIM] = {1,2,3,4,5,6,7,8,9,10};

    stampaVetRicorsiva(vet, DIM, 0);
    printf("\n");
}

void stampaVetRicorsiva(int vet[], int dim, int index) {
    // Caso ricorsivo
    if(index<dim) {
        printf("%3d", vet[index]);
        stampaVetRicorsiva(vet, dim, index+1);
    }
    // VARIANTE
    /*
    if(index==dim-1) { // Caso base
        printf("%3d", vet[index]);
    }
    else{ // Caso ricorsivo
        printf("%3d", vet[index]);
        stampaVetRicorsiva(vet, dim, index+1);
    }
    */
}