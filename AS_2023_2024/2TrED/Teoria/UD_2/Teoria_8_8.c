#include <stdio.h>

/*
Creare un programma in C che prenda in input un 
valore n (n>0) e che stampi il seguente disegno numerico:

Se n = 5:
5 10 15 20 25
50 45 40 35 30
55 60 65 70 75
100 95 90 85 80
105 110 115 120 125

N.B. Notate che il disegno è quadrato.
*/

int main() {
    int n;
    int i; // Per le righe
    int j; // Per le colonne
    int val; // Variabiel di stampa

    do{
        printf("Inserisci un numero n per le righe: ");
        scanf("%d", &n);
    }while(n<=0);
    
    val = n;
    
    for(i=1; i<=n; i++) {
        if (i%2 == 0) {
            for(j=1;j<=n;j++) {
                printf("%4d", val);
                val = val - n;
            }
            val = val + n;
        }
        else {
            for(j=1;j<=n;j++) {
                printf("%4d", val);
                val = val + n;
            }
            val = val - n;
        }
        printf("\n");
        val = val + (n*n);
    }
}