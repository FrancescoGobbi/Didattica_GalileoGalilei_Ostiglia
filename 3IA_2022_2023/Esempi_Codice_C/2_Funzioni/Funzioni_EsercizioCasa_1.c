/*
1) Creare una funzione in C che prende in input un valore n (n>0).
La funzione richiede in input n-valori interi. 
La funzione restituisce la media dei soli valori pari.
2) Funzione che prende in input un valore n (n>0). 
La funzione disegna il triangolo di Floyd con altezza del triangolo n.
*/

#include <stdio.h>


/**
 * @brief Funzione che prende un valore intero n in input, richiede
 * all'utente n-valori interi e calcola media dei soli valori pari.
 * 
 * @param n 
 * @return float 
 */
float mean(int n);

/**
 * @brief Funzione che stampa il triangolo di Floyd con altezza n.
 * 
 * @param n 
 */
void floyd(int n);

int main() {
    int n;
    
    do{
        printf("Inserisci un valore n: ");
        scanf("%d", &n); 
    }while(n<0 || n>10);

    float media = mean(n);
    printf("La media dei valori inseriti è: %f\n", media);

    floyd(n);
}

float mean(int n) {
    int i;
    int val;
    int cnt = 0;
    //float media = 0;
    int media = 0;
    for(i=0; i<n; i++) {
        printf("Inserisci un valore numerico: ");
        scanf("%d", &val);
        if (val%2==0) {
            media += val;
            cnt++;
        }
    }
    return (float)media/cnt;
}

void floyd(int n) {
    int i, j; // I per le righe, j per le colonne
    int val = 1;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", val);
            val++;
        }
        printf("\n"); // Vado a capo
    }
}