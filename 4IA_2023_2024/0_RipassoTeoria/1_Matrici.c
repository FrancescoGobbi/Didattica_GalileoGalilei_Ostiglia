#include <stdio.h>

#define dim 3

void inizializzoMatrix(int mat[][dim], int DIMx, int DIMy);
void stampaMatrix(int mat[][dim], int DIMx, int DIMy);

int main() {
    int matrix[dim][dim] = {0};

    inizializzoMatrix(matrix, dim, dim);

    stampaMatrix(matrix, dim, dim);
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