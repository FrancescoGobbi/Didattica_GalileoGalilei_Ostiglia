#include <stdio.h>

// Chiedere in input 3 valori interi e farne il prodotto
// ESEMPIO: i tre valori interiti sono -> -3, 4, 5 . 
// Quindi il prodotto sarà: -3 * 4 * 5 = -60
// ARGOMENTO: while (iterazioni)

int main() {
    // Salvo in n il valore che ogni volta l'utente mi inserirà in input
    // Poi eseguirò il prodotto nella variaible prodotto
    int n, prodotto = 1, i = 1;

    // Iterazione per chiedere in input i 3 valori
    while(i <= 3) {
        printf("Inserisci un valore: ");
        scanf("%d", &n); // Salvo in n il valore che ogni volta l'utente mi inserirà in input

        prodotto = prodotto * n; // prodotto *= n;
        i++; // i = i + 1;
    }

    printf("Il prodotto dei valori inseriti è: %d\n", prodotto);
}