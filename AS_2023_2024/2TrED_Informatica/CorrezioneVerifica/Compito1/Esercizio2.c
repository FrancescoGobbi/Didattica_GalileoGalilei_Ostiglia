#include <stdio.h>

int main() {
    // Creo le variabili intere
    int a,b;

    // Prendo in input i valori
    printf("Inserisci due valori: ");
    scanf("%d %d", &a, &b);

    // Cerco il minimo
    if(a<b) { // Caso VERO
        printf("Il valore minimo è: %d\n", a);
    }
    else { // Caso FALSO
        printf("Il valore minimo è: %d\n", b);
    }
}