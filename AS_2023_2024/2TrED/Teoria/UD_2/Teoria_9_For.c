#include <stdio.h>

// Chiedere in input 3 valori e farne il prodotto
// ARGOMENTO: For (Iterazioni)

int main() {
    // Salvo in n il valore che ogni volta l'utente mi inserirà in input
    // Poi eseguirò il prodotto nella variaible prodotto
    int n, prodotto = 1, i;

    // Iterazione per chiedere in input i 3 valori
    //for (inizializzazione della variabile contatore; controlllo della variabile contatore; incremento/decremento della variabile contatore){
    //    ...istruzioni nel cilo for
    //}
    for(i = 1; i <= 3; i++) {
        printf("Inserisci un valore: ");
        scanf("%d", &n); // Salvo in n il valore che ogni volta l'utente mi inserirà in input

        prodotto = prodotto * n; // prodotto *= n;
    }

    printf("Il prodotto dei valori inseriti è: %d\n", prodotto);
}