#include <stdio.h>

int main() {
    int x, y, z;
    int max;

    printf("Inserisci tre valori: ");
    scanf("%d %d %d", &x, &y, &z);

    // Trovo il massimo
    if(x >= y && x >= z) {
        max = x;
    }
    if(y >= x && y >= z) {
        max = y;
    }
    if(z >= x && z >= y) {
        max = z;
    }

    printf("Il massimo dei tre valori inseriti è: %d\n", max);

}