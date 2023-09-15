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
* @brief Funzione che verifica se una matrice è simmetrica o no.
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y
*/
void matSimmetrica(int mat[][DIM], int dimX, int dimY);

/**
* @brief Funzione che crea una matrice simmetrica.
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y
*/
void creaMatSimmetrica(int mat[][DIM], int dimX, int dimY);

/**
* @brief Funzione che ricerca un valore nella matrice che sia
* diverso da valore precedente, quello successivo, quello sopra e
* quello sotto.
* @param int [][] matrice 
* @param int dimensione delle x
* @param int dimensione delle y
* @param int valore da trovare
*/
void trovaNumero(int mat[][DIM], int dimX, int dimY, int val);

int main() {
    srand(time(NULL));
    int mat[DIM][DIM]={{2,7,8,6,5},
                        {7,0,3,4,6},
                        {8,3,-1, 0,-3},
                        {6,4,0,1,10},
                        {5,6,-3,10,5}};
    //randMatrice(mat, DIM, DIM, 1, 20);
    stampaMatrice(mat, DIM, DIM);
    matSimmetrica(mat, DIM, DIM);
    creaMatSimmetrica(mat, DIM, DIM);
    stampaMatrice(mat, DIM, DIM);
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

void matSimmetrica(int mat[][DIM], int dimX, int dimY) {
    int i, j;
    int trovato = 0;

    if(dimX==dimY) {
        for(i=0; i<dimX; i++) {
            for(j=i; j<dimY; j++) {
                if(mat[i][j] != mat[j][i]) {
                    trovato = 1;
                }
            }
        }

        if (trovato==0) {
            printf("La matrice è simmetrica!\n");
        }
        else {
            printf("La matrice NON è simmetrica!\n");
        }
    }
    else {
        printf("La matrice NON è simmetrica!\n");
    }
}

void creaMatSimmetrica(int mat[][DIM], int dimX, int dimY) {
    int i, j;
    if(dimX==dimY) {
        for(i=0; i<dimX; i++) {
            for(j=i; j<dimY; j++) {
                printf("Inserisci il valore nella posizione [%d][%d]: ", i, j);
                scanf("%d", &(mat[i][j]));
                mat[j][i] = mat[i][j];
            }
        }
    }
    else {
        printf("La matrice non è quadrata!\n");
    }
}

int trovaNumero(int mat[][DIM], int dimX, int dimY, int val) {
    int i, j;
    int count=0;
    for(i=1; i<dimX-1; i++) {
        for(j=1; j<dimY-1; j++) {
            if(mat[i][j]==val) {
                if (mat[i][j-1]!=val && mat[i][j+1]!=val && mat[i-1][j]!=val && mat[i+1][j]!=val) {
                    count++;
                }
            }
        }
    }
    return count;
}