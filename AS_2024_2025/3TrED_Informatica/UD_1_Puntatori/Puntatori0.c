/**
 * @file Puntatori0.c
 * @author your name 
 * @brief Programma con la visione iniziale dei puntatori in C.
 * @version 0.1
 * @date 2024-09-19
 * 
 * 
 */
#include <stdio.h>

int main() {
    int a = 10; // Variabile intera
    // Con & si andrà a prendere l'indirizzo di memoria di una data variabile
    // Questa cosa succede nello scanf().
    // %p è lo specificatore di formato per l'esadecimale e per gli indirizzi in generale
    printf("L'indirizzo di memoria della variabile x a: %p\n", &a);
    printf("Il valore di a è: %d\n", a);

    printf("\n\n");

    // CREAZIONE DI UN VARIABILE PUNTATORE
    int *p; // Creo una variabile puntatore ad interi
    p = &a; // Inserisco il riferimento di memoria (indirizzo di memoria) di a dentro p
    // Quindi ora p contiene l'indirizzo di memoria di a, ovvero che punta ad a.
    // int *p = &a; // Riga alternativa con le due operazioni sopra inglobate in una sola

    printf("Indirizzo di memoria di p: %p\n", &p);
    printf("Valore contenuto in p: %p\n", p);
    printf("Valore puntato da p: %d\n", *p); // *p è la deferenziazione della variabile puntatore

    printf("\n\n");

    // Creazione di una variabile con assegnazione del pavolere puntato da una variabile puntatore
    int b = *p;
    printf("Indirizzo di memoria di b: %p\n", &b);
    printf("Valore contenuto in b: %d\n", b);

    /*
    // CREAZIONE DI UN PUNTATORE CHE PUNTA AD UN ALTRO PUNTATORE (DOPPIO PUNTATORE)
    int **c; // Creo una variabile puntatore ad interi
    c = &b; // Inserisco il riferimento di memoria (indirizzo di memoria) di y dentro z
    // Quindi ora z contiene l'indirizzo di memoria di y, ovvero che punta ad y.

    printf("Indirizzo di memoria di z: %p\n", &c);
    printf("Valore contenuto in z: %p\n", c);
    printf("Valore puntato da z: %p\n", *c); // *z è la deferenziazione della variabile puntatore
    printf("Valore contenuto dentro *(*z): %d\n", *(*c)); // Doppio puntatore
    */
}