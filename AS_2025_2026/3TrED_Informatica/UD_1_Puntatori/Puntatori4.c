/* Puntatori 4
Con l'utilizzo dei puntatori eseguire e stampare la tavola Pitagorica (tabellina delle moltiplicazioni).

https://it.wikipedia.org/wiki/Tavola_pitagorica
*/

#include <stdio.h>

int main() {
    int i, j; // Variabili di iterazione
    int risultato; // Variabile per il risultato della moltiplicazione
    int *p_result = &risultato; // Puntatore alla variabile risultato

    // N.B. Volendo anche i ed j possono essere puntatori ed utilizzati come tali
    //int *p1 = &i; // Puntatore alla variabile i
    //int *p2 = &j; // Puntatore alla variabile j

    // Stampa dell'intestazione della tabella
    printf("    |");
    for (j = 1; j <= 10; j++) {
        printf("%4d", j);
    }
    printf("\n");
    printf("----+----------------------------------------\n");

    // Stampa della tabella delle moltiplicazioni
    for (i = 1; i <= 10; i++) {
        printf("%3d |", i); // Stampa il numero della riga
        for (j = 1; j <= 10; j++) {
            *p_result = i * j; // Calcola il prodotto utilizzando i puntatori
            printf("%4d", *p_result); // Stampa il risultato con larghezza di 4 caratteri
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}