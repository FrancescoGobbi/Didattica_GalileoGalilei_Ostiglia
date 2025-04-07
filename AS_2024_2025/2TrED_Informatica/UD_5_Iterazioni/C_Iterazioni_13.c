/*
Iterazione 13 (Utilizzo del for)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve eseguire il fattoriale del numero n.
Il programma deve poi stampre tale valore del fattoriale.
*/

#include <stdio.h>

int main() {
    int n, fattoriale = 1;
    int i = 1; // Creo la variabile di iterazione
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Calcolo del fattoriale   
    // Utilizzo del for: il for ha bisogno di 3 componenti (separati dal ;)
    // Prima componente: Inizializzazione della variabile di controllo del ciclo
    // Seconda componente: Condizione del ciclo: continua finché i è minore o uguale a n
    // Terza componente: Incremento della variabile di controllo del ciclo
    for (i = 1; i <= n; i++) { // Condizione del ciclo: continua finché i è minore o uguale a n
        fattoriale = fattoriale * i; // Aggiunge il valore corrente di i alla somma
    }
    // Quando la condizione del ciclo non è più vera, il ciclo termina

    // Stampa del risultato
    printf("Il fattoriale della variabile %d è: %d\n", n, fattoriale);
}