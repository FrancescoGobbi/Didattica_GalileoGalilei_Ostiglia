#include <stdio.h>

int main() {
    // ES 1
    int A, B, risultato;
    int *pA, *pB; // Puntatori per A e B

    //Creare una figura di dimensioni A x B con contorno di asterischi e parte interna di 'A'
    do {
        printf("Inserisci due numeri per l'esercizio 1 (A e B, entrambi > 0): ");
        scanf("%d %d", &A, &B);
    } while (A <= 0 || B <= 0);

    // Stampa della figura per l'esercizio 1
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < A; j++) {
            if (i == 0 || i == B - 1 || j == 0 || j == A - 1) {
                printf("* ");
            } else {
                printf("A ");
            }
        }
        printf("\n");
    }

    // ES 2
    //Divisione di A/B tramite sottrazioni ripetute usando i puntatori
    pA = &A;
    pB = &B;
    do {
        printf("\nInserisci due numeri per l'esercizio 2 (A > B > 0): ");
        scanf("%d %d", pA, pB);
    } while (A <= B || B <= 0);


    risultato = 0; // Variabile risultato
    int tempA = *pA;
    while (tempA >= *pB) {
        tempA -= *pB; // Sottrazione ripetuta
        risultato++;
    }
    printf("Il risultato della divisione e': %d\n", risultato);

    // ES 3
    //Stampare una figura alternando 'A' e 'U' e ordinare i valori in modo decrescente
    do {
        printf("\nInserisci due numeri per l'esercizio 3 (entrambi > 0): ");
        scanf("%d %d", pA, pB);
    } while (A <= 0 || B <= 0);

    // Ordinamento: pA deve puntare al valore maggiore, pB al valore minore
    if (*pA < *pB) {
        int temp = *pA;
        *pA = *pB;
        *pB = temp;
    }

    // Stampa della figura per l'esercizio 3
    for (int i = 0; i < *pB; i++) {
        for (int j = 0; j < *pA; j++) {
            if (j % 2 == 0) {
                printf("A ");
            } else {
                printf("U ");
            }
        }
        printf("\n");
    }
}
