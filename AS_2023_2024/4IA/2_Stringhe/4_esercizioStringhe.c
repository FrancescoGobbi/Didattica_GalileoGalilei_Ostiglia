#include <stdio.h>

const int DIM = 20;

void initializeString(char*, int);

int countNOTLetter(char*);

void numberToHashtag(char*);

int sumNumberStr(char*);

int main() {
    char str[DIM];
    initializeString(str, DIM);

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    printf("Il numero di caratteri che non sono lettere alfabetiche: %d\n", countNOTLetter(str));

    printf("Inserisci una stringa con dei numeri: ");
    scanf("%s", str);
    printf("La somma dei numeri nella stringa inserita è: %d\n", sumNumberStr(str));
    numberToHashtag(str);
    printf("Stringa senza numeri: %s\n", str);
}

void initializeString(char *str, int dim) {
    int i;
    for(i=0; i<dim; i++) {
        *(str) = '\0';
        str++; // Sposto il puntatore alla cella successiva
    }
}

int countNOTLetter(char *str) {
    if(*str!='\0') {
        if((*str<'a' || *str>'z') && (*str<'A' || *str>'Z')) {
            return 1 + countNOTLetter(str+1);
        }
        return countNOTLetter(str+1);
    }
    return 0;
}

void numberToHashtag(char *str) {
    if(*str!='\0') {
        if(*str>='1' && *str<='9') {
            *str = '#';
        }
        numberToHashtag(str+1);
    }
}

int sumNumberStr(char *str) {
    if(*str!='\0') { 
        if(*str>='0' && *str<='9') {
            return (*str - '0') + sumNumberStr(str+1);
        }
        return 0 + sumNumberStr(str+1);
    }
    return 0;
}