#include <stdio.h>

// Funzione che prende in input 3 stringhe tulizzando il puntatore
void funzione(char *stringa1, char *stringa2, char *risultato) {
   
    while (*stringa1 != '\0') {
        *risultato = *stringa1;
        stringa1++;
        risultato++;
    }

    while (*stringa2 != '\0') {
        *risultato = *stringa2;
        stringa2++;
        risultato++;
    }

    *risultato = '\0';
}

int main() {
    char stringa1[100], stringa2[100], risultato[200];

    printf("Inserisci la prima stringa: ");
    fgets(stringa1, sizeof(stringa1), stdin);
    // Rimuovi il newline inserito da fgets
    if (stringa1[strlen(stringa1) - 1] == '\n') {
        stringa1[strlen(stringa1) - 1] = '\0';
    }

    printf("Inserisci la seconda stringa: ");
    fgets(stringa2, sizeof(stringa2), stdin);
    // Rimuovi il newline inserito da fgets
    if (stringa2[strlen(stringa2) - 1] == '\n') {
        stringa2[strlen(stringa2) - 1] = '\0';
    }

    // Esegui la funzione e ottieni il risultato
    funzione(stringa1, stringa2, risultato);

    printf("Risultato della concatenazione: %s\n", risultato);

    return 0;
}
