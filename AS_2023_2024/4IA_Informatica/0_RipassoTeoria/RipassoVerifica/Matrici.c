#include <stdio.h>

#define DIM 3

/*
*@brief prende in input una matrice.
La funzione deve trovare e ritornare il valore
medio tra il massimo della diagonale principale
con il massimo della diagonale secondaria
*/
float valMedioDiagonale(int mat[][DIM], int dimX, int dimY);

int main()
{
    int mat[DIM][DIM]= {{1,2,8},
                        {4,5,63},
                        {4,2,1}};
    
    float med = valMedioDiagonale(mat,DIM, DIM);
    printf("La media tra i valori massimi è: %f\n", med);
    
}
float valMedioDiagonale(int mat[][DIM], int dimX, int dimY){
    int i, j;
    int max1 = mat[0][0]; //Massimo iniziale diagonale principale
    int max2 = mat[0][dimY-1]; //Massimo iniziale diagonale secondaria
    
    for(i=0; i<dimX; i++){
        for(j=0; j<dimY; j++){
            if(i == j) { // Sono nella diagonale principale
                if(max1 < mat[i][j]) {
                    max1 = mat[i][j];
                }
            }
            if (i+j == dimX-1) { // Sono nella diagonale secondaria
                if(max2 < mat[i][j]) {
                    max2 = mat[i][j];
                }
            }
        }
    }
    // Restituisco la media dei due massimo
    return (float)(max1+max2)/2;

    /* //SOLUZIONE ALTERNATIVA
    for(i=0; i<dimX; i++) {
        if(max1 < mat[i][i]) { // Per la diagonale principale
            max1 = mat[i][i];
        } 
        if (max2 < mat[dimX-1-i][i]) { // Per la diagonale secondaria
            max2 = mat[dimX-1-i][i];
        }
    }
    return (float)(max1+max2)/2;
    */
}