#include <stdio.h>

const int DIM = 20;

void initializeString(char*, int);

void inputString(char*);

int lenghtStringRicorsiva(char*);

void printStringRicorsiva(char*);

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