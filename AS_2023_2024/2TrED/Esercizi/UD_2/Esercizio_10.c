#include <stdio.h>

// Esercizio 10
/* 
TESTO ESERCIZIO:
Creare un programma in C che pranda in input due valori (A e B) INTERI e POSITIVI ed eseguala
l'operazione di divisione tra il numero maggiore diviso quello minore utilizzando la 
sottrazione continua.
Il programma deve poi stampare il risultato della divisione.

ESEMPIO:
Se A = 10 e B = 54, dovrà fare B/A utilizzando la sottrazione continua.
Quindi B = 54 - A = 10 --> 44, poi 44 - 10 --> 34 e via dicendo...
Quindi il risultato sarà 5, in quanto 10 sta 5 volte nel valore 54, con il resto di 4.

N.B. La divisione deve essere fatta tra: (numero maggiore) / (numero minore)
*/

int main() {
    int A, B;
    int divisione = 0;
    int resto;
    int max, min;

    do{
        printf("Inserisci il valore di A e di B maggiori di 0: ");
        scanf("%d %d", &A, &B); 
    }while(A<=0 || B<=0); 
    // Noi vogliamo (A>0 && B>0) --> negandola risulta la condizione del do-while

    // Trovo il massimo ed il minimo tra i due numeri e li salvo il nuove variabili
    if (A > B) {
        max = A;
        min = B;
    }
    else {
        max = B;
        min = A;
    }

    while(max >= min) {
        divisione++; // Incremento il contatore 
        max = max - min;
    }

    resto = max; // Imposto il resto = ciò che rimane in max

    printf("%d/%d = %d con resto %d\n", A, B, divisione, resto);
}