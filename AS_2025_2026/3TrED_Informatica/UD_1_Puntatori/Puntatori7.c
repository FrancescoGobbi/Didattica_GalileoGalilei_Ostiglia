/* Puntatori 7
Comprensione del codice:
Esercizio con i puntatori di difficile.
Definire cosa succede riga per riga e definire il risultato finale.
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *p1 = &a;
    int *p2 = &b;

    *p1 = *p1 + *p2; // a = a + b --> a = 5 + 10 = 15
    *p2 = *p1 - *p2; // b = a - b

    p2 = p1;

    *p1 = *p2 + *p1;
    *p1 = *p1 + *p2; // a = a + b --> a = 15 + 10 = 25

    printf("Valore di a: %d\n", a); // Stampa il valore
    printf("Valore di b: %d\n", b); // Stampa il valore di b
}