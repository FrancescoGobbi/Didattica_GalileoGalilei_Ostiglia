/*
Programma per introduzione delle selzioni in C, con if ed else.
Questo contrutto è uguale al rombo nei diagrammi a blocchi, dove il vero è
all'interno delle parentesi graffe dell'if, mentre il falso nelle parentesi
graffe dell'else.

Il programma verifica se un numero in input è positivo o negativo.
*/

#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    int numero;

    // Spiegazione all'utente su cosa fare
    printf("Inserisci un numero intero: ");

    // Richiesta in input all'utente del numero intero 
    scanf("%d", &numero);

    // Inizio della struttura/costrutto di selezione if-else
    // Viene valutata la condizione all'interno delle parentesi tondo dopo l'if.
    // Se la condizione è vera viene eseguito il codice tra parentesi graffe successive,
    // altrimenti viene eseguito il codice tra le parentesi graffe dell'else.
    if (numero >= 0) { // VERO
        // Questo blocco viene eseguito se il numero è maggiore di 0
        printf("Il numero %d è positivo.\n", numero);
    } 
    else { // FALSO
        // Questo blocco viene eseguito se il numero è minore di 0
        printf("Il numero %d è negativo.\n");
    }
}
