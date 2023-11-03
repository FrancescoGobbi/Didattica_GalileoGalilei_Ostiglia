#include <stdio.h>

/**
 * @brief Funzione che calcola il fattoriale di n
 * 
 * @param n 
 * @return int 
 */
int fatt(int n);

/**
 * @brief Funzione che restituisce il massimo 
 * tra n ed m
 * 
 * @param n 
 * @param m 
 * @return int 
 */
int max(int n, int m);

int main() {
    int n = 5, m = 6;

    int fat1 = fatt(n);
    int fat2 = fatt(m);

    int massimo = max(fat1, fat2);

    printf("Il massimo è %d\n", massimo);
}

int fatt(int n) {
    int i, fat = 1;

    for(i = n; i>0; i--) {
        fat = fat * i;
    }
    return fat;
}

int max(int n, int m) {
    if (n > m) {
        return n;
    }
    return m;
}