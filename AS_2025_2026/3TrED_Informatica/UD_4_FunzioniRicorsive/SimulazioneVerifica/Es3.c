/*
Scrivere una funzione ricorsiva in linguaggio C che prenda in input un numero intero positivo n e restituisca
la somma di tutti i numeri dispari compresi tra 1 e n.
Esempi:
• Se n = 7, la funzione deve restituire 1 + 3 + 5 + 7 = 16
• Se n = 10, la funzione deve restituire 1 + 3 + 5 + 7 + 9 = 25
N.B. Non `e consentito usare cicli (for, while, do-while) all’interno della funzione ricorsiva.

*/

#include <stdio.h>

int sommaDispari(int n);

int main() {
    int numero;
    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    printf("\n\n\nEsercizio della SOMMA dei numeri dispari tra 1 ed n\n");
    int somma = sommaDispari(numero);
    printf("La somma dei numeri dispari tra 1 e %d è: %d\n", numero, somma);
}

int sommaDispari(int n) {
    // Caso base: se n è minore di 1, non ci sono numeri dispari da sommare
    if (n < 1) {
        return 0;
    }
    else { // Caso ricorsivo
        // Se n è dispari, sommiamo n alla somma dei numeri dispari tra 1 e n-1
        if (n % 2 != 0) {
            return n + sommaDispari(n - 1); // Volendo si potrebbe fare
            // return n + sommaDispari(n - 2); per saltare direttamente al numero dispari precedente
        }
        // Se n è pari, continuiamo a sommare i numeri dispari tra 1 e n-1 senza contare n
        else {
            return 0 + sommaDispari(n - 1); // per essere più espliciti aggiungiamo 0, ma si potrebbe semplicemente scrivere return sommaDispari(n - 1);
        }
    }
}