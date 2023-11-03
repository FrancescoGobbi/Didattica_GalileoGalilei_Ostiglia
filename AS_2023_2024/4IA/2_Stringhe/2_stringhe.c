#include <stdio.h>

const int DIM = 20;

void initializeString(char[], int);

void inputString(char[]);

int lenghtString(char[]);

int main() {
    char str[DIM];

    initializeString(str, DIM);
    inputString(str);
    printf("%s\n", str);

    int lenght = lenghtString(str);
    printf("La lunghezza della stringa è: %d\n", lenght);
}

void initializeString(char str[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        str[i] = '\0';
    }
}

void inputString(char str[]) {
    printf("Inserisci una stringa: ");
    scanf("%s", str);
}

int lenghtString(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}