#include <stdio.h>

/*
TESTO ESERCIZIO:
Chiedere in input 5 valori interi e sommarli tra loro.
I valori in input devono essere compresi tra 1 e 5.
Stampare l'output.
*/

int main() {
    int n;
    int somma = 0;
    int i;

    for(i = 1; i <= 5 ; i++) {
        
        // Controllo in testa
        // Iterazione se i valori sono minori di 1 e maggiori di 5
        // L'input dell'utente è controllato affinchè inserisca solo valori compresi tra 1 e 5
        do{
            printf("Inserisci un valore: ");
            scanf("%d", &n);
        }while((n < 1) || (n > 5));

        somma = somma + n;
    }

    printf("Il risultato è %d\n", somma);
}