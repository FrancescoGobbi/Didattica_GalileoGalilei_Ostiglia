#include <stdio.h>

// N.B. Esercizio 4, con una modifica sostanziale!
// Chiedere in input 3 valori interni e strettamente maggiori di 0 e farne il prodotto
// ESEMPIO: i tre valori interiti sono -> 3, 4, 5 . Quindi il prodotto sarà: 3 * 4 * 5 = 60
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

        // Iterazione do-while: iterazione con controllo in coda
        // Per prendere in input un valore intero e continuare
        // a richiederelo in input finché il valore interito è minore o uguale a 0
        do{
        printf("Inserisci un valore strettamente maggiore di 0: ");
        scanf("%d", &n); // Salvo in n il valore che ogni volta l'utente mi inserirà in input
        }while(n<=0); // Condizione per far continuare il loop

        prodotto = prodotto * n; // prodotto *= n;
        i++; // i = i + 1;
    }
    printf("Il prodotto dei valori inseriti è: %d\n", prodotto);
}