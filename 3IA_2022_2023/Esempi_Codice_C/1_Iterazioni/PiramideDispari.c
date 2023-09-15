#include <stdio.h>

int main() {
    int n;
    int i, j; // i = righe; j = colonne
    int spazi;
    int asterischi = 1; // Numero di asterischi uguale ad 1
    // nella prima riga
    int righe;

    // Controllo sull'input dispari
    do{
        printf("Inserisci un numero dispari: ");
        scanf("%d", &n);
    }while(n%2==0); // Continuo finché è pari

    righe = (n/2) + 1; // Righe per arrivare alla fine della piramide
    for(i=1; i<=righe; i++) { // For per le righe
        // Inizializzo la variabile per gli spazi
        spazi = (n-asterischi)/2; // Prendo solo la parte intera
        
        // For per gli spazi
        for(j=1; j<=spazi; j++) {
            printf(" ");
        }
        
        // For per gli sterischi da fare sulla riga
        for(j = 1; j<=asterischi; j++) {
            printf("*");
        }
        
        // Fine della riga
        asterischi = asterischi + 2; // Incremento gli asterischi da fare ad ogni riga
        printf("\n"); // vado a capo
    }
}