/*
Triangolo speciale con input n, n compreso tra 1 e 10

ES se n = 5

1 2 3 4 5
- 2 3 4 5
- - 3 4 5
- - - 4 5
- - - - 5
*/
#include <stdio.h>
int main() {
    int n;
    int i, j; // i = righe, j = colonne
    int trattini = 0; // Variabile per il conteggio dei trattini
    char carattere = '-';

    do {
        printf("Inserisci un valore tra 1 e 10: ");
        scanf("%d", &n);
    }while(n<1 || n>10);

    i = 1;
    while(i <= n) { // Per le righe
        j = 1; // Inizio alla colonna 1
        
        // Stampo i trattini
        while(j <= trattini) {
            printf("%3c", carattere);
            j++;
        }

        // Stampo i numeri
        while(j <= n) {
            printf("%3d", j);
            j++;
        }

        // Vado a capo
        printf("\n"); 
        // Incremento le righe
        i++;
        // Incremento i trattini per la riga successiva
        trattini++;
    }
}
