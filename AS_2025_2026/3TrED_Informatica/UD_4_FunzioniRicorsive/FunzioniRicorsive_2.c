#include <stdio.h>

/*
Creare una funzione ricorsiva in C che prenda in input un numero intero n.
La funzione deve eseguire la somma ricorsiva dei primi n numeri interi.
*/
int sommaN(int n);

/*
Creare una funzione ricorsiva in C che prenda in input un numero intero n.
La funzione deve stamapre in ordine decrescente gli n valori che vanno da 1 ad n.

ESEMPIO: Se n = 6, si dovrà stampare: 6  5  4  3  2  1
*/
void stampaNDec(int n);

/*
Creare una funzione ricorsiva in C che prenda in input un numero intero n.
La funzione deve stamapre in ordine crescente gli n valori che vanno da 1 ad n.

ESEMPIO: Se n = 6, si dovrà stampare: 1  2  3  4  5  6
*/
void stampaNCre(int n);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    int somma = sommaN(numero);
    printf("La somma dei primi n numeri è: %d\n", somma);
    printf("\n\n\n");

    stampaNDec(numero);
    printf("\n\n\n");

    stampaNCre(numero);
    printf("\n\n\n");
}

int sommaN(int n) {
    if (n == 1) { // Caso base
        return 1;
    }
    else { // Caso ricorsivo
        return n + sommaN(n - 1);
    }
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