#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  DIM 5

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

/**
* @brief Funzione che stampa il vettore in modo particolare
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y
*/
void stampaSerpenteMatrice(int matrix[][DIM], int dimX, int dimY);

int main() {
    srand(time(NULL));
    int mat[DIM][DIM]; // Creo la mia matrice
    //stampaMatrice(mat, DIM, DIM);

    // Inserisco valori radom all'interno della matrice
    randMatrice(mat, DIM, DIM, 1, 10);
    stampaMatrice(mat, DIM, DIM);
    stampaSerpenteMatrice(mat, DIM, DIM);
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

void stampaSerpenteMatrice(int matrix[][DIM], int dimX, int dimY) {
    int i, j;

    for(i=0; i<dimX; i++) {
        if(i%2==0) {
            for(j=0; j<dimY; j++) {
                printf("%4d", matrix[i][j]);
            }
        }
        else {
            for(j=dimY-1; j>=0; j--) {
                printf("%4d", matrix[i][j]);
            }
        }
        printf("\n");
    }
}