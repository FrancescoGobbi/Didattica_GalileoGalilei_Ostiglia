/* ESERCIZIO 2 (2.5 punti) 
Creare un programma in C che prenda in input un valore intero A, da parte dell’utente.
Il programma deve sommare e contare quanti numeri sono pari e divisibili per 5 tra il numero 1 ed la
variabile A.
Il programma deve stampare la somma ottenuta ed il conteggio ottenuto.

ESEMPIO: Se = 15, il programma deve contare 1, in quanto solo il numero 10 è pari ed allo stesso tempo
divisibili per 5. Il programma deve anche ottenere il prodotto 10, ovvero il prodotto solo il numero 10 `e da
considerare per il prodotto.
*/

#include <stdio.h>

int main() {
    int A, i;
    int somma = 0;
    int count = 0;

    printf("Inserisci un numero intero A: ");
    scanf("%d", &A);

    for (i = 1; i <= A; i++) {
        if (i % 2 == 0 && i % 5 == 0) {
            somma += i;
            count++;
        }
    }

    printf("La somma dei numeri pari e divisibili per 5 e': %d\n", somma);
    printf("Il conteggio dei numeri pari e divisibili per 5 e': %d\n", count);
}