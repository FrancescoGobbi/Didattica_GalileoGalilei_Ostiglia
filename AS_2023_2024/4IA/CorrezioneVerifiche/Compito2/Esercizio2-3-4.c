#include <stdio.h>

const int dim = 10;

void initializeString(char*, int);
int esercizio2(char*, char);
int esercizio3(char*);
int esercizio4(char[], char[]);

int main() {
    char str[dim];
    char let;

    initializeString(str, dim);

    // Esercizio 2
    printf("Inserisci una stringa: ");
    scanf("%s", str);
    fflush(stdin);
    printf("Inserisci un carattere: ");
    scanf("%c", &let);
    fflush(stdin);
    printf("Il numero delle lettere nella stringa è %d\n",esercizio2(str, let));

    printf("Il numero dei caratteri NON maiuscoli nella stringa è %d\n", esercizio3(str));

    char stringa[] = "GalilEOgalilei";
    char sub[] = "classe";
    printf("Il numero di caratteri in %s che NON sono presenti in %s sono: %d\n", stringa,  sub, esercizio4(stringa, sub));
}

void initializeString(char *str, int dim) {
    int i;
    for(i=0; i<dim; i++) {
        *(str) = '\0';
        str++; // Sposto il puntatore alla cella successiva
    }
}

int esercizio2(char *str, char let) {
    if(*str!='\0') {
        if(let>='a' && let<='z') {
            //Considero sia le lettere piccol e sia le lettere grandi
            if(*str==let || *str==(let-32)) {
                return 1 + esercizio2(str+1, let);
            }
            return esercizio2(str+1, let);
        } 
        if(let>='A' && let<='Z') {
            //Considero sia le lettere piccol e sia le lettere grandi
            if(*str==let || *str==(let+32)) {
                return 1 + esercizio2(str+1, let);
            }
            return esercizio2(str+1, let);
        }
    }
    return 0;
}

int esercizio3(char *str) {
    if(*str!='\0') {
        if(*str<'A' || *str>'Z') {
            return 1 + esercizio3(str+1);
        }
        return esercizio3(str+1);
    }
    return 0;
}

int esercizio4(char str[], char sub[]) {
    int i, j;
    int count = 0;
    int check;

    for(i=0; str[i]!='\0'; i++) {
        check = 1; // Conto che il carattere str[i] NON sia presente in sub[]
        for(j=0; sub[j]!='\0'; j++) {
            // Se è presente il carattere cambio il check = 0
            if(str[i] == sub[j]) {
                check = 0;
            }
        }
        if (check) {
            count++;
        }
    }
    return count;
}