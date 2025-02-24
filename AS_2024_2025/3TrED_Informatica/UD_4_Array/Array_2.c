#include <stdio.h>

/*
Creare il codice in C di un programma che crea un array di dimensine 10.
L'array deve essere riempito con i primi 10 numeri della sequenza di Fibonacci.
Infine, il programma deve stampare gli elementi dell'array.
*/

#define dim 10

int main() {
    int i;
    int vetFib[10] = {0, 1}; // Creiamo il vettore di Fibonacci con i casi base ed il resto a 0

    for(i = 2; i < dim; i++) {
        vetFib[i] = vetFib[i-1] + vetFib[i-2];
    }

    printf("Vettore di Fibonacci: \n");

    for(i = 0; i < dim; i++) {
        printf("%3d", vetFib[i]);
    }
    printf("\n");
}