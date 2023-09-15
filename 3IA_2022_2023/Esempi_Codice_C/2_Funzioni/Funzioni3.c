/*
Esercizio visto a lezione, con funzioni:
INSERISCI: inserire un carattere/lettera tra 'a' e 'z'
MAIUSCOLO: strasformare il carattere inserito in maiuscolo

N.B. Entrambe le funzioni prenderanno il riferimento/puntatore
*/

#include <stdio.h>

void inserisci(char *var);
void maiuscolo(char *let);

int main() {
    char let;
    printf("%p\n", &let); // Stampo l'indirizzo di let nel main()
    inserisci(&let); // Implicitamente: char *var = &let;
    printf("Lettera minuscola: %c\n", let);
    maiuscolo(&let); // Implicitamente: char *let = &let;
    printf("Lettera maiuscola: %c\n", let);
}

void inserisci(char *var) {
    printf("%p\n", var);
    do{
        printf("Inserisci una lettera: ");
        scanf("%c", var); // Come dire: &(*var)
        fflush(stdin);
    }while((*var)<'a' || (*var)>'z');
}

void maiuscolo(char *let) {
    printf("%p\n", let);
    (*let) = (*let) - 32;
}