/*
Iterazione 4 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve determinare se il valore inserito è un numero primo.
Se il valore è un numero primo, il programma deve stampare "Il numero è primo."
Se il valore non è un numero primo, il programma deve stampare "Il numero non è primo."
N.B. Un numero primo è un numero maggiore di 1 che è divisibile solo per 1 e per se stesso.
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1; // Inizializzazione della variabile di controllo del ciclo
    // Alternativa: int n, i = 1;
    int count = 0;

    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Stampa i valori da 1 a N 
    while (i <= n) { // Condizione del ciclo: continua finché i è minore o uguale a n
        if (n % i == 0){
            count++; // Alternativa: count = count + 1;
        }
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }

    if (count == 2) {
        printf("Il numero è primo.\n");
    }
    else {
        printf("Il numero NON è primo.\n");
    }
}