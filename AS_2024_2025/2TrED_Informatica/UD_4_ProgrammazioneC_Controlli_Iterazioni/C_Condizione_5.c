/*
Condizione 5
Creare un programma in C che prenda in input da parte dell'utente tre valori interi (A, B e C).
Il programma deve verificare se almeno due dei tre numeri sono uguali.
Se almeno due numeri sono uguali, il programma deve stampare "Almeno due numeri sono uguali."
Se tutti i numeri sono diversi, il programma deve stampare "Tutti i numeri sono diversi."
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b, c;

    // Prendo in input le variabili
    printf("Insersci il valore per A: ");
    scanf("%d", &a);
    printf("Insersci il valore per B: ");
    scanf("%d", &b);
    printf("Insersci il valore per C: ");
    scanf("%d", &c);

    // Faccio le varie considerazioni/controlli (PRIMA SOLUZIONE)
    if (a == b) {
        printf("Almeno due numeri sono uguali.\n");
    }
    else if(b == c) {
        printf("Almeno due numeri sono uguali.\n");
    }
    else if (a == c) {
        printf("Almeno due numeri sono uguali.\n");
    }
    else {
        printf("Tutti i numeri sono diversi.\n");
    }

    /* Soluzione scorretta
    if (a == b) {
        printf("Almeno due numeri sono uguali.\n");
    }
    if (b == c) {
        printf("Almeno due numeri sono uguali.\n");
    }
    if (a == c) {
        printf("Almeno due numeri sono uguali.\n");
    }
    */

    // Faccio le varie considerazioni/controlli (SECONDA SOLUZIONE)
    if (a == b || b == c || a == c){
        printf("Almeno due numeri sono uguali.\n");
    }
    else {
        printf("Tutti i numeri sono diversi.\n");
    }
}