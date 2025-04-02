/* ESERCIZIO 2 (2.5 punti) 
Creare un programma in C che prenda in input un valore intero A, da parte dell’utente.
Il programma deve sommare e contare quanti numeri sono dispari e divisibili per 5 tra il numero 1 ed la
variabile A.
Il programma deve stampare la somma ottenuta ed il conteggio ottenuto.

ESEMPIO: Se = 15, il programma deve contare 2, in quanto solo il numero 5 ed il numero 10 sono dispari
ed allo stesso tempo divisibili per 5. Il programma deve anche ottenere il prodotto 50, ovvero il prodotto
solo il numero 5 ed il numero 10.
*/

#include <stdio.h>

int main() {
    int A, i;
    int somma = 0;
    int count = 0;

    printf("Inserisci un numero intero A: ");
    scanf("%d", &A);

    for (i = 1; i <= A; i++) {
        if (i % 2 != 0 && i % 5 == 0) {
            somma += i;
            count++;
        }
    }

    printf("La somma dei numeri dispari e divisibili per 5 e': %d\n", somma);
    printf("Il conteggio dei numeri dispari e divisibili per 5 e': %d\n", count);
}