/*
Iterazione 20 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il valore deve essere compreso tra 1 e 20.

Il programma deve eseguire e stampare la media degli A-valori inseriti dall'utente.
Quindi dovrò chiedere in input A-valori, quindi tanti quanti il valore di A. Dovrò fare la media
tra tutti questi.
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