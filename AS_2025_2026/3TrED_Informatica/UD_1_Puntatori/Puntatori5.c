/* Puntatori 5
Con l'utilizzo dei puntatori eseguire e stampare della seguente figura:
* * * * * 
*       *
*       *
* * * * *   

con A la dimensione del lato del quadrato.
L'utente deve inserire il valore di A compreso tra 1 e 20.
*/

#include <stdio.h>

int main() {
    int A; // Variabile per la dimensione del lato del quadrato
    int i, j; // Variabili di iterazione
    int *pA = &A; // Puntatore alla variabile A

    // N.B. Volendo anche i ed j possono essere puntatori ed utilizzati come tali
    //int *p1 = &i; // Puntatore alla variabile i
    //int *p2 = &j; // Puntatore alla variabile j

    // Prendo in input il valore di A compreso tra 1 e 20
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 20): ");
        scanf("%d", pA);
    } while ((*(pA) < 1) || (*(pA) > 20)); // NOI VOGLIAMO: 1 <= A <= 20

    for (i = 1; i <= *pA; i++) { // Ciclo esterno per le righe
        for (j = 1; j <= *pA; j++) { // Ciclo interno per le colonne
            if (i == 1 || i == *pA || j == 1 || j == *pA) {
                printf("* "); // Stampa l'asterisco ai bordi
            } else {
                printf("  "); // Stampa uno spazio all'interno
            }
        }
        printf("\n"); // Vado a capo dopo ogni riga
    }
}