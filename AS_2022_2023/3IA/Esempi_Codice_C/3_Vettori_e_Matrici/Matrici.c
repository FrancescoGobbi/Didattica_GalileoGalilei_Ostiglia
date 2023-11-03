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
* @brief Funzione che stampa la diagonale principale di una matrice
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y
*/
void diagonalePrincipale(int matrix[][DIM], int dimX, int dimY);

int main() {
    srand(time(NULL));
    int mat[DIM][DIM]; // Creo la mia matrice
    stampaMatrice(mat, DIM, DIM);

    // Inserisco valori radom all'interno della matrice
    randMatrice(mat, DIM, DIM, 1, 10);
    stampaMatrice(mat, DIM, DIM);
    //diagonalePrincipale(mat, DIM, DIM);

    /*
    int mat2[DIM][DIM] = {0}; // Inizializzo tutto a 0
    stampaMatrice(mat2, DIM, DIM);

    // Matrice innizializzata per righe/vettori
    int matrix[DIM][DIM] = {{0,1,2,3,4},
                            {5,6,7,8,9},
                            {10,11,12,13,14},
                            {15,16,17,18,19},
                            {20,21,22,23,24}};
    stampaMatrice(matrix, DIM, DIM);   
    matrix[1][2] = 10; // Modifico una cella della matrice
    stampaMatrice(matrix, DIM, DIM);
    */
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

void diagonalePrincipale(int matrix[][DIM], int dimX, int dimY) {
    int i,j;
    
    printf("La diagonale principale della matrice è così composta:\n");
    for(i=0; i<dimX; i++) {
        for(j=0; j<dimY; j++) {
            if(i==j) {
                printf("%4d", matrix[i][j]);
            }
        }
    }
    printf("\n\n\n");
}