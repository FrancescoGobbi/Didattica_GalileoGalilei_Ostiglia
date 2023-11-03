#include <stdio.h>
#include "lib.c" // Libreria con le varie funzioni

const int DIM = 20;

int countVowelsString(char *str);

int main() {
    char str[DIM];

    initializeString(str, DIM);
    inputString(str);
    printf("%s\n", str);

    int lenght = lenghtStringRicorsiva(str);
    printf("La lunghezza della stringa è: %d\n", lenght);

    printf("La stringa è: ");
    printStringRicorsiva(str);
    printf("\n");

    printf("La stringa in maiuscolo è: ");
    uppercaseString(str);
    printStringRicorsiva(str);
    printf("\n");

    printf("Le vocali nella stringa sono: %d\n", countVowelsString(str));
}

int countVowelsString(char *str) {
    int count = 0;
    while(*str != '\0') {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        } 
        str++; // Sposto il puntatore alla cella successiva
    }
    return count;
}