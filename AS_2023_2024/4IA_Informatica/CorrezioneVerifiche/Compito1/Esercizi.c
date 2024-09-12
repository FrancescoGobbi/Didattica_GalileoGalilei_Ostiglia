#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dim 10
#define dim2 5

int es3(int [], int, int, int);
float es4(int [][dim2], int, int);
int es5(int );

int main() {
    int vet[dim] = {1, 5, 10, 4, 30, 25, 20, 11, 21, 36};
    int mat[dim2][dim2] = {{10, 5, 5, 6, 0}, 
                            {-5, 0, 8, -3, 5},
                            {22, 2, 3, 4, 5},
                            {20, 9, 9, -3, 14},
                            {7, 8, 7, -2, 1}};

    printf("Il vettore ha %d numeri che sono divisibili per %d e maggiori di %d\n", es3(vet, dim, 5, 20), 5, 20);

    printf("La media delle differenze tra max e min della matrice è: %f\n", es4(mat, dim2, dim2));

    printf("Somma ricorsiva dei primi 5 numeri è: %d\n", es5(5));
}

int es3(int vet[], int DIM, int A, int B) {
    int i;
    int count = 0;

    for(i=0; i<DIM; i++){
        if((vet[i]%A == 0) && (vet[i]>B)) {
            count++;
        }
    }
    return count;
}

float es4(int mat[][dim2], int dimX, int dimY) {
    int i, j;
    int max, min;
    int sommaDifferenze = 0;

    for(i=0; i<dimX; i++){
        max = mat[i][0];
        min = max;
        for(j=0; j<dimY; j++){
            if(max < mat[i][j]) {
                max = mat[i][j];
            }
            if(min > mat[i][j]) {
                min = mat[i][j];
            }
        }
        sommaDifferenze += (max - min);
    }

    return ((float)sommaDifferenze)/dimY;
}

int es5(int val) {
    if(val == 1) {
        return val;
    }
    else {
        return val + es5(val-1);
    }
}