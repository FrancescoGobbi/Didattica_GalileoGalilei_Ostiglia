/*
Iterazione 6 (Utilizzo del while)
Creare un programma in C che prenda in input due valori A e B.
Il programma deve contare quanti numeri pari ci sono tra A e B, estremi inclusi.
Il programma deve stampare il numero di numeri pari.

Esempio:
Se A = 2 e B = 10, il programma deve stampare "Ci sono 5 numeri pari tra 2 e 10."
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
        if (A % 2 == 0){
            count++; // Alternativa: count = count + 1;
        }
        A = A + 1; // Incremento della variabile di controllo del ciclo (Alternativa: A++;)
    }

    // Stampa finale
    printf("Ci sono %d numeri pari tra %d e %d.\n", count, A, B);
}