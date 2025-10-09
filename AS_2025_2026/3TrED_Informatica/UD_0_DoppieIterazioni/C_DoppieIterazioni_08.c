/* Doppie Iterazioni 8 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il numero deve essere compreso tra 1 e 10.

Il pramma deve eseguire e stampare una tabella con solo i valori pari in una tabella di dimensioni AxA.


ESEMPIO:
Se l'utente inserisce A=3, il programma deve stampare:
2 4 6
8 10 12
14 16 18

Se l'utente inserisce A=5, il programma deve stampare:
 2  4  6  8 10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50

*/

#include <stdio.h>

int main() {
    int A; // Variabile per la dimensione della tabella
    int i, j; // Variabili di iterazione
    int numero_pari = 2; // Inizializzo il primo numero pari

    // Prendo in input il valore di A compreso tra 1 e 10
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 10): ");
        scanf("%d", &A);
    } while (A < 1 || A > 10); // NOI VOGLIAMO: 1 <= A <= 10

    // Stampa della tabella con i numeri pari
    for (i = 1; i <= A; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= A; j++) { // Ciclo interno per le colonne
            printf("%2d ", numero_pari); // Stampa del numero pari con larghezza di 2 caratteri
            numero_pari += 2; // Incremento al prossimo numero pari
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}