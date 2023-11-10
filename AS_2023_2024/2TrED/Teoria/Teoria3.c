#include <stdio.h>

int main() {
    // Creo le variabili
    int A, B; 

    // Stampa per un messaggio
    printf("Inserisci due valori in input: ");
    
    // Prendo in input i valori
    scanf("%d %d", &A, &B);

    // Selezione
    if( A > B ) { // Caso VERO  
        printf("Il valore maggiore è: %d\n", A);
        // N.B. lo \n permette di andare a capo in una stampa
        // Quindi oltre alla stampa del messaggio, poi si andrà a capo
    }
    else { // Caso FALSO
        printf("Il valore maggiore è: %d\n", B);
    }
}