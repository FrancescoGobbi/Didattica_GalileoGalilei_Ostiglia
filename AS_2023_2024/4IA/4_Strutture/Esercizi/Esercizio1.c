/*
TESTO: 
Creare una struttura che possa ricreare le informazioni
di un video-gioco con nome, casa edistrice, tipo di gioco.
Il programma deve creare due giochi, chiederli in input
correttamente. Successivamente deve stampare i dati di ciascuna struttura.

N.B. Sia l'input dei dati e sia l'output devono essere
gestiti attraverso delle funzioni.
Quindi ogni funzione avrà una struttura passata per riferimento!  

*/

// Importare le librerie
#include <stdio.h>

// Definizione della struttura
typedef struct {
    char nome[30];
    char casaEdistrice[30];
    char tipoGioco[30];
} Gioco;

// Definizione delle funzioni

/**
 * @brief Funzione per l'input di un gioco
 * 
 * @param Gioco *
 * 
 */
void inputGioco(Gioco *);

/**
 * @brief Funzione per stampare un gioco
 * 
 * @param Gioco *
 * 
 */
void outputGioco(Gioco *);

// Funzione main()
int main() {
    // Creo le due strutture (alloco memoria nella creazione)
    Gioco gioco1;
    Gioco gioco2;

    // Input dei dati
    inputGioco(&gioco1);
    inputGioco(&gioco2);

    // Output dei dati
    outputGioco(&gioco1);
    outputGioco(&gioco2);

    /*
    Prova di stampa delle strutture nel main()
    printf("Il gioco è:\n");
    printf("Nome: %s\n", gioco1.nome);
    printf("Casa Edistrice: %s\n", gioco1.casaEdistrice);
    printf("Tipo di gioco: %s\n", gioco1.tipoGioco);
    printf("\n\n\n");
    printf("Il gioco è:\n");
    printf("Nome: %s\n", gioco2.nome);
    printf("Casa Edistrice: %s\n", gioco2.casaEdistrice);
    printf("Tipo di gioco: %s\n", gioco2.tipoGioco);
    */
}

// Funzioni utilizzare
void inputGioco(Gioco *g) {
    printf("\n\n");
    printf("Inserisci il nome del gioco: ");
    // N.B. l'uso di gets() è "unsafe"
    // Quindi potrebbe generare dei warning rispetto all'uso
    // in quanto "non sicura" per input estremamente lunghi
    // o errori nella ricezione del carattere di "stop", ovvero il tasto invio
    gets(g->nome);
    fflush(stdin);
    printf("Inserisci la casa edistrice del gioco: ");
    gets(g->casaEdistrice);
    fflush(stdin);
    printf("Inserisci il tipo di gioco: ");
    gets(g->tipoGioco);
    fflush(stdin);
}

void outputGioco(Gioco *g) {
    printf("\n\n");
    printf("Il gioco è:\n");
    printf("Nome: %s\n", g->nome);
    printf("Casa Edistrice: %s\n", g->casaEdistrice);
    printf("Tipo di gioco: %s\n", g->tipoGioco);
}