#include <stdio.h>

// Dichiarazione delle funzioni
/**
 * @brief Funzione che prende in input un valore e crea il suo quadrato
 * 
 * @param x
 * @return int 
 */
int quadrato (int x);

int main() {
    int x; // Creo la varibile x nel main()
    
    // Prendo il valore della x
    printf("Inserisci un valore della x: ");
    scanf("%d", &x);

    // Stampo il valore della x
    printf("Il valore della x è: %d\n", x);
    printf("Indirizzo di memoria della variabile x del main(): %p\n", &x);

    // Eseguo il quadrato con la chiamata a funzione
    int y = quadrato(x); // Chiamata della funzione quadrato()

    // Stampa del quadrato
    printf("\n\nSono tornato nella funzione main().\n");
    printf("(%d)^2 = %d\n", x, y);
    printf("Indirizzo di memoria della variabile y del main(): %p\n", &y);

    // return 0; // Return della funzione main()
}

// Definizione delle funzioni
int quadrato (int x) {
    // La variabile x è una variabile che la funzione quadrato()
    // La variabile x è una variabile presa in input dalla funzione che l'ha chiamata
    printf("\n\nSono nella funzione quadrato().\n");
    printf("Indirizzo di memoria della variabile x della funzione quadrato(): %p\n", &x);
    int y = x * x; // Variabile y della funzione quadrato()
    printf("Indirizzo di memoria della variabile y della funzione quadrato(): %p\n", &y);
    return y; // return della funzione quadrato()
}