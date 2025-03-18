/*
Iterazione 7 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente due numeri interi A e B.
Il programma deve stampare tutti i numeri compresi tra A e B, estremi inclusi, che sono divisibili per 3.
Il programma deve stampare tutti i numeri divisibili per 3 compresi tra A e B.

Esempio:
Se A = 1 e B = 10, il programma deve stampare "Ci sono 3 numeri divisibili per 3 tra 1 e 10."
*/

#include <stdio.h>

int main() {
    // Creazione delle variaibli
    int A, B;
    int i = 0; // Inizializzazione della variabile di controllo del ciclo
    int count = 0;
    // Alternativa: int A, B, i = 0, count = 0;
    
    // Input del numero
    printf("Inserisci due numeri: ");
    scanf("%d %d", &A, &B);

    // Controllo i valori da A a B 
    while (A <= B) { // Condizione del ciclo: continua finché A è minore o uguale a B
        if (A % 3 == 0){
            count++; // Alternativa: count = count + 1;
        }
        A = A + 1; // Incremento della variabile di controllo del ciclo (Alternativa: A++;)
    }

    // Stampa finale
    printf("Ci sono %d numeri divisibili per 3 tra %d e %d.\n", count, A, B);
}