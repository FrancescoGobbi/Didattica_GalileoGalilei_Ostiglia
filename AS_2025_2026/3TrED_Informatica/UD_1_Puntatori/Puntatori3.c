/* Puntatori 3
Esercizio per verificare lo scambio di valori tra due variabili utilizzando le variabili stesse ed utilizzando i puntatori.

ESEMPIO: se x = 5 e y = 6
Risultato: x = 6 e y = 5
*/

#include <stdio.h>

int main() {
    int x = 5, y = 6;
    int tmp; // Variabile TEMPORANEA, utilizzata per lo scambio

    printf("PRIMA DELLO SCAMBIO\n");
    printf("Il valore di x é: %d\n", x);
    printf("Il valore di y é: %d\n", y);

    // SCAMBIO DEI VALORI TRA DUE VARIABILI 
    tmp = x; // Salvo il valore di x dentro tmp, per ricordarmi il valore
    x = y; // Salvo, quindi sovrascrivo, il valore di y dentro la variabile x
    y = tmp; // Salvo infine, quindi sovrascrivo, il valore di tmp (ovvero di x) dentro la variabile x

    printf("\n\nDOPO LO SCAMBIO\n");
    printf("Il valore di x é: %d\n", x);
    printf("Il valore di y é: %d\n", y);

    // SCAMBIO DEI VALORI TRA DUE VARIABILI UTILIZZANDO I PUNTATORI
    // Riporto le variabili ai valori iniziali
    x = 5;
    y = 6;
    int *a = &x;
    int *b = &y;

    printf("\n\nPRIMA DELLO SCAMBIO\n");
    printf("Il valore di x é: %d\n", *a);
    printf("Il valore di y é: %d\n", *b);

    tmp = *a; // Salvo nella variabile temporanea il valore puntato dal puntatore a, ovvero x (*a --> x)
    *a = *b; // Sovrascrivo nella variabile puntata dal puntatore a, ovvero la variabile x,
    // il valore puntato dalla variabile puntatore b, ovvero la variabile y.
    *b = tmp; // Sovrascrivo dentro la variabile puntata dal puntatore b, ovvero y, il valore contenuto in tmp

    printf("\n\nDOPO LO SCAMBIO\n");
    printf("Il valore di x é: %d\n", *a);
    printf("Il valore di y é: %d\n", *b);
}