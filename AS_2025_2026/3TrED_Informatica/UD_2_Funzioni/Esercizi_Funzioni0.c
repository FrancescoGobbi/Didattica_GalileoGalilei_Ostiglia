/*
Esercizio:
Crea il codice in C che prenda in input due valori interi A e B.
Il programma deve stampare il fattoria di A ed il fattoriale di B.

*/

#include <stdio.h>

// Prototipo della funzione fattoriale()
/**
 * @brief Funzione che calcola e restituisce il fattoriale di x, con x preso in input alla funzione
 * 
 * @param x 
 * @return int 
 */
int fattoriale(int x);

int main(){
    int A;
    int B;
    int fattA;
    int fattB;

    // Prendiamo i valori in input
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);

    printf("Inserisci il valore di B: ");
    scanf("%d", &B);

    // Calcolo il fattoriale chiamando la funzione fattoriale()
    fattA = fattoriale(A);
    fattB = fattoriale(B);
    int fattC = fattoriale(5);

    printf("Il fattoriale di %d è: %d\n", A, fattA);
    printf("Il fattoriale di %d è: %d\n", B, fattB);
}

int fattoriale(int x) {
    int i;
    int fatt = 1;

    // Calcolo il fattoriale
    for(i = 1; i<= x; i++) {
        fatt = fatt * i;
    }

    // Restituisco il fattoriale
    return fatt;
}