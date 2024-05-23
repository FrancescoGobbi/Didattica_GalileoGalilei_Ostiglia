#include <stdio.h>

/*
Creare un programma in C che prenda in input un 
valore n (n>0) e che stampi il seguente disegno:

Se n = 5:
$ 0 $ 0 $
$ 0 $ 0 $
$ 0 $ 0 $
$ 0 $ 0 $
$ 0 $ 0 $

N.B. Notate che il disegno è quadrato.
*/

int main() {
    int i, j, n;

    do{
        printf("Inserisci un numero n per le righe: ");
        scanf("%d", &n);
    }while(n<=0);

    for(i=1; i<=n; i++) { // Per le righe
        for(j=1; j<=n; j++) { // Per le colonne
            if(j%2==1) { // Caso per $ (caso dispari)
                printf(" $ ");
            }
            else { // Caso per 0 (caso pari)
                printf(" 0 ");
            }
        } // Fine delle colonne
        printf("\n"); // Vado a capo
    } // Fine delle righe
}