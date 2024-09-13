/**
 * @file Ripasso2.c
 * @author your name 
 * @brief Creare un programma in C che stampi questa immagine:
 * T T T T T
 * V V V V V
 * T T T T T
 * V V V V V
 * T T T T T
 * 
 * N.B Controllare bene la dimensione dell'immagine
 * @version 0.1
 * @date 2024-09-13
 *
 * 
 */

#include <stdio.h>

int main () {
    int n; // Varaibile di input
    int i, j; // Variabili per le iterazioni

    // Input della variabile per la dimensione della figura
    printf("Insersci la dimensione della figura: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++) { // Iterazione per le righe
        for(j = 1; j<=n; j++) { // Iterazione per le colonne
            if (i % 2 == 0) { // Righe pari
                printf(" V ");
            } 
            else { // Righe dispari
                printf(" T ");
            }
        }
        printf("\n"); // Vado a capo riga
    }
}