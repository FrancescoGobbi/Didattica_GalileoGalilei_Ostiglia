#include <stdio.h>
#include <stdlib.h>

// Struttura Punto --> punto del Piano Cartesiano
// La struttura ha due parametri
typedef struct {
    int x; // Ascissa
    int y; // Ordinata
}Punto;

// Funzione per l'input dei punti
void inputPunti(Punto *punti, int num_persone) {
    for (int i = 0; i < num_persone; i++) {
        printf("\nInserisci il valore x del punto %d: ", i + 1);
        scanf("%d", &(punti[i].x));
        printf("Inserisci il valore y del punto %d: ", i + 1);
        scanf("%d", &(punti[i].y));
    }
}

// Funzione per la stampa dei punti
void stampaPunti(Punto *punti, int numPunti) {
    int i;
    printf("\nLe informazioni sulle persone sono:\n");
    for (i = 1; i <= numPunti; i++) {
        printf("Punto %d: (%d,%d)\n\n", i + 1, punti[i].x, punti[i].x);
    }
}

int main() {
    int numPunti;

    // Richiesta all'utente dei punti da inserire
    printf("Inserisci il numero dei punti che vuoi inserire: ");
    scanf("%d", &numPunti);

    // Allocazione dinamica di memoria per il vettore di punti
    Punto *punti = (Punto *)malloc(numPunti * sizeof(Punto));
    if (punti == NULL) {
        printf("Errore: impossibile allocare memoria\n");
        return 1;
    }

    // Chiamata alla funzione per l'input dei punti
    inputPunti(punti, numPunti);

    // Chiamata alla funzione per la stampa dei punti
    stampaPunti(punti, numPunti);

    // Liberazione della memoria allocata
    free(punti);
}
