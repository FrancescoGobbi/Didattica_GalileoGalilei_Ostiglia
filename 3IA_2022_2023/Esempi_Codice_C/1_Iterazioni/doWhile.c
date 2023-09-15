#include <stdio.h>

int main() {
    int a, b;
    int prodotto = 0;
    int i;

    printf("Inserisci due valori numerici: ");
    scanf("%d%d", &a, &b);

    i = b;
    printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    // Prodotto a * b
    do {
        prodotto = prodotto + a; // prodotto += a;
        i--; // Decremento la variabile val, che ha il valore di b
        printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    }while(i>0);

    printf("Il prodotto di %d * %d = %d\n", a, b, prodotto);
    
    // Codice in cui si forza che gli input siano positivi
    
    do {
        printf("Inserisci due valori numerici positivi: ");
        scanf("%d%d", &a, &b);
    }while(a<=0 || b<=0); // Ciclo se ALMENO uno dei due è negativo o uguale a 0
    
    i = b;
    prodotto = 0; // Azzero il prodotto
    printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    // Prodotto a * b
    do {
        prodotto = prodotto + a; // prodotto += a;
        i--; // Decremento la variabile val, che ha il valore di b
        printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    }while(i>0);

    printf("Il prodotto di %d * %d = %d\n", a, b, prodotto);
}