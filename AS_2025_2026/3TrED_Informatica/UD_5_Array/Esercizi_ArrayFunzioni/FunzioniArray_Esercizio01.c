/*
Dato un array generato e con numeri randomici compresi tra un inizio ed una fine,
creare una funzione che prende un vettore in input e modifichi tutti i numeri pari
con il vattoriale del numero stesso, ovvero del numero in tale posizione.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define DIM 10

// Prototipi delle funzioni
// Funzione per inizializzare un vettore con numeri randomici compresi tra start ed end
void initRandomVet(int vet[], int dim, int start, int end);

// Funzione per stampare un vettore
void stampaVettore(int vet[], int dim);

// Funzione per calcolo del fattoriale
int fattoriale(int n);

void modificaPariConFattoriale(int vet[], int dim);

int main() {
    int arr[DIM] = {0};
    initRandomVet(arr, DIM, 50, 90);

    printf("Vettore prima della modifica:\n");
    stampaVettore(arr, DIM);

    // Modifica dei numeri pari con il fattoriale
    modificaPariConFattoriale(arr, DIM);

    printf("Vettore dopo la modifica:\n");
    stampaVettore(arr, DIM);
}

void initRandomVet(int vet[], int dim, int start, int end) {
    srand(time(0));
    int i;
    for(i = 0; i < dim; i++) {
        vet[i] = rand() % (end - start + 1) + start;
    }
}

void stampaVettore(int vet[], int dim) {
    int i;
    for(i = 0; i < dim; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int fattoriale(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

void modificaPariConFattoriale(int vet[], int dim) {
    int i;
    for(i = 0; i < dim; i++) {
        if(vet[i] % 2 == 0) { // Se il numero è pari, sostituiscilo con il suo fattoriale
            vet[i] = fattoriale(vet[i]); // Calcola il fattoriale del numero in posizione i e assegnalo a vet[i]
            // Utilizzo la chiamata di ricorsione per calcolare il fattoriale
            // Si può risolvere anche senza iterazione
        }
    }
}