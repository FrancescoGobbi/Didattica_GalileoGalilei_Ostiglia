/*
Iterazione 17 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il numero intero deve essere compreso tra 1 e 100.

Il programma deve eseguire e stampare il fattoriale del numero n inserito dall'utente.

ESEMPIO:
Se l'utente inserisce 5, il programma deve stampare "Il fattoriale di 5 è 120."
Se l'utente inserisce 0, il programma deve continuare a chiedere un numero valido.
Se l'utente inserisce 150, il programma deve continuare a chiedere un numero valido.
Se l'utente inserisce -10, il programma deve continuare a chiedere un numero valido.
Se l'utente inserisce 0, il programma deve continuare a chiedere un numero valido.
*/

#include <stdio.h>

int main() {
    int n;
    int fattoriale = 1;
    int i = 1; // Inizializzazione della variabile di controllo del ciclo

    // Inizio del ciclo do-while - iterazione con controllo in coda
    do {
        printf("Inserisci un numero compreso tra 1 e 100: ");
        scanf("%d", &n); // Input dell'utente
    } while (n < 1 || n > 100); // Condizione del ciclo: continua finché n non è compreso tra 1 e 100

    // Calcolo del fattoriale
    for (i = 1; i <= n; i++) { // Condizione del ciclo: continua finché i è minore o uguale a n
        fattoriale = fattoriale * i; // Moltiplica il valore corrente di i al fattoriale
    }

    // Stampa del risultato finale
    printf("Il fattoriale di %d è: %d\n", n, fattoriale);
}