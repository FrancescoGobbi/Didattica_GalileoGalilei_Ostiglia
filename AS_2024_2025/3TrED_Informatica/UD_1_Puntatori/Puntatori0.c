#include <stdio.h>

int main() {
    int a = 10; // Variabile intera
    // Con & si andrà a prendere l'indirizzo di memoria di una data variabile
    printf("L'indirizzo di memoria della variabile x è: %p\n", &a);
    printf("Il valore è: %d\n", a);

    printf("\n\n");

    // CREAZIONE DI UN VARIABILE PUNTATORE
    int *b; // Creo una variabile puntatore ad interi
    b = &a; // Inserisco il riferimento di memoria (indirizzo di memoria) di x dentro y
    // Quindi ora y contiene l'indirizzo di memoria di x, ovvero che punta ad x.
    // int *b = &a; // Riga alternativa con le due operazioni sopra inglobate in una sola

    printf("Indirizzo di memoria di y: %p\n", &b);
    printf("Valore contenuto in y: %p\n", b);
    printf("Valore puntato da y: %d\n", *b); // *y è la deferenziazione della variabile puntatore

    printf("\n\n");

    // CREAZIONE DI UN PUNTATORE CHE PUNTA AD UN ALTRO PUNTATORE (DOPPIO PUNTATORE)
    int **c; // Creo una variabile puntatore ad interi
    c = &b; // Inserisco il riferimento di memoria (indirizzo di memoria) di y dentro z
    // Quindi ora z contiene l'indirizzo di memoria di y, ovvero che punta ad y.

    printf("Indirizzo di memoria di z: %p\n", &c);
    printf("Valore contenuto in z: %p\n", c);
    printf("Valore puntato da z: %p\n", *c); // *z è la deferenziazione della variabile puntatore
    printf("Valore contenuto dentro *(*z): %d\n", *(*c)); // Doppio puntatore
}