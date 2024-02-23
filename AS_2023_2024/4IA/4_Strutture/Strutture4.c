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
 * @brief Funzione che prende in input il nome di un file,
 * chiede all'utente dei valori di x e di y,
 * quindi i campi della struttura Punto
 * e salva il punto nel file
 * 
 * @param char [] --> Nome del file .dat dove salvare il punto
 */
void inputPunto(char[]);

/**
 * @brief Funzione che prende in input il nome di un file,
 * legge due punti del file e richiama la funzione distanza tra due punti
 * 
 */
void readPunto(char []);

int main() {
    // Rimuovo il file .dat
    remove("Punti.dat");

    // Prendo in input i punti
    inputPunto("Punti.dat");
    inputPunto("Punti.dat");

    // Leggo i punti dal file
    readPunto("Punti.dat");
}

void inputPunto(char fileName[]) {
    // Dichiarazione di un puntatore ad una struttura di tipo Punto
    Punto* point;
    // Alloco memoria
    point = malloc(sizeof(Punto));

    // Apertura del file in "append" --> "a"
    FILE* fpOut = fopen(fileName, "aw");

    printf("Inserisci il punto:\n");
    printf("Inserisci l'ascissa: ");
    scanf("%d", &(point->x));
    fflush(stdin);
    printf("Inserisci l'ordianta: ");
    scanf("%d", &(point->y));
    fflush(stdin);

    // Scrivo i punti sul file
    printf("Scrittura su file...\n\n");
    fwrite(point, sizeof(Punto), 1, fpOut);
    fclose(fpOut);
}

void readPunto(char fileName[]) {
    // Dichiarazione di un puntatore ad una struttura di tipo Punto
    Punto* point1;
    Punto* point2;
    // Alloco memoria
    point1 = malloc(sizeof(Punto));
    point2 = malloc(sizeof(Punto));

    // Apertura del file in "append" --> "a"
    FILE* fpIn = fopen(fileName, "rw");

    fread(point1, sizeof(Punto), 1, fpIn);
    fread(point2, sizeof(Punto), 1, fpIn);

    // Stampo i punti
    printf("I punti sono:\n");
    printf("Punto 1: (%d, %d)\n", point1->x, point1->y);
    printf("Punto 2: (%d, %d)\n", point2->x, point2->y);

    printf("Calcolo la distanza tra i due punti con passaggio di riferimento...\n"); 
    printf("La distanza tra i due punti è: %f\n", distanzaDuePuntiPuntatori(point1, point2));
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