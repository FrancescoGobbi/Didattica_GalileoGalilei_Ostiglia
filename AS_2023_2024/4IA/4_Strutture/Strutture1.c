#include <stdio.h>

// Struttura Punto --> punto del Piano Cartesiano
// La struttura ha due parametri
struct Punto {
    int x; // Ascissa
    int y; // Ordinata
};

int main() {
    // Dichiarazione di una variabile di tipo 'Punto' (struttura di tipo 'Punto')
    struct Punto punto1;

    // Assegnazione dei valori ai parametri della struttura
    punto1.x = 10;
    punto1.y = 20;

    printf("Coordinate del punto: (%d, %d)\n", punto1.x, punto1.y);
}