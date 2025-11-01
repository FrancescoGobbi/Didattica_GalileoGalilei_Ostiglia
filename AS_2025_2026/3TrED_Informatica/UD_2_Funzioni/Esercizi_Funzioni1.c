/*
Esercizio: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Funzione che prende in input un valore intero n e restituisce la sommatoria dei primi numeri n

Se n = 5 --> return della funzione = 15 (perché 1 + 2 + 3 + 4 + 5)

FUNZIONE 2:
Funzione che prende in input due valori interi (A, B) e restituisce la media tra i due valori inseriti

Se A = 5 e B = 6 --> return della funzione = 5.5000 (perché (5+6)/2)

*/

#include <stdio.h>

// Prototipo delle funzioni da creare
// TO DO...

int main(){
    int n;
    int A, B;
    float media;
    int somma;

    // Funzione sommatoria()
    printf("Inserisci un numero intero n per calcolare la sommatoria dei primi n numeri interi: ");
    scanf("%d", &n);

    // Chiamata funzione sommatoria()

    printf("La sommatoria dei primi %d numeri interi è: %d\n", n, somma);

    // Funzione media()
    printf("Inserisci due numeri interi A e B per calcolare la loro media: ");
    scanf("%d %d", &A, &B);

    // Chiamata funzione media()

    printf("La media tra %d e %d è: %.4f\n", A, B, media);
}

// Definizione delle funzioni da creare
// TO DO...