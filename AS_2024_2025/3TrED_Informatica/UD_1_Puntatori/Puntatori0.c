#include <stdio.h>

int main() {
    int x = 5; // Variabile intera
    // Con & si andrà a prendere l'indirizzo di memoria di una data variabile
    printf("L'indirizzo di memoria della variabile x è: %p\n", &x);
    printf("Il valore è: %d\n", x);

    printf("\n\n");
    
    int *y; // Creo una variabile puntatore ad interi
    y = &x; // Inserisco il riferimento di memoria (indirizzo di memoria) di x dentro y
    // Quindi ora y contiene l'indirizzo di memoria di x, ovvero che punta ad x.

    printf("Indirizzo di memoria di y: %p\n", &y);
    printf("Valore contenuto in y: %p\n", y);
    printf("Valore puntato da y: %d\n", *y); // *y è la deferenziazione della variabile puntatore

}