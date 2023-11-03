#include <stdio.h>

int main() {
    int a; // Variabile intera
    float b; // Variabile float
    char c; // Variabile char

    // Prendo in input le variabili
    printf("Inserisci un numero intero: "); // Stampa per l'utente
    scanf("%d", &a);
    fflush(stdin); // Pulisco l'input
    printf("Inserisci un numero float: "); // Stampa per l'utente
    scanf("%f", &b);
    fflush(stdin); // Pulisco l'input
    printf("Inserisci un carattere: "); // Stampa per l'utente
    scanf("%c", &c);
    fflush(stdin); // Pulisco l'input

    // Stampo le variabili
    printf("La variabile intera vale: %d\n", a);
    printf("La variabile flaot vale: %f\n", b);
    printf("La variabile char vale: %c\n", c);

}