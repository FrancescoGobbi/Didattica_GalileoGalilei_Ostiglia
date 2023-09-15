#include <stdio.h>

// Esercizio con l'uso del while
// while = ciclo/iterazione con controllo in testa

int main() {
    int a, b;
    int prodotto = 0;
    int i;

    printf("Inserisci due valori numerici: ");
    scanf("%d%d", &a, &b);

    printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    i = b;
    printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    // Prodotto a * b
    while( i > 0) {
        prodotto = prodotto + a; // prodotto += a;
        i--; // Decremento la variabile val, che ha il valore di b
        printf(" a=%d b=%d i=%d prodotto=%d\n", a, b,i, prodotto);
    }
    
    printf("Il prodotto di %d * %d = %d\n", a, b, prodotto);


    // Somma dei primi n numeri
    int n;
    int somma = 0;

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    while(n>0) {
        somma = somma + n;
        n--;
    }
    printf("La somma è %d\n", somma);


    // FATTORIALE DI UN NUMERO

    n = 0;
    int fattoriale = 1; 
    i = 1;

    printf("Inserisci un valore n: ");
    scanf("%d", &n);
    fflush(stdin);

    while(i <= n) {
        fattoriale = fattoriale * i;
        i++;
    }

    printf("Il fattoriale di %d è %d\n",n,fattoriale);
}