#include <stdio.h>
/*
Creare un programma che prende in input due valori, li somma in una nuova variabile e stampa il risultato a video
*/
int main() {
    int a, b, somma;
    
    printf("Inserisci due valori interi: ");
    scanf("%d %d", &a, &b);
    
    somma = a + b;

    printf("%d + %d = %d\n", a, b, somma);
}