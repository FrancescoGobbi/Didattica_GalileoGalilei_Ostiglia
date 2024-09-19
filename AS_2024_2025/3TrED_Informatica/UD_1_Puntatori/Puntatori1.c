#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b;
    
    // Creo i putantori che puntano alle variabili create in precedenze
    int *p1 = &a; // Puntatore 1
    int *p2 = &b; // Puntatore 2
    
    // Prendo in input le variali utilizzando i puntatori da inserire nelle variaibli a e b
    printf("Inserisci un valore per a: ");
    scanf("%d", p1);
    printf("Inserisci un valore per b: ");
    scanf("%d", p2);

    //  Credo delle variabili per somma e differenza
    // Utilizzo i puntatori per eseguire le operazioni
    int somma = *p1 + *p2;
    int differenza = *p1 - *p2;
    
    // Stampo i risultati finali
    printf("\nValore di a: %d\n", *p1); // Stampa di a utilizzando il puntatore p1
    printf("Valore di b: %d\n", *p2); // Stampa di b utilizzando il puntatore p2
    printf("Somma: %d\n", somma);
    printf("Differenza: %d\n", differenza);
}
