/*

Nome:
Cognome: 
Classe:
Data:


Es2 B (2,5 punti)
Creare un programma in C che prenda in input 5 valori interi (A, B, C, D e E).
Il programma deve eseguire la media tra questi cinque valori inseriti.
Verificare se il valore della media trovato è minore di 6, oppure no.
Nel caso in cui sia vero allora si dovrà stampare "Media negativa", altrimenti "Media positiva".

*/ 
// Questo sopra è un commento ad area da non eliminare o modificare!


#include <stdio.h>

int main() {
    int A, B, C, D, E;
    float media;

    // Input dei valori
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);
    printf("Inserisci il valore di B: ");
    scanf("%d", &B);
    printf("Inserisci il valore di C: ");
    scanf("%d", &C);
    printf("Inserisci il valore di D: ");
    scanf("%d", &D);
    printf("Inserisci il valore di E: ");
    scanf("%d", &E);

    // Calcolo della media
    media = (A + B + C + D + E) / 5.0;

    // Verifica del valore della media
    if (media < 6) {
        printf("Media negativa\n");
    } 
    else {
        printf("Media positiva\n");
    }
}