/*
Crea una funzione in C che riceve in ingresso un numero intero positivo e restituisce 1 se il numero è
palindromo, 0 altrimenti. (Un numero è palindromo se letto da sinistra a destra è uguale a quello
letto da destra a sinistra.)
ESEMPIO: 1221 è palindromo → la funzione restituisce 1, 
ESEMPIO: 345 non è palindromo → la funzione restituisce 0.
*/

#include <stdio.h>

int inverti_cifre(int n);
int palindromo(int n);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int cifraMassima = cifra_massima(numero);
    printf("Il numero %d ha %d come cifra massima.\n", numero, cifraMassima);
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

int palindromo(int n) {
    // n è il numero originale
    // numero_invertito è il numero con le cifre invertite, utilizzando la funzione già definita
    int numero_invertito = inverti_cifre(n);

    if (n == numero_invertito) { // Confronto il numero originale con quello invertito
        return 1; // Il numero è palindromo
    } 
    else {
        return 0; // Il numero non è palindromo
    }
}