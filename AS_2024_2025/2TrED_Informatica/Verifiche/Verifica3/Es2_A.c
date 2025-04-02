/* ESERCIZIO 2 (2.5 punti) 
Creare un programma in C che prenda in input un valore intero A, da parte dell’utente.
Il programma deve moltiplicare e contare quanti numeri sono pari e divisibili per 3 tra il numero 1 ed
la variabile A.
Il programma deve stampare il prodotto ottenuta ed il conteggio ottenuto.

ESEMPIO: Se = 15, il programma deve contare 2, in quanto solo il numero 6 ed il numero 12 sono pari
ed allo stesso tempo divisibili per 3. Il programma deve anche ottenere il prodotto 72, ovvero il prodotto
di 6 * 12.
*/

#include <stdio.h>

int main() {
    int A, i;
    int prodotto = 1;
    int count = 0;

    printf("Inserisci un numero intero A: ");
    scanf("%d", &A);

    for (i = 1; i <= A; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            prodotto = prodotto * i;
            count++;
        }
    }

    printf("Il prodotto dei numeri pari e divisibili per 3 e': %d\n", prodotto);
    printf("Il conteggio dei numeri pari e divisibili per 3 e': %d\n", count);
}