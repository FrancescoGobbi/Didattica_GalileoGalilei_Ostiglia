#include <stdio.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensine 10.
L'array deve essere riempito con dei valori interi inseriti dall'utente.
Il programma deve eseguire e stampare il fattoriale di ogni valore presente nell'array.
*/

#define dim 10

/**
 * @brief Funzione che restistuisce del fattoriale del valore n in input.
 * 
 * @param n 
 * @return int 
 */
int fattoriale(int n);

int main() {
    int vet[10] = {0};
    int i; // Per scorrere il vettore
    int fatt = 1; // Per il fattoriale
    int j; // Per l'iterazione con il fattoriale

    // Prendiamo in input i valori per il vettore
    for(i = 0; i < dim; i++) {
        printf("Inserisci un elemento in posizone [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    // Stampiamo il vettore inziale
    for(i = 0; i < dim; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");

    // Facciamo il fattoriale
    for(i = 0; i < dim; i++) { // Iterazione per guardare il vettore
        /* Alternativa per fare il fattoriale senza l'utilizzo della funzione
        fatt = 1;
        for(j = 1; j <= vet[i]; j++) { // Iterazione per il fattoriale
            fatt = fatt * j;
        }
        */
        fatt = fattoriale(vet[i]);
        printf("Fattoriale di %d = %d\n", vet[i], fatt);
    }
}

int fattoriale(int n) {
    // Caso base: se n è 0 o 1, il fattoriale è 1
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        // Caso/Passo ricorsivo: n * fattoriale(n - 1)
        return n * fattoriale(n - 1);
    }
}