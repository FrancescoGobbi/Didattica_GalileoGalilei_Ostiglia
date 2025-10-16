/* Puntatori 9
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

    printf("%d e %d\n", a, b);

    *p1 = 10;
    *p1 = *p1 * *p2;

    *p2 = 2;

    printf("%d e %d\n", a, b);
}