#include <stdio.h>
#include <string.h>

// Funzione che prende in input il puntatore di una stringa
void funzione(char *stringa) {
    if (*stringa == '\0') {
        return;
    }

    if (*stringa >= 'a' && *stringa <= 'z') {
        *stringa = *stringa - ('a' - 'A');
    }

    funzione(stringa + 1);
}


int main() {
    char stringa[100];


    printf("Inserisci una stringa: ");
    fgets(stringa, 100, stdin);

    // Rimuovi il newline inserito da fgets
    if (strlen(stringa) > 0 && stringa[strlen(stringa) - 1] == '\n') {
        stringa[strlen(stringa) - 1] = '\0';
    }

    // Esegui la modifica
    funzione(stringa);

    printf("Stringa modificata: %s\n", stringa);

    return 0;
}
