/*
Esercizio: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Funzione che prende in input un valore intero n e restituisce la sommatoria dei primi numeri n

Se n = 5 --> return della funzione = 15 (perché 1 + 2 + 3 + 4 + 5)

FUNZIONE 2:
Funzione che prende in input due valori interi (A, B) e restituisce la media tra i due valori inseriti

Se A = 5 e B = 6 --> return della funzione = 5.5000 (perché (5+6)/2)

*/


#include <stdio.h>

// Prototipo delle funzioni da creare
// Funzione 1
int sommatoria(int n);

// Funzione 2
float fmedia(int a, int b);

int main(){
    int n;
    int A, B;
    float media;
    int somma;

    // Funzione sommatoria()
    printf("Inserisci un numero intero n per calcolare la sommatoria dei primi n numeri interi: ");
    scanf("%d", &n);

    // Chiamata funzione sommatoria()
    somma = sommatoria(n);
    printf("Sono tornato nella funzione main().\n");
    printf("La sommatoria dei primi %d numeri interi è: %d\n", n, somma);

    // Chiamata funzione sommatoria()
    somma = sommatoria(10);
    printf("Sono tornato nella funzione main().\n");
    printf("La sommatoria dei primi %d numeri interi è: %d\n", 10, somma);

    // Chiamata funzione sommatoria()
    somma = sommatoria(100);
    printf("Sono tornato nella funzione main().\n");
    printf("La sommatoria dei primi %d numeri interi è: %d\n", 100, somma);

    // Funzione media()
    printf("Inserisci due numeri interi A e B per calcolare la loro media: ");
    scanf("%d %d", &A, &B);

    // Chiamata funzione fmedia()
    media = fmedia(A, B);
    printf("Sono tornato nella funzione main().\n");
    printf("La media tra %d e %d è: %.4f\n", A, B, media);

    // Chiamata funzione fmedia()
    media = fmedia(8, 10);
    printf("Sono tornato nella funzione main().\n");
    printf("La media tra %d e %d è: %.4f\n", 8, 10, media);

    // Chiamata funzione fmedia()
    media = fmedia(1, 6);
    printf("Sono tornato nella funzione main().\n");
    printf("La media tra %d e %d è: %.4f\n", 1, 6, media);
}

// Definizione delle funzioni da creare
// Funzione 1
int sommatoria(int n) {
    printf("Sono nella funzione sommatoria(): n=%d\n", n);
    int somma = 0;
    int i = 1;

    for(i = 1; i<=n; i++){
        somma += i; // somma = somma + i
    }
    
    // Restituisco il valore
    return somma;
}

// Funzione 2
float fmedia(int a, int b) {
    printf("Sono nella funzione fmedia(): a=%d b=%d\n", a, b);
    float media = (a+b) / 2.0;
    return media;
}