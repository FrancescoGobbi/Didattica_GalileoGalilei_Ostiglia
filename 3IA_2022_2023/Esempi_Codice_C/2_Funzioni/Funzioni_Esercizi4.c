#include <stdio.h>
#include <limits.h>

/**
 * @brief Funzione che richiede in input n valori e 
 * restituisce il numero di valori che sia maggiore di
 * m tra quelli inseriti
 * 
 * @param n
 * @param m
 * 
 * @return int 
 */
int contaMaggiori(int n, int m);

/**
 * @brief Funzione che cambia il contenuto di due
 * varaibili in main passate per riferimento
 * 
 * @param n 
 * @param m 
 */
void swap(int *n, int *m);

/**
 * @brief Funzione che restituisce il massimo tra
 * n valori inseriti da utente e imposta la media di 
 * tali valori
 * 
 * @param n 
 * @param m 
 * @return int 
 */
int massimo(int n, float *m);

int main() {
    int a = 5, b = 10;
    float media = 0;
    int max = 0;

    int n = contaMaggiori(a, b);
    
    printf("Il numero di valori maggiori di %d è %d\n", b, n);

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    max = massimo(5, &media);
    printf("Il massimo tra i valori inseriti è: %d\n", max);
    printf("La media dei valori inseriti è: %f\n", media);
}

int contaMaggiori(int n, int m) {
    int count = 0;
    int i;
    int val;

    for(i=0; i<n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &val);
        if(val>m){
            count++;
        }
    }
    return count;
}

void swap(int *n, int *m) {
    int tmp;
    tmp = *n;
    *n = *m;
    *m = tmp;
}

int massimo(int n, float *m) {
    int i; 
    int val;
    int max = INT_MIN; // Inizializzo al valore minimo

    for(i = 0; i<n; i++) {
        printf("Inserisci un valore intero: ");
        scanf("%d", &val);
        if (val > max) {
            max = val;
        }
        *m += val; // Aggiungo/sommo direttamente il 
        // valore inserito alla variabbile media 
        // nel main()
    }
    *m = *m / n;
    return max;
}