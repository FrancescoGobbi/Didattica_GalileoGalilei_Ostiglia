/*
Programma per introdurre il concetto di selezioni in C, utilizzando if ed else.
Questo costrutto corrisponde al rombo nei diagrammi a blocchi, dove il "vero"
è rappresentato dal codice tra le parentesi graffe dell'if, mentre il "falso"
è rappresentato dal codice tra le parentesi graffe dell'else.

Il programma verifica se la somma di due numeri in input è maggiore di 20 oppure no.
*/

#include <stdio.h> // Inclusione della libreria standard per input e output

int main() {
    // Dichiarazione delle variabili
    int numero1, numero2, somma;

    // Spiegazione all'utente su cosa fare
    printf("Inserisci il primo numero intero: ");

    // Richiesta in input all'utente del primo numero intero
    scanf("%d", &numero1);

    // Richiesta in input all'utente del secondo numero intero
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &numero2);

    // Alternativa
    // Prendere in input i due numeri nella stessa riga di codice
    // scanf("%d %d", &numero1, &numero2);

    // Calcolo della somma dei due numeri
    somma = numero1 + numero2;

    // Inizio della struttura/costrutto di selezione if-else
    // Viene valutata la condizione all'interno delle parentesi tonde dopo l'if.
    // Se la condizione è vera viene eseguito il codice tra parentesi graffe successive,
    // altrimenti viene eseguito il codice tra le parentesi graffe dell'else.
    if (somma > 20) { // VERO: La condizione controlla se la somma è maggiore di 20
        // Questo blocco viene eseguito se la somma è maggiore di 20
        printf("La somma di %d e %d è %d, che è maggiore di 20.\n", numero1, numero2, somma);
    } else { // FALSO: La condizione non è soddisfatta, quindi la somma è minore o uguale a 20
        // Questo blocco viene eseguito se la somma è minore o uguale a 20
        printf("La somma di %d e %d è %d, che non è maggiore di 20.\n", numero1, numero2, somma);
    }
}