#include <stdio.h>

void stampaNDec(int n);


void stampaNCre(int n);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    stampaNDec(numero);
    printf("\n\n\n");

    stampaNCre(numero);
    printf("\n\n\n");
}

void stampaNDec(int n) {
    if (n == 1) { // Caso base
        printf(" %d ", n);
    }
    else { // Caso ricorsivo
        printf(" %d ", n);
        stampaNDec(n - 1); // Chiamata ricorsiva
    }
}

void stampaNCre(int n) {
    if (n == 1) { // Caso base
        printf(" %d ", n);
    }
    else { // Caso ricorsivo
        stampaNCre(n - 1); // Chiamata ricorsiva
        printf(" %d ", n);
    }
}
