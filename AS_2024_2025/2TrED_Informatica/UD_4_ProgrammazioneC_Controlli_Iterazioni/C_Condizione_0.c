/*
Condizione 0
Creare un programma in C che prenda in input da parte dell'utente un valore intero (numero).
Il programma deve verificare se il numero è pari o dispari.
Se il numero è pari, il programma deve stampare "Il numero X è pari."
Se il numero è dispari, il programma deve stampare "Il numero X è dispari."
*/

#include <stdio.h>

int main() {
    int numero;
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Verifica se il numero è pari o dispari
    if (numero % 2 == 0) { // Modulo (%) = resto della divisione
        printf("Il numero %d è pari.\n", numero);
    } 
    else {
        printf("Il numero %d è dispari.\n", numero);
    }

    // Verificare se il numero inserito è maggiore o minore di 100
    if(numero > 100) {
        printf("Il numero è maggiore di 100.\n");
        printf("Numero è grande!\n");
    }   
    else {
        printf("Il numero è minore di 100.\n");
        printf("Numero è troppo piccolo!\n");
    } 
}