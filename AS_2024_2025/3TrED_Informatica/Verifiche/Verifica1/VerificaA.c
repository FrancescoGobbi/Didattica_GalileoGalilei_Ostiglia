#include <stdio.h>

int main() {

    // ES 1
    int A, B;
    int i, j; // Per i contatori delle iterazioni
    
    // Controllo che A e B siano strettamente maggiori di 0
    do {
        printf("Inserisci un valore A e B: ");
         scanf("%d %d", &A, &B);
    }while(A <= 0 || B <= 0);
    
    // Generazione della figura
    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            // Stampa alternata di * e Y
            if ((i + j) % 2 == 0) {
                printf("*");
            } else {
                printf("Y");
            }
        }
        // Nuova riga dopo ogni riga stampata
        printf("\n");
    }

    // ES 2
    A = 0;
    B = 0;
    int risultato = 0;
    int *pA = &A, *pB = &B, *pRisultato = &risultato;
    
    // Controlla che A sia maggiore di B
    do {
        printf("Inserisci un valore A e B: ");
         scanf("%d %d", pA, pB);
    }while(B <= 0 || A <= B);
    
    // Esegui la divisione usando la sottrazione ripetuta
    while (*pA >= *pB) {
        *pA = *pA - *pB;  // Sottrai B da A
        (*pRisultato)++;      // Incrementa il risultato
    }
    
    // Stampa il risultato
    printf("Il risultato della divisione è: %d\n", *pRisultato);

    // ES 3
    int tmp;
    *pA = &A;
    *pB = &B; 
    int *pTmp = &tmp;

    // Controllo che A e B siano strettamente maggiori di 0
    do {
        printf("Inserisci un valore A e B: ");
         scanf("%d %d", pA, pB);
    }while(*pA <= 0 || *pB <= 0);

    // Scambio dei valori per garantire che A contenga il valore più piccolo
    if (*pA > *pB) {
        *pTmp = *pA;
        *pA = *pB;
        *pB = *pTmp;
    }

    // Stampa della figura
    for (i = 0; i < *pA + *pB; i++) {
        if (i % 2 == 0) {
            // Riga con la lettera 'A'
            for (int j = 0; j < *pB; j++) {
                printf("A ");
            }
        } else {
            // Riga con la lettera 'U'
            for (int j = 0; j < *pB; j++) {
                printf("U ");
            }
        }
        printf("\n");
    }
}