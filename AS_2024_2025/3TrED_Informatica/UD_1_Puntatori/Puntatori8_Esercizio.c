/**
 * @file Puntatori8_Esercizio.c
 * @author your name
 * @brief Crea un programma in C che, utilizzando solamente i puntatori,
 * che prenda in input due valori interi (x e y) e questo deve
 * calcolare il fattoriale del primo numero, utilizzando il puntatore anche per questo,
 * e calcolare il fattoriale del secondo numero, utilizzando sempre il puntatore anche per questo.
 * Deve confrontare il risultato dei due fattoriali e stampare
 * il valore maggiore
 * 
 * @version 0.1
 * @date 2024-10-04
 * 
 */

#include <stdio.h>

int main() {
    int i, x, y, fatx = 1, faty = 1;
    int *px = &x;
    int *py = &y;
    int *pfatx = &fatx;
    int *pfaty = &faty;

    do{
        printf("Inserisci il numero x: ");
        scanf("%d", px);
    }while(*px <= 0);

    do{
        printf("Inserisci il numero y: ");
        scanf("%d", py);
    }while(*py <= 0);

    for(i = 1; i <= *px; i++) {
        *pfatx = *pfatx * i;
    }

    for(i = 1; i <= *py; i++) {
        *pfaty = *pfaty * i;
    }

    if (*pfatx > *pfaty) {
        printf("%d\n", *pfatx);
    }
    else {
        printf("%d\n", *pfaty);
    }
}