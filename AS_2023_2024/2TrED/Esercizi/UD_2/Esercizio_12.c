#include <stdio.h>

// Esercizio 12
/* 
TESTO ESERCIZIO:
Creare un programma in C che pranda in input un valore (A) INTERO e POSITIVO.
Il programma deve verificare se il numero è pari o dispari e stampare un messaggio
in base all'esito di questa domanda.

ESEMPIO:
Se A = 13, il numero è dispari e quindi stamperò "Il numero è negativo".
*/

int main() {
    int A;

    do{
        printf("Inserisci il valore di A: ");
        scanf("%d", &A); 
    }while(A<=0);

    if (A % 2 == 0) { // Se il resto della divisione per 2 è 0 --> PARI
        printf("%d è PARI\n", A);
    } 
    else { //Se il resto della divisione per 2 è 1 --> DISPARI
        printf("%d è DISPARI\n", A);
    }
}