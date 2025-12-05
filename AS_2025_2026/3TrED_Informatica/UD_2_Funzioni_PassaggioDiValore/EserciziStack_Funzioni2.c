/*
Esercizi da interpretare per la crezione dello stack di evoluzione di un programma in C.
Esercizi da svolgere come da spigazione a lezione. Vedi materiale di teoria.
*/

#include <stdio.h>

int funzione1(int n);

int funzione2(int a, int b);

int main() {
    int n, a, b;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &n);
    int risultato1 = funzione1(n);
    printf("Il risultato della funzione 1 è: %d\n", risultato1);

    printf("Inserisci due numeri interi a e b: ");
    scanf("%d %d", &a, &b);
    int risultato2 = funzione2(a, b);
    printf("Il risultato della funzione 2 è: %d\n", risultato2);
}   

int funzione1(int n) {
    // Implementazione della funzione 1
    int risultato = n * n;
    return risultato;
}

int funzione2(int a, int b) {
    // Implementazione della funzione 2
    int risultato = a + b;
    return risultato;
}