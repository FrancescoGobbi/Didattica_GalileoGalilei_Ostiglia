/*
Iterazione 26 (Utilizzo delle iterazioni)
Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il valore deve essere compreso tra 1 e 20.

Il programma deve sommare e stampare tutti i numeri primi compresi tra 1 e A.
Dovrò fare la somma tra tutti questi numeri primi, stampare ognuno di essi e alla fine stampare la somma totale.
ESEMPIO:
Se l'utente inserisce A=10, il programma deve stampare "I numeri primi compresi tra 1 e 10 sono: 2, 3, 5, 7" e "La somma dei numeri primi è: 17".
Se l'utente inserisce A=20, il programma deve stampare "I numeri primi compresi tra 1 e 20 sono: 2, 3, 5, 7, 11, 13, 17, 19" e "La somma dei numeri primi è: 77".
Se l'utente inserisce A=1, il programma deve stampare "Non ci sono numeri primi compresi tra 1 e 1" e "La somma dei numeri primi è: 0".
*/

#include <stdio.h>

int main() {
    // Creaiamo le variabili utilizzate nel codice
    int A;

    // Richiedo in input il numero A, rispetto ai vincoli del testo
    do{
        scanf("%d", &A);
    }while();
}