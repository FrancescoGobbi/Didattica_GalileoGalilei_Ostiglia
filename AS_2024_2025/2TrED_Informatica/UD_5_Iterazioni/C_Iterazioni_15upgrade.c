/*
Iterazione 15 upgrade (Utilizzo del for)
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
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(i=2; i<n; i++) {
        if (n % i == 0){
            printf("Il numero non è primo.\n");
            return 0;
        }
    }
    printf("Il numero è primo.\n");
}