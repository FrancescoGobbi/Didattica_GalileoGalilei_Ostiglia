#include <stdio.h>

void stampaSequenzaPiuMeno(int n);

int main() {
    int val;

    printf("Inserisci un valore da stampare tanti + e poi tanti -: ");
    scanf("%d", &val);

    stampaSequenzaPiuMeno(val);
    printf("\n");
}

void stampaSequenzaPiuMeno(int n) {
    // Caso base
    if(n==0) {
        printf(""); // non stampo nulla
    }
    else { // Caso ricorsivo
        printf(" + "); // prima della ricorsione stampo i +
        stampaSequenzaPiuMeno(n-1);
        printf(" - "); // dopo la ricorsione stampo i -
    }
}