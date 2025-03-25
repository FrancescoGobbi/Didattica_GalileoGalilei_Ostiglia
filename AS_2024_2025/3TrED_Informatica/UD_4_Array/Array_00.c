#include <stdio.h>

int main() {
    // Dichiarazione di un array di interi di dimensione 5 di posizioni: 0, 1, 2, 3 e 4
    // Dimensione dell'array : n
    // Posizioni dell'array : [0, n-1]
    int numeri[5] = {0}; // Dichiarazione e inizializzazione dell'array
    // Definisco il valore che deve avere la prima posizione del vettore, in questo caso 0
    // e, per default, tutti gli altri valori sono messi a 0
    
    int i;

    // Inizializzazione dell'array
    numeri[0] = 10;
    numeri[1] = 20;
    numeri[2] = 30;
    numeri[3] = 40;
    numeri[4] = 50;

    // Stampa degli elementi dell'array 
    // N.B. I vettori partono dalla posizione 0, fino alla n-1 compresa (n dimensione del vettore)
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeri[i]);
    }

    // Modifica degli elementi dell'array
    numeri[0] = 5; // Assegno 5 alla prima posizione dell'array, quindi sovrascrivo il valore presente
    numeri[0] += 5; // numeri[0] = numeri[0] + 5;
    numeri[1] -= 5; // numeri[1] = numeri[1] - 5;
    numeri[2] *= 2; // numeri[2] = numeri[2] * 2;
    numeri[3] /= 2; // numeri[3] = numeri[3] / 2;
    numeri[4] %= 3; // numeri[4] = numeri[4] % 3;

    // Stampa degli elementi modificati dell'array
    printf("\nElementi modificati:\n");
    for (i = 0; i < 5; i++) {
        // N.B. I vettori partono dalla posizione 0, fino alla n-1 compresa (n dimensione del vettore)
        printf("Elemento %d: %d\n", i, numeri[i]);
    }
}