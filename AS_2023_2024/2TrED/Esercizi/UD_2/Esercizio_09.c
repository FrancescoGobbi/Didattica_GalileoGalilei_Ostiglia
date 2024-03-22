#include <stdio.h>

// Esercizio 9
/* 
TESTO ESERCIZIO:   
Creare un programma in C che prenda in input due valori (A e B) maggiori di 0.
Il programma eseguirà il programma eseguirà il prodotto tra A e B utilizzando
la somma ripetuta e stampare il risultato.

ESEMPIO: Se A = 5 e B = 3, il programma dovrà fare quindi 5 + 5 + 5 = 15
*/

int main() {

    int A, B;
    int prodotto = 0;
    int i; // Variabile per contrare i cicli

    do{
        printf("Inserisci il valore di A: ");
        scanf("%d", &A); 
    }while(A<=0);

    do{
        printf("Inserisci il valore di B: ");
        scanf("%d", &B); 
    }while(B<=0);

    for(i=1; i<=B; i++) {
        prodotto = prodotto + A;
    }

    printf("%d * %d = %d\n", A, B, prodotto);
}