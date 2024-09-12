#include <stdio.h>

int contaCaratteriDiversi(char *str, char *sub);

int main() {
    // Esempio di utilizzo della funzione
    char *stringaPrincipale = "GalilEOgalilei";
    char *stringaSottostringa = "classe";

    int risultato = contaCaratteriDiversi(stringaPrincipale, stringaSottostringa);

    printf("Il numero di caratteri diversi è: %d\n", risultato);

    return 0;
}

int contaCaratteriDiversi(char *str, char *sub) {
    int caratteriVisti[256] = {0};

    int contatore = 0;
    
    int i = 0;

    while (sub[i] != '\0') {
        caratteriVisti[(int)(sub[i])] = 1;
        i++;
    }

    i = 0;

    while (str[i] != '\0') {
        if (caratteriVisti[(int)(str[i])] == 0) {
            contatore++;
        }
        i++;
    }

    return contatore;
}