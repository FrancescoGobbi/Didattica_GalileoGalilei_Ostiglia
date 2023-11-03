#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* @brief Funzione che inizializza con valori random un vettore
* @param int[] vettore 
* @param int dimensione del vettore
* @param int valore minimo del range
* @param int valore massimo del range
*/
void initRandomVal(int vet[], int dim, int min, int max);

/**
* @brief Funzione che stampa un vettore
* @param int[] vettore 
* @param int dimensione del vettore
*/
void stampaVet(int vet[], int dim);

/**
* @brief Funzione che stampa una matrice
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y 
*/
void stampaMatrice(int matrix[][DIM], int dimX, int dimY);

/**
* @brief Funzione che genera dei umeri rand all'interno della matrice
* compreso tra un min ed un max
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y
* @param int valore minimo del range
* @param int valore massimo del range
*/
void randMatrice(int matrix[][DIM], int dimX, int dimY, int min, int max);

int main() {
    srand(time(NULL));
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

void stampaMatrice(int matrix[][DIM], int dimX, int dimY)  {
    int i, j;

    for(i=0; i<dimX; i++) {
        for(j=0; j<dimY; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void randMatrice(int matrix[][DIM], int dimX, int dimY, int min, int max) {
    int i, j;

    for(i=0; i<dimX; i++) {
        for(j=0; j<dimY; j++) {
            matrix[i][j] = rand()%(max-min+1) + min;
        }
    }
}