/**
 * @file Ripasso3.c
 * @author your name 
 * @brief Creare un programma in C che crei un'immagine che stampi un triangolo equilatero di asterischi
 * con base di dimensioni n (con n> 0 AND dispari).
 * Esempio con n = 7:
 * 
 *       *
 *     * * *
 *   * * * * *
 * * * * * * * *
 * 
 * @version 0.1
 * @date 2024-09-13
 *
 * 
 */

#include <stdio.h>

int main () {
    int n, asterischi, spazietti; // Variabili utilizzate
    int i, j, z; // Variabili per le iterazioni

    do {
        printf("Inserisci il valore di n: ");
        scanf("%d", &n); // Prendo in input n
    }while(n%2 == 0 || n<0);

    // Inzializzo le variabili
    asterischi = 1;
    spazietti = (n-1)/2; // spazietti = n/2;

    // Creo la figura
    for(i=1 ; i<=(n/2 + 1) ; i++){ // Per le RIGHE
        // Stampo gli spazietti
        for(j=1; j<=spazietti  ; j++){ // Per gli SPAZIETTI
            printf("   ");
        }

        // Stampo gli asterischi
        for(z=1; z<=asterischi ; z++){// Per gli ASTERISCHI
            printf(" * ");
        }
        // Preparo il tutto per andare nella nuova righe
        printf("\n");
        spazietti--; // Riduco gli SPAZIETTI
        // Incremento gli ASTERISCHI
        asterischi = asterischi + 2; // asterischi+=2;
    } // End for RIGHE
} 