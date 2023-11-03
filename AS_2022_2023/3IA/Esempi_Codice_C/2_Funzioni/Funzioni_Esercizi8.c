/*
Creare delle funzioni in C che eseguano questi compiti:
1) Prendere in input all'utente un carattere maiuscolo (esempio lett = 'A')
2) Trasformare il carattere in maiuscolo in minuscolo (Esempio lett = 'A' --> lett = 'a')
3) Stampare tutte le lettere dell'elafabeto da lett alla 'z'. (Chiaramente in minuscolo)

Creare anche un main() che richiami queste 3 funzioni e verificare la correttezza dell'output.
*/

#include <stdio.h>

void inputMaiuscola(char *n);

void letteraMinuscola(char *n);

void stampaAlfabeto(char *n);

int main() {
    char lett;
    inputMaiuscola(&lett);
    letteraMinuscola(&lett);
    stampaAlfabeto(&lett);
}

void inputMaiuscola(char *n) {
    do{
        printf("Inserisci una lettera: ");
        scanf("%c", &(*n));
    }while((*n)<65 || (*n)>90);
}

void letteraMinuscola(char *n) {
    (*n) = (*n) + 32;
}

void stampaAlfabeto(char *n) {
    for(*n; (*n)<='z'; (*n)++) {
        printf("%2c", *n);
    }
    printf("\n");
}