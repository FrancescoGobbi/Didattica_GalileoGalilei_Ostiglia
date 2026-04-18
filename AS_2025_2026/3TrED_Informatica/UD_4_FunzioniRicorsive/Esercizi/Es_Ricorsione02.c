#include <stdio.h>

/*
Crea una funzione in C che prende in input un numero intero n e restituisce
il numero di cifre che compongono quel numero. La funzione deve essere ricorsiva.

ESEMPIO: se n = 1234, la funzione deve restituire 4, il numero è composto da quattro cifre.
*/
int contaCifreNumero(int n);

int main() {
    int numero;
    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("\n\n\nEsercizio della CONTA delle cifre\n");
    int cifre = contaCifreNumero(numero);
    printf("Il numero %d è composto da %d cifre.\n", numero, cifre);
}

int contaCifreNumero(int n){
    // TO DO...
}