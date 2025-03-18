/*
Iterazione 9 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente due numeri interi A e B.
Il programma vede sommare tutti i numeri compresi tra A e B, estremi inclusi, che sono divisibili per 5.
Il programma deve stampare la somma di tutti i numeri divisibili per 5 compresi tra A e B.

Esempio:  
Se A = 1 e B = 10, il programma deve stampare "La somma dei numeri divisibili per 5 tra 1 e 10 è: 15."
*/

#include <stdio.h>

int main() {
    // Creazione delle variaibli
    int A, B;
    int i; // Creazione della variabile di controllo del ciclo
    int sum = 0;
    // Alternativa: int A, B, i = 0, sum = 0;
    
    // Input del numero
    printf("Inserisci due numeri: ");
    scanf("%d %d", &A, &B);

    i = A; // Inizializzazione della variabile di controllo del ciclo

    // Controllo i valori da A a B 
    while (i <= B) { // Condizione del ciclo: continua finché A è minore o uguale a B
        if (i % 5 == 0){
            sum += i; // Alternativa: sum = sum + A;
        }
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }

    // Stampa finale
    printf("La somma dei numeri divisibili per 5 tra %d e %d è: %d.\n", A, B, sum);
}