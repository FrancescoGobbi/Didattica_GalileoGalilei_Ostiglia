#include <stdio.h>

#define DIM 5

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

/**
* @brief Creare una funzione in C che prenda in input un vettore di interi e due valori interi A e B.
* La funzione deve tornare il numero/frequenza di numeri che solo all’interno del range compreso tra A e B (con
* A e B compresi )
*/
int contaNelRange(int vet[], int dim, int A, int B);

/**
* @brief Creare una funzione in C che prenda in input un vettore di interi.
La funzione deve cercare il valore maggiore all’interno del vettore ed assegarlo ad ogni cella del vettore.
*/
void valoreMaggioreVet(int vet[], int dim);

/**
* @brief Creare una funzione in C che prenda in input una matrice di interi (di dimension non definite,
in quanto non prettamente necessarie per lo svolgimento dell’esercizio).
Deve trovare e ritornare la differenza tra il valore massimo ed il valore minimo di tutta la matrice
*/
int diffMaxMin(int mat[][DIM], int dimX, int dimY);

/**
* @brief Creare una funzione in C che prenda in input una matrice di interi di dimensioni n x m e
un vettore di dimensioni m.
La funzione deve eseguire la media di ogni colonna della matrice (n x m) ed inserire il risultato della
media all’interno del vettore nel medesimo indice di posizione.
*/
void mediaColonneMatrice(int mat[][DIM], int dimX, int dimy, float vet[], int dimVet);

/**
* @brief Creare una funzione in C che prenda in input un vettore di interi ed un valore A intero.
La funzione deve cercare il valore maggiore e che sia divisibile per il valore A.
La funzione deve poi modificare il vettore in input mettendo il valore trovato, che abbia le condizioni sopra, al
posto di tutti gli altri valori del vettore che sono solo divisibili per A.
*/
void maxDivVettore(int vet[], int dim, int A);

/**
* @brief Creare una funzione in C che prenda in input una matrice di interi di dimensioni n x m e un
vettore di dimensioni n.
La funzione deve copiare/incollare il vettore di dimensione n all’interno di ogni colonna della matrice
che infatti `e nxm.
*/
void incollaVettore(int mat[][DIM], int dimX, int dimY, int vet[]);

/**
* @brief Creare una funzione in C che prenda in input una matrice di interi (di dimension non definite,
in quanto non prettamente necessarie per lo svolgimento dell’esercizio).
Deve trovare e ritornare la differenza tra il valore massimo ed il valore minimo presenti SOLAMEN-
TE nelle diagonali della matrice (primaria e secondaria, in grassetto nella matrice )
*/
void diffMaxMinDiagonali(int mat[][DIM], int dimX, int dimY);

int main() {
    int vet[DIM];
    int matrix[DIM][DIM];

    // Generazione random
    initRandomVal(vet, DIM, 1, 10);
    randMatrice(matrix, DIM, DIM, 1, 10);

    // ESERCIZI VETTORE
    stampaVet(vet, DIM);
    int val = contaNelRange(vet, DIM, 1, 10); // Es 1
    printf("Il numeri nel range (%d - %d) sono: %d\n", 1, 10, val);

    valoreMaggioreVet(vet, DIM); // Es 2
    stampaVet(vet, DIM);

    // ESERCIZI MATRICE
    stampaMatrice(mat, DIM, DIM);

    int diff = diffMaxMin(mat, DIM, DIM); // Es 3
    printf("La differenza tra massimo e minimo è: %d\n", diff);

    int vet2[DIM] = {1, 2, 3, 4, 5};
    copiaVettoreMatrice(mat, DIM, DIM, vet2);
    stampaMatrice(mat, DIM, DIM);
    
}

int contaNelRange(int vet[], int dim, int A, int B) {
    int i;
    int count = 0;

    for(i=0; i<dim; i++) {
        if((vet[i]>=A && vet[i]<=B) || (vet[i]>=B && vet[i]<=A)) {
            count++;
        }
    }
    return count;
}

void valoreMaggioreVet(int vet[], int dim) {
    int i; 
    int max = vet[0];

    for(i=0, i<dim; i++) {
        if(max<vet[i]) {
            max = vet[i];
        }
    }

    for(i=0; i<dim; i++) {
        vet[i] = max;
    }
}

int diffMaxMin(int mat[][DIM], int dimX, int dimY) {
    int i, j;
    int max = mat[0][0];
    int min = mat[0][0];

    for(i=0; i<dimX; i++) {
        for(j=0; j<dimy; j++) {
            if(mat[i][j] > max) {
                max = mat[i][j];
            } 
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }

    return (max-min);
}

void mediaColonneMatrice(int mat[][DIM], int dimX, int dimy, float vet[], int dimVet) {
    int i, j;

    for(i=0; i<dimX; i++) {
        for(j=0; j<dimY; j++) {
            if (i == 0) {
                vet[j] = mat[0][j];
            }
            else {
                vet[j] += mat[i][j];
            }
        }
    }
    for(i=0; i< dimY; i++) {
        vet[i] = vet[i] / dimX;
    }
}

void maxDivVettore(int vet[], int dim, int A) {
    int i, max = vet[0];

    for(i=0; i<dim; i++) {
        if(max < vet[i] && vet[i]%A==0) {
            max = vet[i];
        }
    }
    for(i=0; i<dim; i++) {
        if (vet[i]%A==0) {
            vet[i] = max;
        }
    }
}

void incollaVettore(int mat[][DIM], int dimX, int dimY, int vet[]) {
    int i, j;
    for(i=0; i<dimX; i++) {
        for(j=0; j<dimY; j++) {
            mat[i][j] = vet[i];
        }
    }
}

void diffMaxMinDiagonali(int mat[][DIM], int dimX, int dimY) {
    int i, j; 
    int max = mat[0][0];
    int min = mat[0][0];

    for(i=0; i<dimX; i++) {
        for(j=0; j<dimY; j++) {
            if ((i==j) || (i+j==dimX-1)) {
                if(max < mat[i][j]) {
                    max = mat[i][j];
                }
                if (min > mat[i][j]) {
                    min = mat[i][j];
                }
            }
        }
    }
    return (max - min);
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