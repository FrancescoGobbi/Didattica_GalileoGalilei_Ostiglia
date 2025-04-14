/*
Iterazione 16 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il numero intero deve essere compreso tra 1 e 100.
Se il numero non è compreso tra 1 e 100, 
il programma deve continuare a chiedere all'utente di inserire un numero valido.
Il programma deve stampare "Il numero inserito è valido." quando l'utente inserisce un numero valido.
Esempio:
Se l'utente inserisce 50, il programma deve stampare "Il numero inserito è valido."
Se l'utente inserisce 150, il programma deve continuare a chiedere un numero valido.
Se l'utente inserisce -10, il programma deve continuare a chiedere un numero valido.
Se l'utente inserisce 0, il programma deve continuare a chiedere un numero valido.
*/

#include <stdio.h>

int main() {
    int n; // Dichiarazione della variabile n

    // Inizio del ciclo do-while - iterazione con controllo in coda
    // Si va a forzare l'input dell'utente ad una valore che è compreso tra 1 e 100
    do {
        printf("Inserisci un numero compreso tra 1 e 100: ");
        scanf("%d", &n); // Input dell'utente
    } while (n < 1 || n > 100); // Condizione del ciclo: continua finché n non è compreso tra 1 e 100
    // Quando la condizione del ciclo non è più vera, il ciclo termina
    // Noi VOGLIAMO che il ciclo termini quando n è compreso tra 1 e 100
    // Quindi quello che VOGLIAMO è : n >= 1 && n <= 100
    // Quindi, negando la condizione, otteniamo: n < 1 || n > 100
    // Inseriamo questo nella condizione e otteniamo il ciclo do-while
    // Il ciclo continua finché n è minore di 1 o maggiore di 100
    // In questo modo, il ciclo continua a chiedere all'utente di inserire un numero valido

    // Stampa finale
    printf("Il numero %d è valido.\n", n);
}