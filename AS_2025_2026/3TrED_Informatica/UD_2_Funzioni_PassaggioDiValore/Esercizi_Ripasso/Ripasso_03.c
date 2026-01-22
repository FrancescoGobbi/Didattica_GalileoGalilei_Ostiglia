#include <stdio.h>

/*
Crea una funzione in C che riceve in ingresso un numero intero positivo n.
La funzione deve richiedere in input all'utente n-numeri interi positivi.
La funzione deve restituire la differenza tra il massimo ed il minimo tra i numeri inseriti.

ESEMPIO: se n = 5 e i numeri inseriti sono: 12, 7, 9, 20, 15
il massimo è 20, il minimo è 7, la funzione restituisce 13 (20 - 7 = 13).

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
    int count = 0;
    int start = (n < m) ? n : m; // Trova il più piccolo tra n e m
    int end = (n > m) ? n : m;   // Trova il più grande tra n e m
    int i;

    for (i = start; i <= end; i++) {
        if (i % 2 != 0) { // Controlla se il numero è dispari
            // Calcola il fattoriale di i
            int fattoriale = 1;
            for (int j = 1; j <= i; j++) {
                fattoriale *= j;
            }

            // Controlla se il fattoriale è compreso tra 1000 e 10000
            if (fattoriale >= 1000 && fattoriale <= 10000) {
                count++;
            }
        }
    }

    return count;
}