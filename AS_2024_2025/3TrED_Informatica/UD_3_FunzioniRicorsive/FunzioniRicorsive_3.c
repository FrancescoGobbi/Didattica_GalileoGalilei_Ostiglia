#include <stdio.h>

/*
Creare una funzione ricoriva in C che prenda in input
un numero intero n.
La funzione deve contare e restituire il numero dei
divisori della variabile n.

ESEMPIO: se n = 6, deve restituire 4 in quanto ci sono
4 possibili divisori di 6 (1, 2, 3 e 6).
*/
int contaDivisoriN(int n, int i);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    int count = contaDivisoriN(numero, numero);
}

