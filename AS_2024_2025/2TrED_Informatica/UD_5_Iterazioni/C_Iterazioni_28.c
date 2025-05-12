/*
Iterazione 28 (Utilizzo delle iterazioni)
Creare un programma in C che prenda in input da parte dell'utente tre valori A, B e C.
I valori devono avere le seguenti condizioni:
- A > 0
- B > A
- C > B

Il programma deve verificare se i numeri inseriti sono tutti numeri perfetti.
Se sono tutti numeri perfetti, il programma deve stampare "Tutti i numeri sono perfetti."
Se non sono tutti numeri perfetti, il programma deve stampare "Non tutti i numeri sono perfetti."

Definizione: Un numero perfetto è un numero intero positivo che è uguale alla somma dei suoi divisori propri,
escluso se stesso.

ESEMPIO:
Se l'utente inserisce 6, 28 e 496, il programma deve stampare "Tutti i numeri sono perfetti."
*/

#include <stdio.h>

int main() {
    int A, B, C; // Variabili per i numeri
    int i; // Variabile di iterazione
    int sommaA = 0, sommaB = 0, sommaC = 0; // Variabili per la somma dei divisori

    // Prendo in input i valori di A, B e C in ordine crescente
    do {
        printf("Inserisci il valore di A (maggiore di 0): ");
        scanf("%d", &A);
        printf("Inserisci il valore di B (maggiore di A): ");
        scanf("%d", &B);
        printf("Inserisci il valore di C (maggiore di B): ");
        scanf("%d", &C);
    } while (A <= 0 || B <= A || C <= B); // Condizione per l'input corretto
    // NOI VOGLIAMO: A>0 && B>A && C>B
    // Quindi NON VOGLIAMO: A<=0 || B<=A || C<=B

    // Calcolo la somma dei divisori propri per A
    for (i = 1; i < A; i++) {
        if (A % i == 0) {
            sommaA += i;
        }
    }

    // Calcolo la somma dei divisori propri per B
    for (i = 1; i < B; i++) {
        if (B % i == 0) {
            sommaB += i;
        }
    }

    // Calcolo la somma dei divisori propri per C
    for (i = 1; i < C; i++) {
        if (C % i == 0) {
            sommaC += i;
        }
    }

    // Verifico se sono tutti numeri perfetti
    if (sommaA == A && sommaB == B && sommaC == C) {
        printf("Tutti i numeri sono perfetti.\n");
    } else {
        printf("Non tutti i numeri sono perfetti.\n");
    }
}