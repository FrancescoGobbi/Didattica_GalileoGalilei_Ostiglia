/*
Scrivere una funzione in linguaggio C che riceva per riferimento:
• una variabile intera n, che rappresenta il numero di valori da inserire;
• una variabile float media, nella quale salvare il risultato finale.
La funzione deve calcolare, utilizzando i puntatori, la media aritmetica di n valori interi inseriti dall’utente
da tastiera.
*/

#include <stdio.h>

void calcolaMedia(int *n, float *media);

int main() {
    int n;
    float media;

    printf("Inserisci il numero di valori da inserire: ");
    scanf("%d", &n);

    // Chiamata alla funzione per calcolare la media
    calcolaMedia(n, &media);

    printf("La media aritmetica dei %d valori inseriti è: %.2f\n", n, media);
}

void calcolaMedia(int *n, float *media) {
    int somma = 0;
    int valore;

    for (int i = 0; i < *n; i++) {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &valore);
        somma += valore;
    }

    // Calcoliamo la media e la salviamo nella variabile puntata da media
    *media = (float)somma / *n;
}