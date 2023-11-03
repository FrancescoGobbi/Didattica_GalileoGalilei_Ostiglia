#include <stdio.h>
#include "lib.c" // Libreria con le varie funzioni

const int DIM = 20;

void uppercaseString(char*);

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
}

void uppercaseString(char *str) {
    while(*str !='\0') {
        if(*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        } 
        str++; // Sposto il puntatore alla cella successiva
    }
}