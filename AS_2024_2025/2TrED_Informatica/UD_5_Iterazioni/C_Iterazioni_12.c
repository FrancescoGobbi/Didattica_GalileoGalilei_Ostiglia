/*
Iterazione 12 (Utilizzo del for)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve eseguire la somma di tutti i valori che vanno da 1 ad n, dove n è il valore inserito dall'utente.
*/

#include <stdio.h>

int main() {
    int n, somma = 0;
    int i;
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Calcolo della somma   
    // Utilizzo del for: il for ha bisogno di 3 componenti (separati dal ;)
    // Prima componente: Inizializzazione della variabile di controllo del ciclo
    // Seconda componente: Condizione del ciclo: continua finché i è minore o uguale a n
    // Terza componente: Incremento della variabile di controllo del ciclo
    for (i = 1; i <= n; i++) { // Condizione del ciclo: continua finché i è minore o uguale a n
        somma = somma + i; // Aggiunge il valore corrente di i alla somma
    }
    // Quando la condizione del ciclo non è più vera, il ciclo termina

    // Stampa del risultato
    printf("La somma dei valori da 1 a %d è: %d\n", n, somma);
}