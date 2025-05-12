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
    int somma = 0; // La somma dei numeri primi
    int i, j; // Variabili di itarezione
    int count = 0; // Verifico se un numero è primo

    // Richiedo in input il numero A, rispetto ai vincoli del testo
    do{
        printf("Insesci un numero A compreso tra 1 e 20: ");
        scanf("%d", &A);
    }while(A<1 || A>20);
    // NOI VOGLIAMO: A>=1 && A<=20
    // !(A>=1 && A<=20)
    // Quindi NON VOGLIAMO: A<1 || A>20, che è il negato/duale della condizione sopra

    // Andiamo avanti con il programma
    for(i = 1; i<=A; i++){ // Guardo tutti i numeri primi compresi tra 1 e A
        count = 0; // Azzero il contatore dei divisori
        for(j=1 ; j<=i ; j++){ // Guardo tutti i numeri tra 1 ed i, estremi compresi
            if (i % j == 0){ // Controllo se la j è un divisore di i
                count++;
            }
        }
    
        if (count == 2) { // Se il numero è primo
            somma = somma + i; // Sommo il numero primo trovato
            printf("%d ", i); // Stampo il numero primo provato
        }
    } // Ho sommato tutti i numeri primi compresi tra 1 ed A

    printf("\nLa somma dei numeri primi compresi tra %d e %d è: %d\n", 1, A, somma);
}