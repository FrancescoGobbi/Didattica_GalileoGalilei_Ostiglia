#include <stdio.h>

// Esercizio 11
/* 
TESTO ESERCIZIO:
Creare un programma in C che pranda in input due valori (A e B) INTERI e compresi tra 2 e 8.
Il programma dovrà fare l'elevamento a potenza di A^B (A elevato al valore di B).
Il programma dovrà stampare il risultato.

N.B. NON usare la libreria <math.h> che al suo interno ha la funzione pow(base, esponte) e 
che quindi può dare subito il risultato.

ESEMPIO:
Se A = 4 e B = 6, si dovrà fare 4 * 4 * 4 * 4 * 4 * 4 = 4096.
Quindi ho moltiplicato la base tante volte quanto è il valore dell'esponente.
*/

int main() {
    int A, B;
    int potenza = 1;
    int i; // Contatore

    do{
        printf("Inserisci il valore di A: ");
        scanf("%d", &A); 
    }while(A<2 || A>8);
    // Voglio: (A>=2 && A<=8)
    // NON voglio: (A<2 || A>8) <-- condizione negata rispetto a quella che voglio

    do{
        printf("Inserisci il valore di B: ");
        scanf("%d", &B); 
    }while(B<2 || B>8);

    // Come posso unire i due do-while (quindi avere l'input di A e B insieme)?
    /*
    VOGLIAMO: (A>=2 && A<=8) && (B>=2 && B<=8)
    NON VOGLIAMO: (A<2 || A>8) || (B<2 || B>8) 
    do{
        scanf("%d %d", &A, &B);
    }while((A<2 || A>8) || (B<2 || B>8));

    SE A = 1 e B = 6
    1 --> VERO , 0 --> FALSO
    (A<2 || A>8) || (B<2 || B>8)
    (1   ||  0 ) || ( 0  ||  0 )
         1       ||       0
                  1
    */

    for (i = 1; i <= B; i++) {
        potenza = potenza * A;
    }

    printf("%d^%d = %d\n", A, B, potenza);
}