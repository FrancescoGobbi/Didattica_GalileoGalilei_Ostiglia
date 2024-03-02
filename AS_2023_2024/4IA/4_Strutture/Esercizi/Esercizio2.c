/*
TESTO: 
Creare le seguenti funzioni:
1) Funzione che prende in input il nome di un file .dat(binari) e crei uno Studente
con i dati presi in input dall'utente. Infine salvi i dati nel file
2) Funzione che prende in input il nome di un file .dat(binario) e stamapre tutte le strutture presenti nel file
3) Funzione che prende in input il nome di un file .dat(binario), calcoli la media per ogni singolo Studente e la stampi
4) Funzione che prende in input il nome di un file .dat(finario), chieda in input il nome di uno Studente e stampare
tutti i voti e la media del singolo studente. Se lo studente non è presente segnare un messaggio di errore.
5) Costruire il main() che richiami le funioni
*/


// Importare le librerie
#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura
typedef struct {
    char nome[30];
    char cognome[30];
    int matematica;
    int storia;
    int italiano;
    int informatica;
} Studente;


int main() {

}