#include <stdio.h>

#define DIM 10

int sommaVetRicorsivo(int vet[], int dim, int index);

int main() {
    int vet[DIM] = {1,2,3,4,5,6,7,8,9,10};

    printf("La somma del vettore è: %d\n", sommaVetRicorsivo(vet, DIM, 0));

}

int sommaVetRicorsivo(int vet[], int dim, int index) {
    // Caso base
    if(index>=dim) { // oppure if(index==dim)
        return 0;
    }
    else { // Caso ricorsivo
        return vet[index] + sommaVetRicorsivo(vet, dim, index+1);
    }
}