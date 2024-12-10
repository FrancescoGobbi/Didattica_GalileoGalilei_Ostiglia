// Importiamo la libreria standard per input e output
#include <stdio.h>

// Definiamo la funzione principale del programma
int main() {
    // Dichiarazione di due variabili di tipo intero (4 byte)
    int x = 5;
    float y = 5.6;
    double z = 4.322455;
    char w = 'a';

    // Stampa delle variabili create
    printf("Il numero intero è: %d\n", x);
    printf("Il numero con la virgola è: %f\n", y);
    printf("Il numero con una maggior specifica della parte decimale è: %lf\n", z);
    printf("Il carattere è: %c\n", w);
}