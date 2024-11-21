#include <stdio.h>

/**
 * @brief Funzione che prende in input un valore intero n 
 * e calcola la sommatoria dei primi n numeri interi
 * 
 * @param n 
 * @return int 
 */
int sommatoria(int n);

int main() {
    int x;
    printf("Inserisci un numero n:");
    scanf("%d", &x);
    int sum = sommatoria(x);

    printf("La sommatoria è: %d\n", sum);
}

int sommatoria(int n) {
    int somma = 0;
    int i;
    for(i = n; i>0; i--) {
        somma += i;
    }
    return somma;
}