/*
Crea una funzione in C che riceve in ingresso un numero intero positivo e restituisce il numero di cifre
che lo compongono.
ESEMPIO: se il numero è 5089, la funzione restituisce 4.

*/

#include <stdio.h>

int conta_cifre(int n);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int cifre = conta_cifre(numero);
    printf("Il numero %d ha %d cifre.\n", numero, cifre);
}

int conta_cifre(int n) {
    int count = 0;
    if (n == 0) {
        return 1; // Lo zero ha una cifra
    }
    
    while (n > 0) {
        n = n / 10; // Rimuovo l'ultima cifra
        count++;    // Incremento il contatore delle cifre
    }
    return count;
}