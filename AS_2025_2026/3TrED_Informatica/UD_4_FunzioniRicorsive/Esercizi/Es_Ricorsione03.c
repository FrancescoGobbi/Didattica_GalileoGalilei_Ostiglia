#include <stdio.h>

/*
Creare una funzione in C che prenda in input un numero intero n.
La funzione deve sommare e restituire la somma di tutte le cifre di n.
La funzione deve essere ricorsiva.

ESEMPIO: se n = 1234, la funzione deve restituire 10, in quanto 1 + 2 + 3 + 4 = 10.
*/
int sommaCifre(int n);

int main() {
    int numero;
    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("\n\n\nEsercizio della SOMMA delle cifre\n");
    int somma = sommaCifre(numero);
    printf("La somma delle cifre di %d è: %d\n", numero, somma);
}

int sommaCifre(int n) {
    // Caso base: se n è minore di 10, allora è composto da una sola cifra e la somma è quella cifra stessa
    if (n < 10) { //Oppure if(n<=9)
        return n;
    }
    else { // Caso ricorsivo
        // Prendiamo l'ultima cifra di n usando l'operatore modulo e la sommiamo alla somma delle cifre del numero senza l'ultima cifra (n diviso 10)
        return (n % 10) + sommaCifre(n / 10);
    }
}