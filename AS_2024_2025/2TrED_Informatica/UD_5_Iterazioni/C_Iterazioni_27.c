/*
Iterazione 27 (Utilizzo delle iterazioni)
Creare un programma in C che prenda in input da parte dell'utente due valori A e B,
in cui A > B > 10.
Il programma deve sommare e stampare tutti i numeri primi compresi tra A e B.
N.B. Devo stare attento a non sommare i numeri compresi tra A e B. Quindi A e B che sarà un range
deve essere letto nel modo corretto. Il range solitamente parte da un numero più piccolo e va a un numero più grande.

Successivamente il programma deve sottrarre tutti i numeri dispari compresi tra A e B.
*/

#include <stdio.h>

int main() {
    int A, B; // Variabili per i numeri
    int somma = 0; // Variabile per la somma dei numeri primi
    int i, j; // Variabili di iterazione
    int count; // Contatore per verificare se un numero è primo

    // Prendo in input i valori di A e B
    do{
        
    }while(A<= B || B <= 10); // Condizione per l'input corretto
    // NOI VOGLIAMO: A > B && B > 10
    // Quindi, quello che NON VOGLIAMO: A <= B || B <= 10

    // Sommo i numeri primi compresi tra A e B
    // Il numero A è più grande del numero B, quindi devo partire da B e andare fino ad A
    // In questo caso è facile capire da quale variabile partire, in quanto A è più grande di B
    // e questo è già definito dal testo
    for (i = B; i <= A; i++) {
        count = 0; // Resetto il contatore dei divisori
        for (j = 1; j <= i; j++) { // Per verificare se il numero i numero è primo
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) { // Se il numero è primo
            somma = somma + i; // Alternativa : somma += i;
        }
    }

    // Sottraggo i numeri dispari compresi tra A e B
    // Il numero A è più grande del numero B, quindi devo partire da B e andare fino ad A
    for (i = B; i <= A; i++) {
        if (i % 2 != 0) { // Se il numero è dispari
            somma = somma - i; // Alternativa : somma -= i;
        }
    }

    // Stampa dei risultati finali
    printf("La somma dopo tutte le operazioni è: %d\n", somma);
}