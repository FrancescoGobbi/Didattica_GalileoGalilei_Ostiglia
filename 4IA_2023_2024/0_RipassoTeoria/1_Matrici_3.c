#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RIGHE 5
#define COLONNE 5

/**
 * @brief inizializza la matrice con valori random compresi tra 1 e 15
 * @param int[][] matrice da utilizzare
 * @param int numero delle righe
 * @param int numero delle colonne
 * @param int numero minimo
 * @param int numero masssimo
*/
void initMatrice(int [][COLONNE], int, int, int, int);

/**
 * @brief stampa la matrice
 * @param int[][] matrice da usare
 * @param int numero delle righe
 * @param int numero delle colonne
*/
void stampaMatrice(int [][COLONNE], int, int);

/**
 * @brief Creare una funzione in C che prenda in input una matrice. 
 * La funzione deve eseguire la trasposta di una matrice.
 * @param int[][] matrice da utilizzare
 * @param int numero delle righe
 * @param int numero delle colonne
*/
void matriceTrasposta(int [][COLONNE], int, int);

/**
 * @brief ordina la riga in ordine crescente
 * @param int[][] matrice da utilizzare
 * @param int numero di righe
 * @param int numero delle colonne
*/
void ordinamentoRigheCrescente(int [][COLONNE], int, int);

void bubbleSort(int vet[], int DIM);

void swap(int *x, int *y);

/**
 * @brief ritornare l'indice di riga associato alla media
   dei voti dello studente col valore pi� alto
 * @param int[][] matrice da utilizzare
 * @param int numero di righe
 * @param int numero delle colonne
*/
int media_magg(int [][COLONNE], int, int);

int main(){
	int mat[RIGHE][COLONNE];
    srand(time(NULL));
    
    initMatrice(mat, RIGHE, COLONNE, 1, 15);
    stampaMatrice(mat, RIGHE, COLONNE);
    printf("\n");
    
    matriceTrasposta(mat, RIGHE, COLONNE);
    stampaMatrice(mat, RIGHE, COLONNE);
    printf("\n");
    
    ordinamentoRigheCrescente(mat, RIGHE,COLONNE);
    stampaMatrice(mat, RIGHE, COLONNE);
    int var=media_magg(mat, RIGHE, COLONNE);
    printf("Valore MAGG: %d", var);
    stampaMatrice(mat, RIGHE, COLONNE);
}

void initMatrice(int _mat[][COLONNE], int _r, int _c, int min, int max){
    int i, j;

    for(i=0; i<_r; i++){
        for(j=0; j<_c; j++){
            _mat[i][j]=min + rand()%(max-min+1);
        }
    }
}

void stampaMatrice(int _mat[][COLONNE], int _r, int _c){
    int i, j;
    printf("stamp la matrice: \n");    
    for(i=0; i<_r; i++){
        for(j=0; j<_c; j++){
            printf("%3d", _mat[i][j]);
        }
        printf("\n");
    }
}

void matriceTrasposta(int _mat[][COLONNE], int _r, int _c){
	int i, j;
	int tmp;
	for(i=0; i<_r; i++){
		for(j=i; j<_c; j++){
			tmp=_mat[i][j];
			_mat[i][j]=_mat[j][i];
			_mat[j][i]=tmp;
		}
	}
}

void ordinamentoRigheCrescente(int _mat[][COLONNE], int _r, int _c){
    int i, j;   //indici usati sulla stessa riga 
    int x;  //indice di riga
    int tmp;
    
    for(x=0; x<_r; x++){
        bubbleSort(&(_mat[x][0]), _c);
    }
}

void bubbleSort(int vet[], int DIM) {
    int i,j;
    int tmp;

    for(i=0; i<DIM-1; i++){ // Look vector
        for(j=0; j<(DIM-1-i); j++) { // Compare the values
            if(vet[j]>vet[j+1]) {
                swap(&vet[j], &vet[j+1]);
            }
        }
    }
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int media_magg(int _mat[][COLONNE], int _r, int _c){
	int i, j, sommariga=0, sommamax=0, x=0;
	for(i=0; i<_r; i++){
		sommariga=0;
		for(j=0; j<_c; j++){
			sommariga=sommariga+_mat[i][j];
		}
		if(sommariga>sommamax){
			sommamax=sommariga;
			x=i;
		}
	}
	return x;
}
