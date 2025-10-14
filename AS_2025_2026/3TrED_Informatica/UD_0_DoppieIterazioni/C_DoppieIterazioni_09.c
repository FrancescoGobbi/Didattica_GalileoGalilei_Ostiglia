/* Doppie Iterazioni 9 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il numero deve essere compreso tra 1 e 10.
Il programma deve eseguire e stampare una tabella con solo i valori dispari in una tabella di dimensioni AxA.

ESEMPIO:
Se l'utente inserisce A=3, il programma deve stampare:
1 3 5
7 9 11
13 15 17

Se l'utente inserisce A=5, il programma deve stampare:
 1  3  5  7  9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49

*/

#include <stdio.h>

int main() {
    int A; // Variabile per la dimensione della tabella
    int i, j; // Variabili di iterazione
    int numero_dispari = 1; // Inizializzo il primo numero dispari

    // Prendo in input il valore di A compreso tra 1 e 10
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 10): ");
        scanf("%d", &A);
    } while (A < 1 || A > 10); // NOI VOGLIAMO: 1 <= A <= 10

    // Stampa della tabella con i numeri dispari
    for (i = 1; i <= A; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= A; j++) { // Ciclo interno per le colonne
            printf("%2d ", numero_dispari); // Stampa del numero dispari con larghezza di 2 caratteri
            numero_dispari += 2; // Incremento al prossimo numero dispari
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}