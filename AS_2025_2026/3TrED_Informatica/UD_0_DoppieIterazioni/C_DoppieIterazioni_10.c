/* Doppie Iterazioni 9 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente due valori interi A e B.
Il numero deve essere compreso tra 1 e 10 per A e tra 1 e 20 per B.

Il programma deve eseguire e stampare una tabella di dimensioni AxB con i valori pari.

ESEMPIO:
Se l'utente inserisce A=3 e B=4, il programma deve stampare
2 4 6 8
10 12 14 16
18 20 22 24

Se l'utente inserisce A=5 e B=6, il programma deve stampare
 2  4  6  8 10 12
14 16 18 20 22 24
26 28 30 32 34 36
38 40 42 44 46 48
50 52 54 56 58 60

*/

#include <stdio.h>

int main() {
    int A, B; // Variabili per la dimensione della tabella
    int i, j; // Variabili di iterazione
    int numero_pari = 2; // Inizializzo il primo numero pari

    // Prendo in input il valore di A compreso tra 1 e 10
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 10): ");
        scanf("%d", &A);
    } while (A < 1 || A > 10); // NOI VOGLIAMO: 1 <= A <= 10

    // Prendo in input il valore di B compreso tra 1 e 20
    do {
        printf("Inserisci un valore per B (compreso tra 1 e 20): ");
        scanf("%d", &B);
    } while (B < 1 || B > 20); // NOI VOGLIAMO: 1 <= B <= 20

    // Stampa della tabella con i numeri pari
    for (i = 1; i <= A; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= B; j++) { // Ciclo interno per le colonne
            printf("%2d ", numero_pari); // Stampa del numero pari con larghezza di 2 caratteri
            numero_pari += 2; // Incremento al prossimo numero pari
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}