/*
Condizione 2
Creare un programma in C che prenda in input da parte dell'utente un valore intero (numero).
Il programma deve verificare se il numero è pari E maggiore di 20.
Se il numero è pari e maggiore di 20, il programma deve stampare "Il numero X è pari e maggiore di 20."
Se il numero è pari ma non maggiore di 20, il programma deve stampare "Il numero X è pari ma non maggiore di 20."
Se il numero è dispari, il programma deve stampare "Il numero X è dispari."
*/

#include <stdio.h>

int main() {
    int numero;

    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Utilizzo di if annidati
    // Verifica se il numero è pari e maggiore di 20
    if (numero % 2 == 0) { // Se il numero è pari
        if (numero > 20) { // Se il numero è maggiore di 20
            printf("Il numero %d è pari e maggiore di 20.\n", numero);
        } 
        else { // Se il numero non è maggiore di 20
            printf("Il numero %d è pari ma non maggiore di 20.\n", numero);
        }
    } 
    else { // Se il numero è dispari
        printf("Il numero %d è dispari.\n", numero);
    }
}