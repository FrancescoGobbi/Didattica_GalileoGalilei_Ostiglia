#include <stdio.h>

#define dim 3

void inizializzoMatrix(int mat[][dim], int DIMx, int DIMy);
void stampaMatrix(int mat[][dim], int DIMx, int DIMy);
int maxValMatrix(int mat[][dim], int DIMx, int DIMy);
void valDiagonalePrincipale(int mat[][dim], int DIMx, int DIMy);
void swap(int *x, int *y);
void matriceTrasposta(int mat[][dim], int DIMx, int DIMy);

int main() {
    int matrix[dim][dim] = {0};

    inizializzoMatrix(matrix, dim, dim);

    stampaMatrix(matrix, dim, dim);

    printf("\nIl valore massimo della matrice è: %d\n", maxValMatrix(matrix, dim, dim));

    valDiagonalePrincipale(matrix, dim, dim);
}

void inizializzoMatrix(int mat[][dim], int DIMx, int DIMy){
    int i,j;

    for(i=0; i<DIMx; i++) {
        for(j=0; j<DIMy; j++) {
            printf("Inserisci un valore in [%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
}

void stampaMatrix(int mat[][dim], int DIMx, int DIMy){
    int i,j;

    printf("Stampo la matrice:\n");
    for(i=0; i<DIMx; i++) {
        for(j=0; j<DIMy; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n"); // new line
    }
}

int maxValMatrix(int mat[][dim], int DIMx, int DIMy) {
    int i, j;
    int max = mat[0][0];

    for(i=0; i<DIMx; i++) {
        for(j=0; j<DIMy; j++) {
            if(max < mat[i][j]){
                max = mat[i][j];
            }
        }
    }
    return max;
}

void valDiagonalePrincipale(int mat[][dim], int DIMx, int DIMy) {
    int i, j;

    printf("I valori della diagonale principale sono:\n");
    for(i=0; i<DIMx; i++) {
        for(j=0; j<DIMy; j++) {
            if(i==j) {
                printf("%4d", mat[i][j]);
            }
        }
    }
    printf("\n");
}

// Swap two value in two different location, with pointer
void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void matriceTrasposta(int mat[][dim], int DIMx, int DIMy){
    int i, j;

    for(i=0; i<DIMx; i++) {
        for(j=i; j<DIMy; j++) {
            swap(&(mat[i][j]), &(mat[j][i]));
        }
    }
}
