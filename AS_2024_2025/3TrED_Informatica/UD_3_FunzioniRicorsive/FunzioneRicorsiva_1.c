#include <stdio.h>

// Funzione ricorsiva per calcolare il numero di Fibonacci
int fibonacci(int n);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero per calcolare il numero di Fibonacci: ");
    scanf("%d", &numero);

    // Verifica che il numero non sia negativo
    if (numero < 0) {
        printf("La sequenza di Fibonacci non è definita per numeri negativi.\n");
        return 1;
    }

    // Calcolo del numero di Fibonacci e stampa del risultato
    int risultato = fibonacci(numero);
    printf("Il numero di Fibonacci per %d è: %d\n", numero, risultato);

    return 0;
}

int fibonacci(int n) {
    // Stampa del valore di n all'inizio della funzione
    printf("Chiamata della funzione fibonacci(%d)\n", n);

    // Caso base: se n è 0 o 1, ritorna n
    if (n == 0) {
        printf("Caso base raggiunto con n = 0, ritorno 0\n");
        return 0;
    }
    if (n == 1) {
        printf("Caso base raggiunto con n = 1, ritorno 1\n");
        return 1;
    }

    // Caso/Passo ricorsivo: somma dei due numeri precedenti della sequenza
    int risultato = fibonacci(n - 1) + fibonacci(n - 2);

    // Stampa del risultato parziale prima di ritornare
    printf("Ritorno dal calcolo di fibonacci(%d): fibonacci(%d) + fibonacci(%d) = %d\n", n, n - 1, n - 2, risultato);

    return risultato;

    // Tutto in una sola riga, senza la creazione di una variabile
    // Caso/Passo ricorsivo: somma dei due numeri precedenti della sequenza
    // return fibonacci(n - 1) + fibonacci(n - 2);
}