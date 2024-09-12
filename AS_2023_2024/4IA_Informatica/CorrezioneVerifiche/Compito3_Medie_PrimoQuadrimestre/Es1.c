#include <stdio.h>

// Funzione ricorsiva
int funzione(char *str, char *sub) {
    if (*str == '\0') {
        return 0;
    }

    if (*str == *sub) {
        return 1 + funzione(str + 1, sub);
    } else {
        return funzione(str + 1, sub);
    }
}

int main() {
    char stringaPrincipale[] = "abcdefghijklmnopqrstuvwxyza";
    char stringaSottostringa[] = "a";

    int risultato = funzione(stringaPrincipale, stringaSottostringa);

    printf("Il numero di caratteri diversi è: %d\n", risultato);
}

