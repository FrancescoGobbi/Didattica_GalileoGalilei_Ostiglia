/*
Iterazione 8 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente due numeri interi A e B.
Il programma deve eseguire la differenza tra il fattoriale maggiore - fattoriale minore.
Il programma deve stampare la differenza tra il fattoriale maggiore e il fattoriale minore.
N.B. Fattoriale di n = n * (n-1) * (n-2) * ... * 1

Esempio:  
Se A = 3 e B = 5, il programma deve stampare "La differenza tra il fattoriale maggiore e il fattoriale minore è: 6."
*/

#include <stdio.h>

int main() {
    // Creazione delle variaibli
    int A, B;
    int i = 1; // Inizializzazione della variabile di controllo del ciclo
    int fattA = 1;
    int fattB = 1;
    int diff = 0;
    // Alternativa: int A, B, i = 1, fattA = 1, fattB = 1, diff = 0;
    
    // Input del numero
    printf("Inserisci due numeri: ");
    scanf("%d %d", &A, &B);

    // Calcolo del fattoriale di A
    while (i <= A) { // Condizione del ciclo: continua finché i è minore o uguale a A
        fattA *= i; // Alternativa: fattA = fattA * i;
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }

    // Reset della variabile di controllo del ciclo
    i = 1;

    // Calcolo del fattoriale di B
    while (i <= B) { // Condizione del ciclo: continua finché i è minore o uguale a B
        fattB *= i; // Alternativa: fattB = fattB * i;
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }

    // Calcolo della differenza tra il fattoriale maggiore e il fattoriale minore
    if (fattA > fattB) {
        diff = fattA - fattB;
    }
    else {
        diff = fattB - fattA;
    }

    // Stampa finale
    printf("La differenza tra il fattoriale maggiore e il fattoriale minore è: %d.\n", diff); 
}