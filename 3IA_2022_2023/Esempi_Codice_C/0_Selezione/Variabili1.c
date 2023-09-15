#include <stdio.h> // Per input-output
#include <limits.h> // Per i limiti

int main () {
    // INT_MAX per il valore massimo intero
    int a = INT_MAX; // Creazione di una variabile intera
    printf("int: %d\n", a); // Stampa del valore della variabile int
    printf("Byte usati per l'int: %lu\n\n",sizeof(a)); // %lu = long unsigned int
    
    float b = 4.3; // Creazione di una variabile float
    printf("float: %f\n", b); // Stampa della variabile fkloat
    printf("Byte usati per il float: %lu\n\n", sizeof(b));

    double c = 4.8932; // Creazione di una variabile double
    // Nel %f si possono mettere %x.yf, 
    // con la x si indicano il numero delle cifre prima della firgola
    // con la y si indicano il numero delle cifre dopo la virgola
    // --> Questa scrittura si può usare anche nel float
    printf("double: %8.15f\n", c); // Stampa della variabile double
    printf("Byte usati per il double: %lu\n\n", sizeof(c));

    char d = 'a'; // Creazione di una variabile char
    printf("char: %c\n", d); // Stampa della variabile char
    printf("char in numero: %d\n", d); // STAMPA DEL NUMERO ASSOCIATO AL CARATTERE
    printf("Byte usati per il char : %lu\n\n", sizeof(d));
}