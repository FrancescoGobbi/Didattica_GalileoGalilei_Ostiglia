/* Es4
Crea un programma in C che prenda in input due valori interi.
Il programma deve eseguire tutte le operazioni tra il primo valore ed il secondo.
Il programma deve stampare i risultati.
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b;
    int somma, differenza, moltiplicazione, divisione;

    // Richiedo in input i valori
    printf("Inserisci il primo valore intero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore intero: ");
    scanf("%d", &b);

    // Soluzione condensata dei due input
    /*
    printf("Inserisci i due valori interi: ");
    scanf("%d %d", &a, &b); // Prendo i due valori con una sola riga di codice
    */

    // Eseguo le operazioni 
    somma = a + b;
    differenza = a - b;
    moltiplicazione = a * b;
    divisione = a / b;

    // Stampo i risultati
    printf("%d + %d = %d\n", a, b, somma);
    printf("%d - %d = %d\n", a, b, differenza);
    printf("%d * %d = %d\n", a, b, moltiplicazione);
    printf("%d / %d = %d\n", a, b, divisione);
}