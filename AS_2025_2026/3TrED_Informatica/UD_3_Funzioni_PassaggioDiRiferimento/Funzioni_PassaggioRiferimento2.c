#include <stdio.h>


/**
 * @brief Funzione che prende in input il riferimento di tre variabili e calcola la media
 * 
 * @param *somma 
 * @param *count 
 * @param *media 
 */
void media(int *somma, int *count, float *media);

int main() {
    int somma = 35;
    int count = 5;
    float media_result = 0.0;

    media(&somma, &count, &media_result);

    printf("La somma è: %d\n", somma);
    printf("Il count è: %d\n", count);
    printf("La media è: %.2f\n", media_result);
}

void media(int *somma, int *count, float *media) {
    // Calcolo della media
    *media = (float)(*somma) / (*count);
}  