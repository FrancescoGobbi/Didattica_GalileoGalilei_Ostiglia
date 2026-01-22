#include <stdio.h>

/*
Crea una funzione in C che riceve in ingresso un numero intero positivo n.
La funzione deve contare tutte le coppie di numeri interi positivi (i, j) tali che:
i <= i <= n e j <= n e i + j e (i, j) sia una coppia coprima.

Dicasi coppia coprima una coppia di numeri interi positivi (a, b) tali che il loro massimo comun divisore sia 1.

ESEMPIO: se n = 4, le coppie coprime sono:
(1,1), (1,2), (1,3), (1,4),
(2,1), (2,3),
(3,1), (3,2), (3,4),
(4,1), (4,3)
Totale coppie coprime = 11. 

*/
int coppie_coprime(int n);

int main() {

    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    int coppie = coppie_coprime(numero);
    printf("Il numero %d ha %d coppie coprime.\n", numero, coppie);
}

int coppie_coprime(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Calcolo il massimo comun divisore (MCD) di i e j
            int a = i;
            int b = j;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int mcd = a;

            // Se il MCD è 1, allora (i, j) è una coppia coprima
            if (mcd == 1) {
                count++;
            }
        }
    }

    return count;
}