#include <stdio.h>

/*
Creare il codice in C di un programma che crea un array di interi di dimensine 8.
Il programma chiede all'untente di inserire un valore compreso tra 0 e 255 (controllare l'input).
Il programma deve convertire il valore inserito da decimale a binario e salvare i bit nell'array precedentemente creato.
Infine, il programma deve stampare il valore inserito e il suo valore binario.
*/

#define dim 8

int main() {
    int vet[dim] = {0};
    int i; // Per scorrere il vettore
    int n; // Input dell'utente
    int val; // Variabile di supporto

    // Prendere in input un numero intero tra 0 e 255
    do{
        printf("Inserisci un numero intero da inserire all'interno di un byte: ");
        scanf("%d", &n);
    }while(n<0 || n>255);
    // Vogliamo un numero compreso tra 0 e 255
    // Quindi vogliamo è : (n>=0 && n<=255)
    // Se NEGHIAMO la condizione, otteniamo il duale, ovvero quello che NON vogliamo
    // Quindi che NON vogliamo sarà: (n<0 || n>255) equivalente a !(n>=0 && n<=255)

    val = n;

    // Convertire il numero da decimale a binario
    for(i = dim - 1; i>=0; i--) {
        vet[i] = n % 2; // Prendo il resto della divisione per 2
        n = n / 2; // Eseguo la divisione per 2, preparando così la n all'iterazione successiva
    }

    // Stampo il numero in binario, utilizzando il vettore
    printf("Il numero %d in binario è: ", val);
    for(i = 0; i < dim; i++) {
        printf("%2d", vet[i]);
    }
    printf("\n"); // Serve principalmente per sistemi operativi MacOS con compilazione da terminale
}