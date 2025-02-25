/*
Condizione 7
Creare un programma in C che prenda in input da parte dell'utente tre valori interi (A, B e C).
Il programma deve verificare se almeno uno dei numeri è pari.
Se almeno uno dei numeri è pari, il programma deve verificare se la somma di A e B è maggiore di C.
Se la somma di A e B è maggiore di C, il programma deve stampare "La somma di A e B è maggiore di C."
Se la somma di A e B non è maggiore di C, il programma deve stampare "La somma di A e B non è maggiore di C."
Se nessuno dei numeri è pari, il programma deve stampare "Nessuno dei numeri è pari."
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

    // Faccio le varie considerazioni/controlli
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
        if ((a + b) > c) {
            printf("La somma di A e B è maggiore di C.\n");
        }
        else {
            printf("La somma di A e B non è maggiore di C.\n");
        }
    }
    else {
        printf("Nessuno dei numeri è pari.\n");
    }
}