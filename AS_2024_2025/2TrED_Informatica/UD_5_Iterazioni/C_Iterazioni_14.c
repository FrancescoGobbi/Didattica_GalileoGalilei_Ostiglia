/*
Iterazione 14 (Utilizzo del for)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve stampare tutti i numeri pari tra 1 ed n (incluso n se è pari).
Se n è minore di 1, il programma deve stampare "Nessun numero da stampare."

Esempio:
Se n = 10, il programma deve stampare "2 4 6 8 10"
Se n = 5, il programma deve stampare "2 4"
Se n = 0, il programma deve stampare "Nessun numero da stampare."
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1; // Creo la variabile di iterazione
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n >= 1){ // Caso in cui n è maggiore e uguale ad 1
        for(i=1 ; i<=n ; i++){ // Ciclo for per guardare tutti i numeri da 1 ad n, compresi
            if (i % 2 == 0){ // Controllo se la variabile i è pari
                printf("%d ", i);
            }
        }
    }
    else {
        printf("Nessun numero da stampare.");
    }

    printf("\n");
}