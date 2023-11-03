#include <stdio.h>

int main() {
    int a, b;
    int prodotto = 0;
    int i;

    do {
        printf("Inserisci due valori numerici positivi: ");
        scanf("%d%d", &a, &b);
    }while(a<=0 || b<=0); // Ciclo se ALMENO uno dei due è negativo o uguale a 0

    // Prodotto di a*b, usando la somma ripetura di
    // a che viene eseguita b volte
    for (i=1; i<=b; i++) {
        prodotto += a; // prodotto = prodotto + a;
    }
    printf("Variabile contatore alla fine del ciclo: %d\n", i); // Stampa della variabile contatore alla fine del ciclo

    printf("Il prodotto di %d * %d = %d\n", a, b, prodotto);

    
    // SOMMA DEI PRIMI n VALORI
    int n;
    int somma = 0;

    printf("Inserisci un valore n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        somma += i;
    }

    printf("La somma dei primi %d valori è: %d\n", n, somma);
}