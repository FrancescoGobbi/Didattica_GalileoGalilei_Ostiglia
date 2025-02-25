/*
Iterazione 2 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve eseguire il fattoriale di n.
N.B. Fattoriale di n = n * (n-1) * (n-2) * ... * 1
*/

#include <stdio.h>

int main() {
    int n, fattoriale = 1;
    int i = 1; // Inizializzazione della variabile di controllo del ciclo
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Calcolo del fattoriale
    while (i <= n) { // Condizione del ciclo: continua finché i è minore o uguale a n
        fattoriale *= i; // Moltiplica il valore corrente di i al fattoriale
        i++; // Incremento della variabile di controllo del ciclo
    }
    // Quando la condizione del ciclo non è più vera, il ciclo termina

    // Stampa del risultato
    printf("Il fattoriale di %d è: %d\n", n, fattoriale);
}