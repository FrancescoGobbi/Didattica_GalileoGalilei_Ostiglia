#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Struttura Punto --> punto del Piano Cartesiano
// La struttura ha due parametri
typedef struct {
    int x; // Ascissa
    int y; // Ordinata
}Punto;

/**
 * @brief Funzione che prende due punti del Piano Cartesiano, utilizzando i puntatori
 * e restituisce la distanza tra i due punti
 * @param Punto* --> Puntatore al punto 1
 * @param Punto* --> Puntatore al punto 2
 * 
 * @return float 
 */
float distanzaDuePuntiPuntatori(Punto *, Punto *);

/**
 * @brief Funzione che prende in input i valori di un punto (x ed y)
 * 
 * @param Punto * --> Puntatore alla struttura punto
 */
void inputPunto(Punto *);

int main() {
    // Dichiarazione di una variabile di tipo 'Punto' (struttura di tipo 'Punto')
    Punto* punto1;
    Punto* punto2;
    FILE* fpOut;
    FILE* fpIn;
    
    // Alloco la memoria per le due strutture puntate
    punto1 = malloc(sizeof(Punto));
    punto2 = malloc(sizeof(Punto));
    
    // Apro il file binario in scrittura
    fpOut = fopen("Punti.dat", "wb");

    // Prendo in input i punti
    inputPunto(punto1);
    inputPunto(punto2);

    // Scrivo i punti sul file
    printf("Scrittura su file...\n\n");
    fwrite(punto1, sizeof(Punto), 1, fpOut);
    fwrite(punto2, sizeof(Punto), 1, fpOut);

    // Chiudo il file per la scrittura
    fclose(fpOut);

    // Apro il file  binario in lettura
    fpIn = fopen("Punti.dat", "rb");

    // Leggo i punti dal file
    printf("Leggo i dati del file...\n\n");
    fread(punto1, sizeof(punto1), 1, fpIn);
    fread(punto2, sizeof(punto1), 1, fpIn);

    printf("Calcolo la distanza tra i due punti con passaggio di riferimento...\n"); 
    printf("La distanza tra i due punti è: %f\n", distanzaDuePuntiPuntatori(punto1, punto2));
}

void inputPunto(Punto * punto) {
    printf("Inserisci il punto:\n");
    printf("Inserisci l'ascissa: ");
    scanf("%d", &(punto->x));
    fflush(stdin);
    printf("Inserisci l'ordianta: ");
    scanf("%d", &(punto->y));
    fflush(stdin);
}

float distanzaDuePuntiPuntatori(Punto *p1, Punto *p2) {
    // Calcolo distanza tra due punti
    /*
    N.B. struct Punto *p1 è un puntatore alla prima struttura che abbiamo passato per riferimento
    Per accedere ai campi delle struttura passate come riferimento si deve fare:
    "nomeDelPuntatoreDellaStruttura"->"campoDaAccedereDellaStruttura"
    */
    return pow(pow((p1->x - p2->x),2) + pow((p1->y - p2->y), 2), 0.5);
}