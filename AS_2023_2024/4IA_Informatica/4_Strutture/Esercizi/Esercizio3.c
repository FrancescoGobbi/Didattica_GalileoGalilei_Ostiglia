#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Libro'
typedef struct{
    char titolo[40];
    char autore[40];
    char genere[40];
    int annoPubblicazione;
    float prezzo;
    int numeroPagine;
}Libro;

/**
 * @brief Richiesta in input dei campi della struttura
 * e salvataggio dei dati nella struttura stessa
 * 
 * @param Libro *
 * 
 */
void inputLibro(Libro *);

/**
 * @brief Funzione che dato un valore dello sconto
 * applica lo sconto al prezzo del libro, ritornando il valore
 * 
 * @param Libro * // Struttura puntata
 * @param int // sconto applicato
 * 
 * @return float 
 */
float prezzoScontato(Libro *, int);

/**
 * @brief Funzione che ricerca il genere del libro scelto
 * 
 */
void ricercaLibriGenere(Libro *, char *);

int main() {
    Libro *l1;
    l1 = malloc(sizeof(Libro));
}