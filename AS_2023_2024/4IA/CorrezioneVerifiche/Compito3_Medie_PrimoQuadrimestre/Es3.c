#include <stdio.h>
#include <stdlib.h>

int funzione(int [], int);

int main() {
    int vet[] = {1, 5, 10, 4, 3, 5, 2, 1, 2, 3};
    int lung = sizeof(vet) / sizeof(vet[0]); // Lunghezza del vettore

    int sommaQuadrati = funzione(vet, lung);
    printf("La somma dei quadrati di ogni elemento del vettore è : %d\n", sommaQuadrati);
}

int funzione(int vet[], int lung) {
    int somma = 0;
    int i;

    for(i = 0; i<lung; i++) {
        vet[i] = vet[i]*vet[i];
        somma += vet[i];
    }
    return somma;
}