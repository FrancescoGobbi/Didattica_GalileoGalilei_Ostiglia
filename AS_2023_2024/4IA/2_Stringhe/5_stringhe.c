#include <stdio.h>
#include "lib.c" // Libreria con le varie funzioni

const int DIM = 20;

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
}