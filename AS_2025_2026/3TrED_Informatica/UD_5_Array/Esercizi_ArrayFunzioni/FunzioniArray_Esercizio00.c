/*
Dato un array generato e con numeri randomici compresi tra un inizio ed una fine,
creare una funzione che prende un vettore in input e restituisce il numero
di valori pari nel vettore.

ESEMPIO:
Se il vettore è: 50 51 52 53 54 55 56 57 58 59
La funzione restituisce: 5, in quanto i numeri pari sono: 50, 52, 54, 56, 58

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define DIM 10

// Funzione per inizializzare un vettore con numeri randomici compresi tra start ed end
void initRandomVet(int vet[], int dim, int start, int end);

int contaPariVet(int vet[], int dim);

int main() {
    int arr[DIM] = {0};
    initRandomVet(arr, DIM, 50, 90);

    stampaVettore(arr, DIM);
    printf("\n");
    int count = contaPariVet(arr, DIM);
    printf("Il numero di valori pari nel vettore è: %d\n", count);
}

void initRandomVet(int vet[], int dim, int start, int end) {
    srand(time(0));
    int i;
    for(i = 0; i < dim; i++) {
        vet[i] = rand() % (end - start + 1) + start;
    }
}

int contaPariVet(int vet[], int dim) {
    int count = 0;
    for(int i = 0; i < dim; i++) {
        if(vet[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}