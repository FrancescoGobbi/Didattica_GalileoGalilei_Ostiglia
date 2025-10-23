#include <stdio.h>

// Dichiarazione delle funzioni (o prototipi delle funzioni che verranno definite dopo la funzione main())
/**
 * @brief Funzione che prende in input un valore e crea il suo quadrato
 * 
 * @param x
 * @return int 
 */
int quadrato (int x);

/**
 * @brief Funzione che prende in input due valori e restituisce la loro somma
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int somma (int a, int b);

// Funzione main()
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

    printf("\n\nSeconda parte dell'esercizio: Funzione somma tra due valori in input\n");

    int a, b;
    // Prendo i valori di a e b
    printf("Inserisci due valori interi (a e b): ");
    scanf("%d%d", &a, &b);

    // Stampo i valori di a e b
    printf("Il valore di a è: %d\n", a);
    printf("Il valore di b è: %d\n", b);
    printf("Indirizzo di memoria della variabile a del main(): %p\n", &a);
    printf("Indirizzo di memoria della variabile b del main(): %p\n", &b);

    int sum = somma(a,b); // Chiamata della funzione somma()

    // Stampa della somma
    printf("\n\nSono tornato nella funzione main().\n");
    printf("La somma tra %d e %d è: %d\n", a, b, sum);
    printf("Indirizzo di memoria della variabile somma del main(): %p\n", &sum);

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

int somma (int a, int b) {
    int s = a + b; // Variabile s della funzione somma()
    printf("\n\nSono nella funzione somma().\n");
    printf("Indirizzo di memoria della variabile a della funzione somma(): %p\n", &a);
    printf("Indirizzo di memoria della variabile b della funzione somma(): %p\n", &b);
    printf("Indirizzo di memoria della variabile s della funzione somma(): %p\n", &s);
    return s; // return della funzione somma()
}