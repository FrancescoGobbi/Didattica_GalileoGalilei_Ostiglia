#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define dim 5

void stampaMatrix(int mat[][dim], int DIMx, int DIMy);
/**
* @object la funzione deve riempire la matrice di numeri randomici compresi tra a e b
* @param matrice 
* @param int righe
* @param int colonne
* @param int a 
* @param int b 
*/
void valoriRandomMatrix(int [][dim], int, int, int, int);

/**
* @object stampare la diagonale superiore della mnatrice
* @param int matrice
* @param int righe
* @param int colonne
*/
void diagonale_superiore(int [][dim], int, int);

int main() {
  int matrix[dim][dim] = {0};
  int valA = 1;
  int valB = 9;
  srand(time(NULL));
  
  valoriRandomMatrix(matrix, dim,  dim,  valA, valB);
  stampaMatrix(matrix, dim, dim);

  diagonale_superiore(matrix, dim, dim);
  
  return 0;
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

void valoriRandomMatrix(int _mat[dim][dim], int righe, int colonne, int _valA, int _valB){
  int i;
  int j;

  for(i=0; i<righe; i++){
    for(j=0; j<colonne; j++){
      if(_valA > _valB){
        _mat[i][j] = _valB + rand()%(_valA - _valB +1);
      } else {
        _mat[i][j] = _valA + rand()%(_valB - _valA +1);
      }
    }
  }
}

void diagonale_superiore(int _mat[][dim], int DIMx, int DIMy){
  int i, j;
  printf("La matrice triangolare superiore è:\n");
  for(i=0; i<DIMx; i++) {
    for(j=0; j<DIMy; j++) {
      if(j>i) {
        printf("%4d", _mat[i][j]);
      }
    }
    printf("\n");
  }
}