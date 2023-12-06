#include <stdio.h>
#include <string.h>

void funzione(char *stringa, int inizio, int fine) {
    // Caso base
    if (inizio >= fine) {
        return;
    }

    char temp = stringa[inizio];
    stringa[inizio] = stringa[fine];
    stringa[fine] = temp;

    // Caso ricorsivo
    funzione(stringa, inizio + 1, fine - 1);
}

int main() {
    char stringa[] = "Ciao";

    // Funzione di libreria per la lunghezza della stringa
    int lunghezzaStringa = strlen(stringa);

    printf("Stringa prima della funzione: %s\n", stringa);

    // Chiamata della funzione
    funzione(stringa, 0, lunghezzaStringa - 1);

    printf("Stringa dopo la funzione: %s\n", stringa);
}

