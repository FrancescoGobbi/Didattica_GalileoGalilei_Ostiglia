/*
Esercizi da interpretare per la crezione dello stack di evoluzione di un programma in C.
Esercizi da svolgere come da spigazione a lezione. Vedi materiale di teoria.
*/

#include <stdio.h>

// Esempio di funzioni che utilizzano lo stack
void Funzione1() {
    int x = 10;
    int y = 20;
    int z = x + y;
    printf("La somma di %d e %d è %d\n", x, y, z);
}

int Funzione2(int a, int b) {
    return a * b;
}

int main() {
    // Codice di esempio per l'uso dello stack
    int a = 5;
    int b = 10;
    int c = a + b;
    printf("La somma di %d e %d è %d\n", a, b, c);

    Funzione1();
    int risultato = Funzione2(a, b);
    printf("Il prodotto di %d e %d è %d\n", a, b, risultato); 
}