#include <stdio.h>

/*
Creare una funzione in C che prenda in input un numero intero n.
La funzione deve stampare in modo ricorsivo tutti i numeri compresi tra 1 ed n.
La funzione deve esssere ricorsiva.

ESEMPIO: se n = 5, la funzione deve stampare 1 2 3 4 5.
*/
void printNumeri(int n);

int main() {
    int numero;
    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("\n\n\nEsercizio della STAMPARE dei numeri tra 1 ed n\n");
    printNumeri(numero);
}

void printNumeri(int n){
    // Caso base: se n è minore di 1, non stampiamo nulla
    if (n < 1) {
        return;
    }
    else { // Caso ricorsivo
        // Prima stampiamo i numeri da 1 a n-1 e poi stampiamo n
        printNumeri(n - 1);
        printf("%d ", n);
    }
}