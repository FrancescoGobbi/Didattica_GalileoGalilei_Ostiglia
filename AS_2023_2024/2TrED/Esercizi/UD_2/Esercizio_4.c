#include <stdio.h>

/*
TESTO ESERCIZIO:
Chiedere in input 5 valori interi e sommarli tra loro.
I valori in input devono essere maggiori di 10.
Stampare l'output.
*/

int main() {
    int n;
    int somma = 0;
    int i;

    for(i = 1; i <= 5 ; i++) {
        
        do{
            printf("Inserisci un valore: ");
            scanf("%d", &n);
        }while(n <= 10);

        somma = somma + n;
    }

    printf("Il risultato è %d\n", somma);

}