/* Doppie Iterazioni 13 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A e B.
I numeri devono essere compresi tra 1 e 10 per A e tra 1 e 20 per B.

Il programma deve eseguire la stampa di una figura come segue:
* * * * * *
1 2 3 4 5 6
* * * * * *
7 8 9 10 11 12

Con A = 5 e B = 6.
*/

#include <stdio.h>

int main() {
    int A, B;
    int i, j;

    // Prendo in input i dati
    do{
        printf("Inserisci un valore intero A (1-10): ");
        scanf("%d", &A);
    }while(A<1 || A>10);

    do{
        printf("Inserisci un valore intero B (1-20): ");
        scanf("%d", &B);
    }while(B<1 || B>20);

    // Stampo la figura
    int count = 1; // Contatore per i numeri
    for(i=1; i<=A; i++) {
        // Stampo la riga di asterischi
        if (i % 2 != 0) { // Riga dispari
            for(j=1; j<=B; j++) {
                printf("*  ");
            }
        }
        if (i % 2 == 0) { // Riga pari
            // Stampo la riga di numeri
            for(j=1; j<=B; j++) {
                printf("%2d ", count);
                count++;
            }
        }
        printf("\n");
    }
}