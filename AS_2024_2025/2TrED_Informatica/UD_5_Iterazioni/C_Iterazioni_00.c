/*
Iterazione 0 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve stampare tutti i valori che vanno da 1 ad n, dove n è il valore inserito dall'utente.
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1; // Inizializzazione della variabile di controllo del ciclo
    // Alternativa: int n, i = 1;
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Stampa i valori da 1 a N 
    while (i <= n) { // Condizione del ciclo: continua finché i è minore o uguale a n
        printf("%d ", i); // Stampa il valore corrente di i
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }
    // Quando la condizione del ciclo non è più vera, il ciclo termina
    printf("\n"); // Per andare a capo a fine programma (Serve principalmente per MacOS, non per DevC++)
}