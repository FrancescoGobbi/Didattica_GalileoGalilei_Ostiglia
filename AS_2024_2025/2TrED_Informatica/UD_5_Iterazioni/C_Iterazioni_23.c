/*
Iterazione 23 (Utilizzo del do-while)
Creare un programma in C che prenda in input 3 numeri (A, B e C).
Questi numeri devono essere presi in input in ordine crescente, quindi A < B < C.
Il programma deve stampare e verificare se i numeri inseriti sono tutti numeri perfetti.
Se sono tutti numeri perfetti, il programma deve stampare "Tutti i numeri sono perfetti."
Se non sono tutti numeri perfetti, il programma deve stampare "Non tutti i numeri sono perfetti."

Un numero perfetto è un numero intero positivo che è uguale alla somma dei suoi divisori propri 
positivi (escluso se stesso).

ESEMPIO: 
Se l'utente inserisce 6, 28 e 496, il programma deve stampare "Tutti i numeri sono perfetti."
Se l'utente inserisce 6, 28 e 12, il programma deve stampare "Non tutti i numeri sono perfetti."
Se l'utente inserisce 12, 6 e 28, il programma deve stampare "Non tutti i numeri sono perfetti."
Se l'utente inserisce 6, 28 e 496, il programma deve stampare "Tutti i numeri sono perfetti."

6 è un numero perfetto, in quanto i suoi divisori sono 1, 2 e 3, e 1+2+3=6.
28 è un numero perfetto, in quanto i suoi divisori sono 1, 2, 4, 7 e 14, e 1+2+4+7+14=28.
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