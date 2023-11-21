#include <stdio.h>

const int dim = 50;

void initializeString(char[], int);

// Funzione da implementare
/* Funzione che prende in input un puntatore
di una stringa. La funzione richiede in input
una stringa e accoda alla stringa già presente
la stringa appena presa in input dall'utente.

ESEMPIO: str = "ciao"
Richiedo in input una stringa, es "Carlo"
Quindi l'output devrà essere "ciaoCarlo"
*/
void addString(char *);


// Funzione da implementare
/* Funzione che prende in input una stringa ed
una sotto-stringa.
La funzione deve tornare l'indice di inizio della
sotto-stringa.

ESEMPIO: str = "Pallacanestro"
sub = "canestro"
Quindi l'output devrà essere 5, in quanto nella
cella 5 inizia la sotto-stringa.
*/
int findSubstring(char *, char *);

int main() {
    char str[50];

    initializeString(str, dim);
}

void initializeString(char str[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        str[i] = '\0';
    }
}

void addString(char *) {
    // TO DO
}

int findSubstring(char *str, char *sub) {
    // TO DO
}