#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int somma = 0;
    // Riga di codice alternativa --> int a, b, c somma=0;

    // Stampa per l'utente
    printf("Inserisci 3 numeri: ");
    // Inserimento delle 3 variabili
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // Riga di codice alternativa --> scanf("%d %d %d", &a, &b, &c);

    // Eseguo la somma
    somma = a + b + c;

    // Stampa finale
    printf("La somma è: %d\n", somma);
}