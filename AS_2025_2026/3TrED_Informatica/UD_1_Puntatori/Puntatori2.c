/**
 * @file Puntatori2.c
 * @author your name 
 * @brief Progamma che mostra alcune operazioni basilari tra variabili utilizzando i puntatori
 * 
 */

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b;
    
    // Creo i putantori che puntano alle variabili create in precedenze
    int *p1 = &a; // Puntatore 1
    int *p2 = &b; // Puntatore 2
    
    // Prendo in input le variali utilizzando i puntatori da inserire nelle variaibli a e b
    printf("Inserisci un valore per a: ");
    scanf("%d", p1); // Non serve l'&, in quanto voglio assegnare un valore alla viariale a ed il contenuto
    // della variabile p1 è effettivamente l'indirizzo di memoria di a
    printf("Inserisci un valore per b: ");
    scanf("%d", p2); // Non serve l'&, in quanto voglio assegnare un valore alla variabile b ed il contenuto
    // della variabile p2 è effettivamente l'indirizzo di memoria di b

    //  Credo delle variabili per somma e differenza
    // Utilizzo i puntatori per eseguire le operazioni
    int somma = *p1 + *p2;
    int differenza = *p1 - *p2;
    int prodotto = (*p1) * (*p2);
    // N.B. é consigliato anche utilizzare le parentesi per aiutarsi nelle operazioni
    // specialmente in quelle che utilizzano gli asterischi come le moltiplicazioni
    // Oltre al fatto per aiutarsi nella scrittura delle operazioni nel codice 
    // come nelle operazioni matematiche complesse o con più operatori/variabili
    int divisione = (*p1) / (*p2);
    
    // Stampo i risultati finali
    printf("\nValore di a: %d\n", *p1); // Stampa di a utilizzando il puntatore p1
    printf("Valore di b: %d\n", *p2); // Stampa di b utilizzando il puntatore p2
    printf("Somma: %d\n", somma);
    printf("Differenza: %d\n", differenza);
    printf("Prodotto: %d\n", prodotto);
    printf("Divisione: %d\n", divisione);
}
