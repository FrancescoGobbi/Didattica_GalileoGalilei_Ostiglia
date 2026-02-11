#include <stdio.h>

/**
 * @brief Funzione che prende in input il riferimento di tre variabili e calcola la media
 * 
 * @param *somma 
 * @param *count 
 * @param *media 
 */
void media(int *somma, int *count, float *media);

void calcoloMedia(int *n, int *somma, float *media);

int main() {
    int somma = 35;
    int count = 5;
    float media_result = 0.0;

    media(&somma, &count, &media_result);

    printf("La somma è: %d\n", somma);
    printf("Il count è: %d\n", count);
    printf("La media è: %.2f\n", media_result);

    int n = 4;
    somma = 0; // Reset della somma per il nuovo calcolo
    media_result = 0.0; // Reset della media per il nuovo calcolo
    calcoloMedia(&n, &somma, &media_result);

    printf("La somma dei numeri inseriti è: %d\n", somma);
    printf("La media dei numeri inseriti è: %.2f\n", media_result);
}

void media(int *somma, int *count, float *media) {
    // Calcolo della media
    *media = (float)(*somma) / (*count);
}  

void calcoloMedia(int *n, int *somma, float *media) {
    int i, num;
    for (i = 1; i <= *n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        *somma += num; // Aggiorna la somma con il nuovo numero
    }
    *media = (float)(*somma) / (*n); // Calcola la media
}