/*
Iterazione 3 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve stampare tutti i numeri pari compresi tra 1 ed n, estremi compresi.
*/

#include <stdio.h>

int main() {
    int n;
    int i = 2; // Inizializzazione della variabile di controllo del ciclo
    // Alternativa: int n, i = 1;
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Stampa i valori da 1 a N 
    while (i <= n) { // Condizione del ciclo: continua finché i è minore o uguale a n
        if (i % 2 == 0 ){
            printf("%d ", i); // Stampa il valore corrente di i
        }
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }
    // Quando la condizione del ciclo non è più vera, il ciclo termina
    printf("\n"); // Per andare a capo a fine programma (Serve principalmente per MacOS, non per DevC++)
}