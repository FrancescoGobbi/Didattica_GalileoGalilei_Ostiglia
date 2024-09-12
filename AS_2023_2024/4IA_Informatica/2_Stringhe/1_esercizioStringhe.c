#include <stdio.h>

const int dim = 20;

/**
 * @brief funzione che pranda una stringa in input e 
 * la modifica strasformando tutte le lettere minuscole
 * in maiuscolo
 * 
 * ESEMPIO: str "ciao"
 * --> poi str sarà "CIAO"
 * 
 */
//TO DO
void toUpperCase(char str[]);

/**
 * @brief funzione che pranda due stringhe in input 
 * una str e una dst. La funzione deve mettere in coda
 * alla stringa dst anche la stringa str.
 * 
 * ESEMPIO: str = "come" e dst = "ciao"
 * --> poi dst sarà "ciaocome"
 * 
 */
// TO DO
void addString(char str[], char dst[]);


void initializeString(char[], int);

int main() {
    char str[dim];
    char dst[dim];
    initializeString(str, dim);
    initializeString(dst, dim);

    printf("Prendo la prima stringa: ");
    scanf("%s", str);

    printf("La stringa è: %s\n", str);
    toUpperCase(str);
    printf("La stringa è: %s\n", str);

    printf("Prendo la seconda stringa: ");
    scanf("%s", dst);
    addString(str, dst);
    printf("La stringa dst ora è: %s\n", dst);
}

void initializeString(char str[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        str[i] = '\0';
    }
}

void toUpperCase(char str[]) {
    int i=0;
    while(str[i]!='\0') {
        if((str[i]>='a' && str[i]<='z')) {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

void addString(char str[], char dst[]){
    int i = 0, j = 0;

    while(dst[i]!='\0') {
        i++;
    }
    while(str[j]!='\0') {
        dst[i] = str[j];
        i++;
        j++;
    }
} 