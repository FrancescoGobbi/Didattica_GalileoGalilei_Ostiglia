#include <stdio.h>

/*
Crea una funzione in C che riceve in ingresso un numero intero positivo n ed un intero positivo m.
La funzione deve contare tutti i numeri compresi tra il più piccolo e il più grande tra n ed m (estremi inclusi)
che rispettino le seguenti condizioni:
- siano dispari
- il loro fattoriale sia compreso tra 1000 e 10000.

ESEMPIO: se n = 4 e m = 10, i numeri che rispettano le condizioni sono:
5 (5! = 120), 7 (7! = 5040),
mentre il 9 (9! = 362880) non rispetta queste condizione.
Totale numeri che rispettano le condizioni = 2.

*/
int conta_numeri(int n, int m);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int coppie = coppie_coprime(numero);
    printf("Il numero %d ha %d coppie coprime.\n", numero, coppie);
}

int conta_numeri(int n, int m) {
    // TO DO...
}