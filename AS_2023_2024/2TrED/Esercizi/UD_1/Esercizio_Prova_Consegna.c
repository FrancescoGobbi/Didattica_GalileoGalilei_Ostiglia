#include <stdio.h>
/*
Creare un programma che prende in input due valori, li somma in una nuova variabile e stampa il risultato a video
*/
int main() {
    int a, b, somma;
    
    // Input dei valori da assegnare alle variabili
    printf("Inserisci due valori interi: ");
    scanf("%d %d", &a, &b);
    
    // Creo la somma nella corrispondente variabile
    somma = a + b;

    // Stampa del risultato
    printf("%d + %d = %d\n", a, b, somma);
}