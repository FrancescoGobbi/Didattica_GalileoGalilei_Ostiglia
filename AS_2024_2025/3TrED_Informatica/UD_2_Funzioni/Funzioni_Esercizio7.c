#include <stdio.h>
#include <math.h>

/**
 * @brief Funzione che prende in input un valore intero ed un puntatore ad una variaibile intera.
 * La funzione deve moltiplicare val ad a e salvare il risultato dentro val.
 * 
 * @param a 
 * @param val 
 */
void prodotto(int a, int *val);

/**
 * @brief Funzione che prende in input un valore intero e restituisce il valore assoluto del numero.
 * 
 * @param a 
 * @return int 
 */
int valoreAssoluto(int a); 

/**
 * @brief Funzione che prende in inptu due valori interi e restituisce 1
 * se a è multiplo di b, altrimenti 0
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int mutiplo(int a, int b);

/**
 * @brief Funzione che calcola l'ipotenusa nel triangolo rettangolo con cateti a ed b.
 * Il risultato andrà messo dentro la variaible puntata da c.
 * 
 * @param a 
 * @param b 
 * @param c 
 */
void ipotenusa(int a, int b, int *c);

/**
 * @brief Funzione che prende in input un numero n e stampa i primi n numeri primi.
 * Quindi se n = 5, deve stampare 2, 3, 5, 7, 11; ovvero i primi 5 numeri primi.
 * 
 * @param n 
 */
void stampaNPrimi(int n);

int main() {
    int x = 3;
    int y = 5;

    prodotto(x, &y);
}


void prodotto(int a, int *val) {
    // TO DO...
}

int valoreAssoluto(int a) {
    // TO DO...
}

int mutiplo(int a, int b) {
    // TO DO...
}

void ipotenusa(int a, int b, int *c){
    // TO DO...
}

void stampaNPrimi(int n) {
    // TO DO...
}