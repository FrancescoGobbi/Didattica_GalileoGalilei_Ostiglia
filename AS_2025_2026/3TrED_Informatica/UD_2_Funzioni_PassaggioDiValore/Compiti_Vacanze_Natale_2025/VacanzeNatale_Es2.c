/*
Crea una funzione in C che riceve in ingresso un numero intero positivo e restituisce la somma delle
sue cifre.
ESEMPIO: se il numero è 347, la funzione restituisce 14 perchè 3 + 4 + 7 = 14.
*/

#include <stdio.h>

int somma_cifre(int n);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int somma = somma_cifre(numero);
    printf("Il numero %d ha come somma delle sue cifre pari a %d .\n", numero, somma);
}

int somma_cifre(int n) {
    int somma = 0;
    while (n != 0) {
        int cifra = n % 10; // Prendo l'ultima cifra
        somma += cifra;     // Aggiungo la cifra alla somma
        n = n / 10;        // Rimuovo l'ultima cifra
    }
    return somma;
}