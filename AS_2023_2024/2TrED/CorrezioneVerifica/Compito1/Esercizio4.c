#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b, c;

    // Input delle variabili
    printf("Isnerisci 3 variabili intere: ");
    scanf("%d %d %d", &a, &b, &c);

    // Condizioni per trovare il massimo
    if(a > b) {
        if(a > c) {
            printf("Il valore massimo è: %d\n", a);
        }
        else {
            printf("Il valore massimo è: %d\n", c);
        }
    } 
    else {
        if (b > c) {
            printf("Il valore massimo è: %d\n", b);
        }
        else {
            printf("Il valore massimo è: %d\n", c);
        }
    }
}