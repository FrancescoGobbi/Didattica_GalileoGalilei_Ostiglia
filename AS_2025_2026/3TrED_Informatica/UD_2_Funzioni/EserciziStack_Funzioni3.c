/*
Esercizi da interpretare per la crezione dello stack di evoluzione di un programma in C.
Esercizi da svolgere come da spigazione a lezione. Vedi materiale di teoria.
*/

#include <stdio.h>

float funzione1(int n, int a, int b);

int funzione2(int n);

int main() {
    int n = 10;
    int a = 9;
    int b = 6;
    float x = funzione1(n,a,b);
    int y = funzione2(n);
    // Scrivere i risultati dell'esercizio (quinti il valore di x ed y)
}   
float funzione1(int n, int a, int b) {
    // Implementazione della funzione 1
    float x = (float)(n+a+b)/3;
    return x;
}
int funzione2(int n) {
    int i;
    int x = 0;
    for(i = 1; i<=n; i++) {
        if (n % i == 0) {
            x+=i;
            i++;
        }
    }
    return x;
}