#include <stdio.h>

// Funzione ricorsiva per calcolare il fattoriale
int fattoriale(int n);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero per calcolare il fattoriale: ");
    scanf("%d", &numero);

    // Verifica che il numero non sia negativo
    if (numero < 0) {
        printf("Il fattoriale non è definito per numeri negativi.\n");
        return 1;
    }

    // Calcolo del fattoriale e stampa del risultato
    int risultato = fattoriale(numero);
    printf("Il fattoriale di %d è: %d\n", numero, risultato);

    return 0;
}

int fattoriale(int n) {
    // Stampa del valore di n all'inizio della funzione
    printf("Chiamata della funzione fattoriale(%d)\n", n);

    // Caso base: se n è 0 o 1, il fattoriale è 1
    if (n == 0 || n == 1) {
        printf("Caso base raggiunto con n = %d, ritorno 1\n", n);
        return 1;
    }

    // Caso/Passo ricorsivo: n * fattoriale(n - 1)
    int risultato = n * fattoriale(n - 1);

    // Stampa del risultato parziale prima di ritornare
    printf("Ritorno dal calcolo di fattoriale(%d): %d * fattoriale(%d) = %d\n", n, n, n - 1, risultato);

    return risultato;

    // Tutto in una sola riga, senza la creazione di una variabile
    // Caso/Passo ricorsivo: n * fattoriale(n - 1) 
    // return n * fattoriale(n - 1);
}