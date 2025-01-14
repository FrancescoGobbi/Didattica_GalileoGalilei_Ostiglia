/* Es5
Crea un programma in C che prenda un valore intero, uno float, uno double ed uno char.
Il programma deve stampare i valori inseriti.
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a;
    float b;
    double c;
    char d;

    // Prendo in input i valori
    printf("Inserisci un valore intero: ");
    scanf("%d", &a);
    fflush(stdin); // Consigliato dopo ogni richiesta in input

    printf("Inserisci un valore float: ");
    scanf("%f", &b);
    fflush(stdin); // Consigliato dopo ogni richiesta in input

    printf("Inserisci un valore double: ");
    scanf("%f", &c);
    fflush(stdin); // Consigliato dopo ogni richiesta in input

    printf("Inserisci un carattere char: ");
    scanf("%c", &d);
    fflush(stdin); // Consigliato dopo ogni richiesta in input

    // Stampo i valori inseriti
    printf("Il valore intero è: %d\n", a);
    printf("Il valore float è: %f\n", b);
    printf("Il valore double è: %f\n", c);
    printf("Il valore char è: %c\n", d);
}