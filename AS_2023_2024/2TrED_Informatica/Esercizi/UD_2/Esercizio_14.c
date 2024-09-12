#include <stdio.h>

// ESERCIZIO 14
/*
    Prendere in input un valore A (intero e maggiore di 0).
    Il programma deve varificare e stampare se il numero è primo o no.

    N.B. Come si definisce se un numero è primo?

    ESEMPIO:
    Se A = 5 --> Il programma stamperà "5 è un numero primo!"
    Se A = 12 --> Il programma stamperà "12 NON è un numero primo!"
*/

int main() {
    int A;
    int i;
    int contaDivisori = 0;

    // Input del valore
    do{
        printf("Inserisci il valore di A: ");
        scanf("%d", &A);
    }while(A<=0);

    // Centro e conto tutti i divisori di A
    for(i = 1; i<=A; i++) {
        if(A%i==0) { // Se i è un divisore del numero
            contaDivisori++; // Incrmento il contatore dei divisori
        }
    }

    // Verifico se A è un divisore
    if (contaDivisori == 2) {
        printf("Il valore %d è un NUMERO PRIMO!\n", A);
    }
    else {
        printf("Il valore %d NON è un NUMERO PRIMO!\n", A);
    }
}