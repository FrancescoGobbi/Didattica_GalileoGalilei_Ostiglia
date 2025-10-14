/* Puntatori 6
Comprensione del codice:
Esercizio con i puntatori.
Definire cosa succede riga per riga e definire il risultato finale.
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *p1 = &a;
    int *p2 = &b;

    *p1 = *p1 + *p2; // a = a + b --> a = 5 + 10 = 15
    *p2 = *p1 - *p2; // b = a - b --> b = 15 - 10 = 5
    *p1 = *p1 - *p2; // a = a - b --> a = 15 - 5 = 10
    *p1 = *p1 * 2;   // a = a * 2 --> a = 10 * 2 = 20
    *p2 = *p2 * 3;   // b = b * 3 --> b = 5 * 3 = 15

    printf("Valore di a: %d\n", a); // Stampa il valore di a
    printf("Valore di b: %d\n", b); // Stampa il valore di b

    printf("\n\n");
    printf("\n\n");
    printf("Indirizzo di memoria di p1: %p\n", &p1);
    printf("Valore contenuto in p1: %p\n", p1);
    printf("Valore puntato da p1: %d\n", *p1); // *p1 è la deferenziazione della variabile puntatore

    printf("Indirizzo di memoria di p2: %p\n", &p2);
    printf("Valore contenuto in p2: %p\n", p2);
    printf("Valore puntato da p2: %d\n", *p2); // *p1 è la deferenziazione della variabile puntatore

    // Riassegno il puntatore ad una nuova cella di memoria
    p1 = p2;

    printf("\n\n");
    printf("Dopo l'assegnazione p1 = p2:\n");
    printf("Indirizzo di memoria di p1: %p\n", &p1);
    printf("Valore contenuto in p1: %p\n", p1);
    printf("Valore puntato da p1: %d\n", *p1); // *p1 è la deferenziazione della variabile puntatore

    printf("Indirizzo di memoria di p2: %p\n", &p2);
    printf("Valore contenuto in p2: %p\n", p2);
    printf("Valore puntato da p2: %d\n", *p2); // *p1 è la deferenziazione della variabile puntatore


    *p1 = *p2 + *p1;
    printf("Valore di a: %d\n", a); // Stampa il valore di a
    printf("Valore di b: %d\n", b); // Stampa il valore di b
}