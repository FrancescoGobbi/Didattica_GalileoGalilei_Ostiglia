/*
Programma per introdurre il concetto di selezioni in C, utilizzando if ed else.
Questo costrutto corrisponde al rombo nei diagrammi a blocchi, dove il "vero"
è rappresentato dal codice tra le parentesi graffe dell'if, mentre il "falso"
è rappresentato dal codice tra le parentesi graffe dell'else.

Il programma verifica se un numero in input è pari o dispari.
*/

#include <stdio.h> // Inclusione della libreria standard per input e output

int main() {
    // Dichiarazione della variabile
    int numero;

    // Spiegazione all'utente su cosa fare
    printf("Inserisci un numero intero: ");

    // Richiesta in input all'utente del numero intero
    scanf("%d", &numero);

    // Inizio della struttura/costrutto di selezione if-else
    // Viene valutata la condizione all'interno delle parentesi tonde dopo l'if.
    // Se la condizione è vera viene eseguito il codice tra parentesi graffe successive,
    // altrimenti viene eseguito il codice tra le parentesi graffe dell'else.
    if (numero % 2 == 0) { // VERO: La condizione controlla se il resto della divisione del numero per 2 è uguale a 0
        // Questo blocco viene eseguito se il numero è pari
        printf("Il numero %d è pari.\n", numero);
    } 
    else { // FALSO: La condizione non è soddisfatta, quindi il numero è dispari
        // Questo blocco viene eseguito se il numero è dispari
        printf("Il numero %d è dispari.\n", numero);
    }
}