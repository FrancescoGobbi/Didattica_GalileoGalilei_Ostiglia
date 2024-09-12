#include <stdio.h>
#include "lib.h"

void initializeString(char *str, int dim) {
    int i;
    for(i=0; i<dim; i++) {
        *(str) = '\0';
        str++; // Sposto il puntatore alla cella successiva
    }
}

void inputString(char *str) {
    printf("Inserisci una stringa: ");
    scanf("%s", str);
}

int lenghtStringRicorsiva(char *str) {
    if(*str == '\0') {
        return 0;
    }
    else {
        return 1 + lenghtStringRicorsiva(str+1);
    }
}

void printStringRicorsiva(char *str) {
    if(*str == '\0') {
        return;
    }
    else{
        printf("%c", *str);
        printStringRicorsiva(str+1);
    }
    // Alternativa 
    /*
    if(*str != '\0') {
        printf("%c", *str);
        printStringRicorsiva(str+1);
    }
    */
}

void uppercaseString(char *str) {
    while(*str !='\0') {
        if(*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        } 
        str++; // Sposto il puntatore alla cella successiva
    }
}