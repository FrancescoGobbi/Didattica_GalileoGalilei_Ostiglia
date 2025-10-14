/* Doppie Iterazioni 9 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il numero deve essere compreso tra 1 e 20.

Il programma deve stampare i primi A-numeri primi.

ESEMPIO:
Se l'utente inserisce A=3, il programma deve stampare:
2 3 5

Se l'utente inserisce A=5, il programma deve stampare:
2  3  5  7 11

Se l'utente inserisce A=10, il programma deve stampare:
 2  3  5  7 11 13 17 19 23 29 
*/

#include <stdio.h>

int main() {
    int A; // Variabile per il numero di numeri primi da stampare
    int count = 0; // Contatore di numeri primi trovati
    int num = 2; // Numero corrente da testare se è primo (chiaramente parte da 2, il primo numero primo)

    // Prendo in input il valore di A compreso tra 1 e 20
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 20): ");
        scanf("%d", &A);
    } while (A < 1 || A > 20); // NOI VOGLIAMO: 1 <= A <= 20

    printf("I primi %d numeri primi sono:\n", A);

    // Trova e stampa i primi A numeri primi
    while (count < A) {
        int is_prime = 1; // Flag per indicare se num è primo

        // Controlla se num è primo
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // num non è primo
                break;
            }
        }

        if (is_prime) {
            printf("%2d ", num); // Stampa il numero primo con larghezza di 2 caratteri
            count++; // Incrementa il contatore di numeri primi trovati
        }

        num++; // Passa al numero successivo
    } // Fine del while principale

    printf("\n"); // Vado a capo dopo la stampa dei numeri primi
}