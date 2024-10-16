#include <stdio.h>

// Dichiarazione delle funzioni
/**
 * @brief Funzione che prende in input un valore e crea il suo quadrato
 * 
 * @param x
 * @return int 
 */
int quadrato (int);

int main() {
    int x; // Creo la varibile x nel main()
    
    // Prendo il valore della x
    printf("Inserisci un valore della x: ");
    scanf("%d", &x);

    // Stampo il valore della x
    printf("Il valore della x è: %d\n", x);

    // Eseguo il quadrato con la chiamata a funzione
    int y = quadrato(x); // Chiamata della funzione quadrato()

    // Stampa del quadrato
    printf("(%d)^2 = %d\n", x, y);

    // return 0;
}

// Definizione delle funzioni
int quadrato (int x) {
    int y = x * x;
    return y; // return della funzione
}