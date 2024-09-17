#include <stdio.h>

int main() {
    int x = 5; // Variabile intera
    // Con & si andrà a prendere l'indirizzo di memoria di una data variabile
    printf("L'indirizzo di memoria della variabile x è: %p\n", &x);
    printf("Il valore è: %d\n", x);

    printf("\n\n");

    // CREAZIONE DI UN PUNTATORE
    int *y; // Creo una variabile puntatore ad interi
    y = &x; // Inserisco il riferimento di memoria (indirizzo di memoria) di x dentro y
    // Quindi ora y contiene l'indirizzo di memoria di x, ovvero che punta ad x.

    printf("Indirizzo di memoria di y: %p\n", &y);
    printf("Valore contenuto in y: %p\n", y);
    printf("Valore puntato da y: %d\n", *y); // *y è la deferenziazione della variabile puntatore

    printf("\n\n");

    // CREAZIONE DI UN PUNTATORE CHE PUNTA AD UN ALTRO PUNTATORE (DOPPIO PUNTATORE)
    int **z; // Creo una variabile puntatore ad interi
    z = &y; // Inserisco il riferimento di memoria (indirizzo di memoria) di y dentro z
    // Quindi ora z contiene l'indirizzo di memoria di y, ovvero che punta ad y.

    printf("Indirizzo di memoria di z: %p\n", &z);
    printf("Valore contenuto in z: %p\n", z);
    printf("Valore puntato da z: %p\n", *z); // *z è la deferenziazione della variabile puntatore
    printf("Valore contenuto dentro *(*z): %d\n", *(*z)); // Doppio puntatore
}