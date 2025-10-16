/* Puntatori 8
Comprensione del codice:
Esercizio con i puntatori di difficile.
Definire cosa succede riga per riga e definire il risultato finale.
*/

#include <stdio.h>

int main() {
    int a = 3;
    int b = 10;

    int *p1 = &a;
    int *p2 = &b;

    *p1 = *p1 + *p1;
    a = *p1;
    a = *p2 + *p1;

    p1 = p2;
    p2 = &b;

    *p2 = *p1 + a;

    printf("%d e %d", a, b);
}