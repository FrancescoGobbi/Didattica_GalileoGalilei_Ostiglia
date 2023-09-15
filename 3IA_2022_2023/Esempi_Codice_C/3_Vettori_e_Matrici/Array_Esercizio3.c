#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Per le variabili booleane
#define DIM 9
#define DIM2 20

void randomVal(int vet[], int dim, int vmin, int vmax);

void stampaVet(int vet[], int dim);

void stampaInversaVet(int vet[], int dim);

void vetInverso(int vet[], int dim);

void stampaValUnici(int vet[], int dim);

void arrayCumulativo(int vet[], int dim);

int main() {
    int vet[DIM];

    randomVal(vet, DIM, 1 , 20);
    stampaVet(vet, DIM);

    printf("\n\n");

    stampaInversaVet(vet, DIM);

    stampaVet(vet, DIM);

    vetInverso(vet, DIM);

    stampaVet(vet, DIM);
    /*

    stampaVet(vet, DIM);
    printf("\n");

    // Secondo vettore
    int vet2[DIM2];

    randomVal(vet2, DIM2, 1, 20);

    stampaVet(vet2, DIM2);

    stampaValUnici(vet2, DIM2);
    printf("\n");

    // Terzo vettore
    int vet3[DIM];

    randomVal(vet3, DIM, 1, 10);

    stampaVet(vet3, DIM);

    arrayCumulativo(vet3, DIM);

    stampaVet(vet3, DIM);
    printf("\n");
    */

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

void stampaInversaVet(int vet[], int dim) {
    int i;
    printf("Il vettore stampato inverso è così composto: \n");
    for(i=dim-1; i>=0; i--) {
        printf("%5d", vet[i]);
    }
    printf("\n");
}

void vetInverso(int vet[], int dim) {
    int i;
    int tmp;

    for(i=0; i<=(dim/2)-1; i++){
        tmp = vet[i];
        vet[i] = vet[dim-1-i];
        vet[dim-1-i] = tmp;
    }
}

void stampaValUnici(int vet[], int dim) {
    int valUnici[DIM2] = {0};
    int iValUnici = 0; // Inizio da 0
    int i;
    bool check = true;
    int j;

    for(i=0; i<dim; i++) {
        check = true;
        for(j=0; j<iValUnici; j++) {
            if(vet[i] == valUnici[j]) {
                check = false;
            }
        }
        if (check) {
            printf("Valore unico: %d\n", vet[i]);
            valUnici[iValUnici] = vet[i]; // Metto il valore nel vettore di unicità
            iValUnici++; // Incremento per il prossimo indice
        }
    }
}

void arrayCumulativo(int vet[], int dim) {
    int i;
    
    for(i=1; i<dim; i++) {
        vet[i] = vet[i] + vet[i-1];
    }
}