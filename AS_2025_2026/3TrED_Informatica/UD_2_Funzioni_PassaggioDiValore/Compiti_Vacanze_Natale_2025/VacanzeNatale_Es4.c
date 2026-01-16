/*
Crea una funzione in C che riceve in ingresso un numero intero positivo e restituisce la cifra più grande
contenuta nel numero.
ESEMPIO: se il numero è 73926, la funzione restituisce 9.
*/

#include <stdio.h>

int cifra_massima(int n);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int cifraMassima = cifra_massima(numero);
    printf("Il numero %d ha %d come cifra massima.\n", numero, cifraMassima);
}

int cifra_massima(int n) {
    int max_cifra = 0;
    while (n != 0) {
        int cifra = n % 10; // Prendo l'ultima cifra
        if (cifra > max_cifra) {
            max_cifra = cifra; // Aggiorno la cifra massima se necessario
        }
        n = n / 10;        // Rimuovo l'ultima cifra
    }
    return max_cifra;
}