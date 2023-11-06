#include <stdio.h>

int main() {
    int a; // Variabile intera
    float b; // Variabile float
    char c; // Variabile char

    // Prendo in input le variabili
    printf("Inserisci un numero intero: "); // Stampa per l'utente
    scanf("%d", &a); // %d per l'intero
    fflush(stdin); // Pulisco l'input perché il tipo di dato cambia
    printf("Inserisci un numero float: "); // Stampa per l'utente
    scanf("%f", &b); // %f per il float
    fflush(stdin); // Pulisco l'input perché il tipo di dato cambia
    printf("Inserisci un carattere: "); // Stampa per l'utente
    scanf("%c", &c); // %c per il char
    fflush(stdin); // Pulisco l'input perché il tipo di dato cambia

    // Stampo le variabili
    printf("La variabile intera vale: %d\n", a); // Stampo di una stringa di caratteri e il valore desiderato (%d)
    printf("La variabile flaot vale: %f\n", b); // Stampo di una stringa di caratteri e il valore desiderato (%f)
    printf("La variabile char vale: %c\n", c); // Stampo di una stringa di caratteri e il valore desiderato (%c)
}