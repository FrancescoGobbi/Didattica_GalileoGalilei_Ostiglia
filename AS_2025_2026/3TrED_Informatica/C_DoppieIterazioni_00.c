/* Doppie Iterazioni 0 (Iterazioni annidate)
Creare un programma in C che esegua la tabella pitagorica.

https://it.wikipedia.org/wiki/Tavola_pitagorica

*/

#include <stdio.h>

int main() {
    int i, j; // Variabili di iterazione
    int risultato; // Variabile per il risultato della moltiplicazione

    // Stampa dell'intestazione della tabella
    printf("Tabella Pitagorica\n");
    printf("-------------------\n");
    
    // Stampa dei numeri da 1 a 10 come intestazione delle colonne
    for (i = 1; i <= 10; i++) {
        printf("%2d ", i);
    }
    
    printf("\n-------------------\n");

    // Iterazione per le righe della tabella (ciclo for più esterno)
    for (i = 1; i <= 10; i++) {

        // Stampa per intestazione della riga
        printf("%2d |", i); // Stampa il numero della riga

        // Iterazione per le colonne della tabella (ciclo for più interno)
        for (j = 1; j <= 10; j++) {
            risultato = i * j; // Calcolo del prodotto
            printf("%2d ", risultato); // Stampa del risultato
            // %2d per allineare i numeri a destra in una colonna di 2 caratteri
        } // Fine del ciclo interno
        // Vado a capo riga
        printf("\n"); // Nuova riga dopo ogni riga della tabella
    } // Fine del ciclo esterno
}