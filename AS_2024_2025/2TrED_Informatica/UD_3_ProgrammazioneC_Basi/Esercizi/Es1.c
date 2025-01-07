/* Es1
Creare un programma in C che crei 4 variabili intere, da assegnare voi il valore.
Creare la media tra i quattro valori e stampare il risultato.
*/

#include <stdio.h>
int main() {
    int a = 4, b = 5, c = 9, d = 3;
    float media; // float media = 0;

    // Operazione di cast
    // Cast da int a float eseguita sul numeratore della divisione
    media = (float)(a + b + c + d) / 4;
    printf("%f\n", media);
    printf("La media tra %d, %d, %d e %d è: %f\n", a, b, c, d, media);
}