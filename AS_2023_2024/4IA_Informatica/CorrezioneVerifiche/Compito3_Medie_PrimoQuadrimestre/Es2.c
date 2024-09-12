#include <stdio.h>

void funzione(int vettore[], int lunghezza) {
    for (int i = 0; i < lunghezza; ++i) {
        if (vettore[i] % 2 == 0) {
            vettore[i] = vettore[i] * vettore[i];
        } else {
            vettore[i] = vettore[i] * vettore[i] * vettore[i] - vettore[i];
        }
    }
}

int main() {
    int vettore[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(vettore) / sizeof(vettore[0]);

    // Chiamata della funzione
    funzione(vettore, lunghezza);

    printf("Vettore modificato: ");

    // Stampa del vettore dopo la funzione
    for (int i = 0; i < lunghezza; ++i) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}


