#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0)
e stampi la seguante figura:

ESEMPIO: se n = 4
La stampa dovrà essere:
* * * * *  Riga 1 
+ + + + +  Riga 2
* * * * *  Riga 3
+ + + + +  Riga 4

N.B. La stampa dei caratteri è a righe alternate!!!

*/

int main() {
    int n;
    int i; // Per le righe della figura
    int j; // Per le colonne della figura

    do{
        printf("Inserisci un numero n: ");
        scanf("%d", &n);
    }while(n<=0);

    printf("Stampo la figura:\n");
    
    // Doppia iterazione annidata
    for(i=1; i<=n; i++) { // For per le righe
        // Creo le righe alternate
        if(i%2 == 0) { // Se la riga è PARI
            for(j=1; j<=n; j++) { // For per le colonne
                printf(" + ");
            }
        }
        else{ // Se la riga è DISPARI
        for(j=1; j<=n; j++) { // For per le colonne
                printf(" * ");
            } 
        }
        // Vado a capo
        printf("\n");
    } // Fine for delle righe

}