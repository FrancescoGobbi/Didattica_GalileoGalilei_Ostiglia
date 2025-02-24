/*
Condizione 3
Creare un programma in C che prenda in input da parte dell'utente un valore intero (numero).
Il programma deve verificare se il numero è pari E maggiore di 20.
Se il numero è pari e maggiore di 20, il programma deve stampare "Il numero X è pari e maggiore di 20."
Se NON rispetta le condizioni deve stampare "Il numero X NON rispetta le condizioni"
*/

#include <stdio.h>

int main() {
    int numero;

    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Utilizzo di un solo if con due condizioni
    // Verifica se il numero è pari e maggiore di 20 utilizzando un solo if con due condizioni
    if (numero % 2 == 0 && numero > 20) {
        // Se il numero è pari e maggiore di 20
        printf("Il numero %d è pari e maggiore di 20.\n", numero);
    }
    else {
        // Se il numero NON è pari e maggiore di 20
        printf("Il numero %d è dispari.\n", numero);
    }
}