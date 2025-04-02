/* ESERCIZIO 3 (3 punti) 
Creare un programma in C che prenda in input due numeri interi A e B, da parte dell’utente.
Il programma deve eseguire e stampare la media dei soli valori dispari tra i numeri compresi
tra A e B, estremi compresi.

ESEMPIO: Se A = 10 e B = 14, il risultato finale dovr`a essere 12.00 , in quanto (11+13)/ 2 da come
risultato 12.00 .
*/

#include <stdio.h>

int main() {
    int A, B, i;
    int somma = 0;
    int count = 0;

    printf("Inserisci due numeri interi A e B: ");
    scanf("%d %d", &A, &B);

    // Controllo non necessario, ma utile per garantire che A e B siano in ordine crescente
    // Se A è maggiore di B, i valori vengono scambiati per garantire che A sia il limite inferiore
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // Calcolo della somma e del conteggio dei numeri dispari tra A e B
    for (i = A; i <= B; i++) {
        if (i % 2 != 0) { // Controlla se il numero è dispari
            somma += i;
            count++;
        }
    }

    // Calcolo e stampa della media
    // Se count è maggiore di 0, calcola la media
    // Altrimenti, stampa un messaggio che indica che non ci sono numeri dispari
    if (count > 0) {
        float media = (float)somma / count;
        printf("La media dei numeri dispari tra %d e %d e': %.2f\n", A, B, media);
    } else {
        printf("Non ci sono numeri dispari tra %d e %d.\n", A, B);
    }
}