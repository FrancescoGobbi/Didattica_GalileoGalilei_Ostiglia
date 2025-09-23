/* Doppie Iterazioni 2 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A e B.
Entrambi i valori devono essere compresi tra 3 e 10.

Il programma deve stampare una figura formata di * (asterischi) di dimensione A x B,
con all'interno solamente spazi. Quindi gli *(asterischi) devono essere stampati solamente
sulle righe e colonne esterne della figura, quindi sul perimetro.

ESEMPIO:
Se l'utente inserisce A=3 e B=5, il programma deve stampare:
*****
*   *
*****

N.B. Serve attenzione per tornare a capo riga.
*/

#include <stdio.h>

int main() {
    int A, B; // Variabili per le dimensioni della figura
    int i, j; // Variabili di iterazione

    // Prendo in input il valore di A compreso tra 1 e 10
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 10): ");
        scanf("%d", &A);
    } while (A < 3 || A > 10); // NOI VOGLIAMO: A>=1 && A<=10

    // Prendo in input il valore di B compreso tra 1 e 10
    do {
        printf("Inserisci un valore per B (compreso tra 1 e 10): ");
        scanf("%d", &B);
    } while (B < 3 || B > 10); // NOI VOGLIAMO: B>=1 && B<=10

    // Stampa della figura formata da asterischi solo sul perimetro
    for (i = 1; i <= A; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= B; j++) { // Ciclo interno per le colonne
            if (i == 1 || i == A || j == 1 || j == B){
                printf("* "); // Stampa dell'asterisco
            }
            else {
                printf("  ");
            }
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}