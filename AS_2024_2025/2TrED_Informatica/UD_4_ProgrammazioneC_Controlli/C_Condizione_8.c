/*
Condizione 8
Creare un programma in C che prenda in input da parte dell'utente due valori interi (A e B).
Il programma deve verificare se almeno se A è divisibile per B.
Se A è divisibile per B, il programma deve stampare "A è divisibile per B."
Se A non è divisibile per B, il programma deve stampare "A non è divisibile per B."
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b;

    // Prendo in input le variabili
    printf("Insersci il valore per A: ");
    scanf("%d", &a);
    printf("Insersci il valore per B: ");
    scanf("%d", &b);

    if (a % b == 0) { // Caso VERO
        printf("A è divisibile per B.\n");
    }
    else {
        printf("A non è divisibile per B.\n");
    }
}