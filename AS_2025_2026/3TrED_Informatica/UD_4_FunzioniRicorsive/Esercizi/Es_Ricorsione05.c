#include <stdio.h>

/*
Creare una funzione in C che prenda in input due numeri interi a e b.
La funzione deve ritornare la somma dei numeri compresi tra a e b (inclusi).
La funzione deve essere ricorsiva.

ESEMPIO: se a = 2 e b = 5, la funzione deve ritornare 2 + 3 + 4 + 5 = 14.
ESEMPIO: se a = 5 e b = 2, la funzione deve ritornare 5 + 4 + 3 + 2 = 14.
*/
int sommaNumeri(int a, int b);

int main() {
    int a, b;
    // Richiesta all'utente di inserire due numeri
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &b);

    printf("\n\n\nEsercizio della SOMMA dei numeri tra a e b\n");
    int somma = sommaNumeri(a, b);
    printf("La somma dei numeri tra %d e %d è: %d\n", a, b, somma);
}

int sommaNumeri(int a, int b){
    // Caso base: se a e b sono uguali, la somma è semplicemente quel numero
    if (a == b) {
        return a; // Oppure return b, sono uguali
    }
    else{
        if (a < b) { // Caso ricorsivo quando a è minore di b
            // Sommiamo a al risultato della somma dei numeri tra a+1 e b
            return a + sommaNumeri(a + 1, b);
        }
        else { // Caso ricorsivo quando a è maggiore di b
            // Sommiamo a al risultato della somma dei numeri tra a-1 e b
            return a + sommaNumeri(a - 1, b);
        }
    }
}