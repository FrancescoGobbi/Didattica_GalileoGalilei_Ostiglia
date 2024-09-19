#include <stdio.h>

/**
 * @brief Incremento una variabile passata per VALORE
 * 
 * @param a 
 * @return int 
 */
int incremento(int a);

/**
 * @brief Incremento una variabile passata per RIFERIMENTO
 * 
 * @param a 
 */
void incremento2(int *a);

/***
 * Scambio due variabili passate per riferimento
*/
void swap(int *a, int *b);

int main() {
    int a = 5;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);

    a = incremento(a); // Chiamata di funzione con passaggio di valore

    printf("a = %d, b = %d\n", a, b);

    incremento2(&a); // Chiamata di funzione con passaggio di riferimento

    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b); // Chiamata di funzione con passaggio di riferimento (due riferimenti di variabili)

    printf("a = %d, b = %d\n", a, b);
}

int incremento(int a) {
    a++;
    return a; // Return per la funzione con passaggio di valore
}

void incremento2(int *a) {
    (*a)++; // Non ha return, vado a modificare direttamente il valore nella memoria del main()
}

// Funzione Swap che va a modificare i valori in memoria nel main, perché passati per riferimento
void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}