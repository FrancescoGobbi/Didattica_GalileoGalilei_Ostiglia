#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Funzione che stampa i numeri 
 * primi di un numero
 * 
 * @return int 
 */
void fatPrimo(int n);

/**
 * @brief Funzione che genera un numero random
 * tra n ed m compresi
 * 
 * @param n 
 * @param m 
 * @return int 
 */
int casuale(int n, int m);

int main() {
    int n;
    printf("Inserisci un valore: ");
    scanf("%d", &n);

    fatPrimo(n);

    // Creo un numero casuale
    srand(time(NULL));

    n = 500;
    int m = 1000;
    int i;
    for(i = 0; i<100; i++) {
        int val = casuale(n,m);
        printf("%d\n", val);
    }
}

void fatPrimo(int n) {
    int primo = 2;
    while(n!=1) {
        while(n%primo==0) {
            printf("%d ", primo);
            n = n/primo;
        }
        primo++;
    }
    printf("\n");
}

int casuale(int n, int m) {
    int r;
    r = rand()%(m-n+1) + n;
    return r;
}