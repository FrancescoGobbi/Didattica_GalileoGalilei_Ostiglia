#include <stdio.h>

// Richiesta di tre valori interi e stampa del massimo con l'uso di una variabile di supporto 
// ARGOMENTO: if, else-if, else e confizioni lofiche

int main() {
    int x, y, z;
    int max;

    printf("Inserisci tre valori: ");
    scanf("%d %d %d", &x, &y, &z);

    // Trovo il massimo
    if(x >= y && x >= z) {
        max = x;
    }
    else if(y >= x && y >= z) {
        max = y;
    }
    else {
        max = z;
    }

    printf("Il massimo dei tre valori inseriti è: %d\n", max);
}