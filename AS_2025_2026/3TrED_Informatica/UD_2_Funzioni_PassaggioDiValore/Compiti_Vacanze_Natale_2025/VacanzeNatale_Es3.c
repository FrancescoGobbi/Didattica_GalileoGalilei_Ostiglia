/*
Crea una funzione in C che riceve in ingresso un numero intero positivo e restituisce il numero ottenuto
invertendo l’ordine delle cifre.
ESEMPIO: se il numero è 12045, la funzione restituisce 54021.
*/

#include <stdio.h>

int inverti_cifre(int n);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int numeroInvertito = inverti_cifre(numero);
    printf("Il numero %d invertito diventa %d.\n", numero, numeroInvertito);
}

int inverti_cifre(int n) {
    int numero_invertito = 0;
    while (n != 0) {
        int cifra = n % 10; // Prendo l'ultima cifra
        numero_invertito = numero_invertito * 10 + cifra; // Aggiungo la cifra al numero invertito
        n = n / 10;        // Rimuovo l'ultima cifra
    }
    return numero_invertito;
}