/*
Iterazione 15 (Utilizzo del for)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve determinare se il valore inserito è un numero primo.
Se il valore è un numero primo, il programma deve stampare "Il numero è primo."
Se il valore non è un numero primo, il programma deve stampare "Il numero non è primo."
N.B. Un numero primo è un numero maggiore di 1 che è divisibile solo per 1 e per se stesso.
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1; // Creo la variabile di iterazione
    int count = 0; // Per contare i divisori
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++){ // Guardo tutti i numeri tra 1 ed n, estremi compresi
        if (n % i == 0){ // Controllo se la i è un divisore di n
            count++;
        }
    }

    if (count == 2) { // Se il numero è primo
        printf("Il numero è primo.\n");
    }
    else { // Se il numero NON è primo
        printf("Il numero non è primo.\n");
    }
}