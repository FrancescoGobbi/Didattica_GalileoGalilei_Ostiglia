/*
Iterazione 19 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente due valori interi (a e b).
Il programma deve far in modo che il valore di A sia maggiore di 1 e minore di 10.
Mentre il valore di B deve essere maggiore di A.

Il programma deve chiedere in input all'utente A-valori e contare quanti valori sono maggiori di B.
Stampare poi il risultato di tale conteggio.
*/

#include <stdio.h>

int main() {
    int A, B;
    int count = 0;
    int i; // Variabile di iterazione
    int val; // Variabile per prendere e salvvare i nuovi numeri in input

    do{
        printf("Insersci un valore per A: ");
        scanf("%d", &A);
    }while(A<=1 || A>=10); // Noi VOGLIAMO (A>1 && A<10)

    do{
        printf("Insersci un valore per B: ");
        scanf("%d", &B);
    }while(B<=A); // Noi VOGLIAMO (B>A)

    // Esecuzione con ciclo for per chiedere in input A-valori interi all'untente
    for(i = 1; i <= A; i++) {
        printf("Inserisci un numero intero: ");
        scanf("%d", &val); // Scriverò sempre i valori nella stessa variabile, quindi si sovrascrivono

        // Controllo se il numero è maggiore di B
        if (val > B) {
            count++; // Incremento il contatore
        }
    }

    // Stampa del risultato finale
    printf("Ho trovato %d numeri in input che sono maggiori di B, ovvero di %d.\n", count, B);
}