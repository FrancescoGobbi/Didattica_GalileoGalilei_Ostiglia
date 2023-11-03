#include <stdio.h>

/**
 * @brief Funzione che stampa l'alfabeto data una lettera iniziale
 *  
 */
void alfabeto();

/**
 * @brief Funzione che stampa l'alfabeto data una lettera iniziale
 *  
 */
void alfabeto2();

int main() {
    alfabeto();
    alfabeto2();
}

void alfabeto() {
    char lettera; // Lettera iniziale
    char i; // Lettera da stampare
    do{
        printf("Inserisci una lettera: ");
        scanf("%c", &lettera);
    }while((lettera<'A' || lettera>'Z') && (lettera<'a' || lettera>'z'));

    if(lettera>='A' && lettera <='Z') {
        for(i=lettera; i<='Z'; i++) {
            printf("%c ", i);
        }
    }
    else {
        for(i=lettera; i<='z'; i++) {
            printf("%c ", i);
        }
    }
}

void alfabeto2() {
    char lettera; // Lettera iniziale
    do{
        printf("Inserisci una lettera: ");
        scanf("%c", &lettera);
    }while((lettera<'A' || lettera>'Z') && (lettera<'a' || lettera>'z'));

    for(lettera; (lettera<='Z' || lettera<='z'); lettera++) {
        printf("%c ", lettera);
    }
}