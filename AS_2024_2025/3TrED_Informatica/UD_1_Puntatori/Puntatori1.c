/**
 * @file Puntatori1.c
 * @author your name 
 * @brief Programma con la visione iniziale dei puntatori in C e del puntatore ad un altro puntatore.
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
    int *p1; // Creo una variabile puntatore ad interi
    p1 = &a; // Inserisco il riferimento di memoria (indirizzo di memoria) di a dentro p
    // Quindi ora p contiene l'indirizzo di memoria di a, ovvero che punta ad a.
    // int *p = &a; // Riga alternativa con le due operazioni sopra inglobate in una sola

    printf("Indirizzo di memoria di p: %p\n", &p1);
    printf("Valore contenuto in p: %p\n", p1);
    printf("Valore puntato da p: %d\n", *p1); // *p1 è la deferenziazione della variabile puntatore

    printf("\n\n");

    // CREAZIONE DI UN PUNTATORE CHE PUNTA AD UN ALTRO PUNTATORE (DOPPIO PUNTATORE)
    int **p2; // Creo una variabile puntatore di puntatori, ovvero un puntatore che punta ad una variabile puntatori ad interi
    p2 = &p1; // Inserisco il riferimento di memoria (indirizzo di memoria) di p1 dentro p2
    // Quindi ora p2 contiene l'indirizzo di memoria di p1, ovvero che punta ad p1.

    printf("Indirizzo di memoria di z: %p\n", &p2);
    printf("Valore contenuto in z: %p\n", p2);
    printf("Valore puntato da z: %p\n", *p2); // *p2 è la deferenziazione della variabile puntatore
    printf("Valore contenuto dentro *(*p2): %d\n", *(*p2)); // Doppio puntatore
}