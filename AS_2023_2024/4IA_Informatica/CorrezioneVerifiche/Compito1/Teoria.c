#include <stdio.h>
/*
@brief La funzione esegue la somma di tre
numeri interi, passati come valore,
e la restituisce
*/
int somma(int a, int b, int c);
int main() {
    int a = 5, // Manca il ;
    int b = 6;
    int c;
    int i;
    print("Inserisci un valore intero: "); // printf
    scanf("%d"); // Manca la variaibile in cui viene salvato il dato

    valore = somma(a,c); // Manca la dichiarazione di somma + alla funzione manca il terzo parametro da passare come valore
    printf("Il numero è ", valore);
    // Ciclo che stampa c-volte il
    // messaggio "Ciao!\n"
    for(i=c; i>=c; i++) { // La condizione di stop del ciclo è sbagliata
        printf("Ciao!\n");
    }
}
// La definizione della funzione è sbagliata, manca un terzo parametro
float somma(int a, int b) {
    int val = a + b; // Manca il terzo parametro alla somma + deve essere di tipo float la variabile val
    return val;
}
