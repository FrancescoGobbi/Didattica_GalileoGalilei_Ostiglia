#include <stdio.h>

int main() {
    // ES 1
    int A, B, risultato = 0;
    int *pA, *pB; // Puntatori per A e B

    //Creare una figura di dimensioni B x A con caratteri # e *
    do {
        printf("Inserisci due numeri per l'esercizio 1 (A e B, entrambi > 0): ");
        scanf("%d %d", &A, &B);
    } while (A <= 0 || B <= 0);

    // Stampa della figura per l'esercizio 1
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < A; j++) {
            if ((i + j) % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    // ES 2
    //Moltiplicare A * B usando solo la somma ripetuta e puntatori
    pA = &A;
    pB = &B;
    do {
        printf("\nInserisci due numeri per l'esercizio 2 (A > B > 0): ");
        scanf("%d %d", pA, pB);
    } while (A <= B || B <= 0);


    risultato = 0; // Variabile risultato
    for (int i = 0; i < *pB; i++) {
        risultato += *pA; // Somma ripetuta di A per B volte
    }
    printf("Il risultato della moltiplicazione e': %d\n", risultato);

    // ES 3
    //Stampare una figura alternando righe di R e B dopo aver ordinato i valori
    do {
        printf("\nInserisci due numeri per l'esercizio 3 (entrambi > 0): ");
        scanf("%d %d", pA, pB);
    } while (A <= 0 || B <= 0);

    // Ordinamento: pA deve puntare al valore minore, pB al valore maggiore
    if (*pA > *pB) {
        int temp = *pA;
        *pA = *pB;
        *pB = temp;
    }

    // Stampa della figura per l'esercizio 3
    for (int i = 0; i < *pB; i++) {
        for (int j = 0; j < *pA; j++) {
            if (i % 2 == 0) {
                printf("R ");
            } else {
                printf("B ");
            }
        }
        printf("\n");
    }
}