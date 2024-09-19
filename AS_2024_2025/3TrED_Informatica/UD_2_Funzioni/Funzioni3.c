#include <stdio.h>

/**
 * @brief Funzione per lo scambio di due variaibli
 * Funzione con passaggio di riferimenti
 * 
 * @param *a 
 * @param *b 
 */
void swap(int *a, int *b);

int main() {
    int a = 5;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b); // Chiamata di funzione con passaggio di riferimento (due riferimenti di variabili)

    printf("a = %d, b = %d\n", a, b);
}

// Funzione Swap che va a modificare i valori in memoria nel main, perché passati per riferimento
void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}