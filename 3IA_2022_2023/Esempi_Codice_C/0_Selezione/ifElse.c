#include <stdio.h>

int main() {
    int a,b;
    
    printf("Definisci se a è maggiore di b\n");
    printf("Inserisci due vaori numerici: ");
    scanf("%d%d", &a, &b);

    // Semplice selezione singola
    if (a > b) {
        printf("a è maggiore di b!\n");
    }

    // Selezione con if-else
    if (a > b) {
        printf("a è maggiore di b!\n");
    }
    else {
        printf("b è maggiore di a!\n");
    }

    // Selezione con if, else-if ed else
    if (a > b) {
        printf("a è maggiore di b!\n");
    }
    else if(a == b) {
        printf("I due numeri sono uguali!\n");
    }
    else {
        printf("b è maggiore di a!\n");
    }

    
    // SELEZIONI ANNIDATE
    // Ricerca dell'anno bisestile
    int anno;
    printf("Inserisci un anno per vefiricare che sia bisestile: ");
    scanf("%d", &anno);
    // Se l'anno è divisibile per 400
    if (anno % 400 == 0) { 
        printf("L'anno %d è bisestile!\n", anno);
    }
    // Se l'anno è divisibile per 4
    else if (anno % 4 == 0) {
        if (anno % 100 != 0) { // Così credo l'AND
            printf("L'anno %d è bisestile!\n", anno);
        }
        else {
            printf("L'anno %d NON è bisestile!\n", anno);
        }
    }
    else {
        printf("L'anno %d NON è bisestile!\n", anno);
    }

    // ALTERNATIVA USANDO GLI OPERATORI LOGICI

    if (anno % 400 == 0 || ((anno % 4 == 0) && (anno % 100 != 0))) {
        printf("L'anno %d è bisestile!\n", anno);
    }
    else {
        printf("L'anno %d NON è bisestile!\n", anno);
    }

}