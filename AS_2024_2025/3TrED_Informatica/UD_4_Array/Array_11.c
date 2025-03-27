#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensione 10.
Il programma deve riempire l'array con numeri casuali compresi tra 1 e 100.
Il programma deve ricercare quanti numeri primi sono presenti nel vettore e
stampare tale valore.
*/

#define DIM 10

/**
 * @brief Funzione che restituisce 1 se il numero n è primo, altrimenti 0
 * 
 * @param n 
 * @return int 
 */
int verificaPrimo(int n);

/**
 * @brief Funzione che inizializza un vettore di dimensione dim con numeri casuali
 * 
 * @param vet 
 * @param dim 
 */
void initRandomVet(int vet[], int dim);

int main() {
    int vet[DIM];
    int i, j; // Variabile di iterazione
    int count = 0; // Contatore per i numeri primi

    // Chiamata della funzione per generare dei numeri casuali nel vettore
    initRandomVet(vet, DIM);

    // Vettore iniziale
    printf("Il vettore iniziale è: \n");
    for(i = 0; i< DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Troviamo quanti sono i numeri primi
    for(i = 0; i < DIM; i++) {
        int primo = verificaPrimo(vet[i]);
        if (primo == 1) {
            printf("Il numero %d è primo.\n", vet[i]);
            count++;
        }
    }

    // Stampa finale
    printf("Ci sono %d numeri primi nel vettore.\n", count);
}

void initRandomVet(int vet[], int dim) {
    int i;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    for(i = 0; i< dim; i++) {
        vet[i] = rand() %100 + 1;
    }
}

int verificaPrimo(int n) {
    int i;

    // Se il numero è negativo
    if (n <= 1) {
        return 0;
    }

    // Verifico se il numero NON è primo
    for(i = 2; i < n; i++) { // Controllo se il numero è divisibile per i numeri da 2 a n-1
        if (n % i == 0) {
            return 0;
        }
    }

    // Se il numero è primo
    return 1;
}