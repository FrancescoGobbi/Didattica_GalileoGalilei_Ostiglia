/* Es2
Creare un programma in C che crei 4 variabili float, da assegnare voi il valore.
Creare la media tra i quatro valori e stampare il risultato.

N.B. Verificare il risultato con l'esercizio precedente.
Rispetto a come questi due stampano il risultato, ovvero la media, magari utilizzando proprio
gli stessi valori assegnati alle 4 variaibili.
*/

#include <stdio.h>
int main() {
    float a = 4, b = 5, c = 9, d = 3;
    float media = 0;

    media = (a + b + c + d) / 4;
    printf("La media tra %f, %f, %f e %f è:\n %f\n", a, b, c, d, media);
}