/*
Esercizio: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Funzione che prende in input un valore intero n e restituisce 1 se il numero è primo, 0 altrimenti

ESEMPIO: n = 7 --> return della funzione = 1 (perchè 7 è un numero primo)

FUNZIONE 2:
Funzione che prende in input un valore intero n e restituisce la sommatoria dei primi numeri primi tra 1 ed n compresi

ESEMPIO: n = 10 --> return della funzione = 17 (perchè 2 + 3 + 5 + 7 = 17)
*/


#include <stdio.h>

// Prototipo delle funzioni da creare
// FUNZIONE 1
int verificaNumeroPrimo(int n);

// FUNZIONE 2
int sommatoriaPrimi(int n);


int main(){
    int n;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &n);
    // Funzione numeroPrimo()
    int result = verificaNumeroPrimo(n);
    if (result) {
        printf("Il numero %d è PRIMO", n);
    }
    else {
        printf("Il numero %d NON è PRIMO", n);
    }

    int somma = sommatoriaPrimi(n);
    printf("%d\n", somma);
}

// Definizione delle funzioni da creare
// FUNZIONE 1
int verificaNumeroPrimo(int n) {
    int countDivisori = 0;
    int i;

    for (i = 1; i<= n; i++) {
        if (n % i == 0) { // i è un divisore di n
            countDivisori++; // Incremetno il contatore dei divisori per n
        }
    }
    if (countDivisori == 2) {
        return 1; // Numero PRIMO
    }
    else {
        return 0; // Numero NON PRIMO
    }
}

// FUNZIONE 2
int sommatoriaPrimi(int n) {
    //printf("Sono nella funzione sommatoriaPrimi(): n=%d\n", n);
    int somma = 0;
    int i = 1;

    for(i = 1; i<=n; i++){
    int result = verificaNumeroPrimo(i);
        if (result){
            somma += i; // somma = somma + i
        }       
    }
   
    // Restituisco il valore
    return somma;
}