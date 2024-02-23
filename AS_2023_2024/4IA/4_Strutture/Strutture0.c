#include <stdio.h>
#include <string.h>

// DEFINIZIONE di una struttura 'Persona'. 
//'Persona' è un nuovo tipo di struttura definita nel programma
// Ogni struttura è composta da campi, quindi parametri eterogenei (a volte anche omogeni) tra loro
struct Persona {
    char nome[50]; // Stringa o vettore di char
    int eta; // Intero
    float altezza; // Float
}; // Il ';' è essenziale alla fine della creazione della struttura

int main() {
    // DICHIARAZIONE di una variabile di tipo 'Persona'
    // persona1 e persona2 sono due variabili struttura di tipo 'Persona'
    struct Persona persona1;
    struct Persona persona2;

    // Accedere ad un campo della struttura
    // "NomeVariabileStruttura"."NomeDelCampoDellaStruttura"
    // Il '.' serve quindi per accedere ad un particolare campo della struttura

    // Assegnazione di valori ai membri della struttura
    // Funzione strcpy: funzione della libreria <string.h>
    // Funzione che copia la stringa, come secondo parametro, all'interno del primo parametro
    strcpy(persona1.nome, "Mario"); 
    persona1.eta = 30; // Assegnazione del campo età
    persona1.altezza = 1.75; // Assegnazione del campo altezza

    // Stampa dei valori dei membri della struttura persona1
    printf("Nome: %s\n", persona1.nome);
    printf("Età: %d\n", persona1.eta);
    printf("Altezza: %.2f\n", persona1.altezza);

    printf("\n\n\n");

    // Prendo dei parametri da input da inserire nella struttura
    printf("Inserisci un nome della persona: ");
    scanf("%s", persona2.nome); // N.B. persona2.nome è quindi un puntatore al vettore di char della struttura
    
    printf("Inserisci l'età della persona: ");
    scanf("%d", &persona2.eta);

    printf("Inserisci l'altezza della persona: ");
    scanf("%f", &persona2.altezza);

    // Stampa dei valori dei membri della struttura persona2
    printf("Nome: %s\n", persona2.nome);
    printf("Età: %d\n", persona2.eta);
    printf("Altezza: %.2f\n", persona2.altezza);
}
