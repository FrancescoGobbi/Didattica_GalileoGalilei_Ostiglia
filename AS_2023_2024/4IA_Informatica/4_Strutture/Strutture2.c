#include <stdio.h>
#include <math.h>

// Struttura Punto --> punto del Piano Cartesiano
// La struttura ha due parametri
typedef struct {
    int x; // Ascissa
    int y; // Ordinata
}Punto;

/**
 * @brief Funzione che prende due punti del Piano Cartesiano e restituisce la distanza tra i due punti
 * @param int Ascissa punto 1
 * @param int Ordinata punto 1
 * @param int Ascissa punto 2
 * @param int Ordinata punto 2
 * 
 * @return float 
 */
float distanzaDuePunti(int, int, int, int);

/**
 * @brief Funzione che prende due punti del Piano Cartesiano, utilizzando i puntatori
 * e restituisce la distanza tra i due punti
 * @param Punto* --> Puntatore al punto 1
 * @param Punto* --> Puntatore al punto 2
 * 
 * @return float 
 */
float distanzaDuePuntiPuntatori(Punto *, Punto *);

int main() {
    // Dichiarazione di una variabile di tipo 'Punto' (struttura di tipo 'Punto')
    Punto punto1;
    Punto punto2;

    printf("Inserisci il primo punto:\n");
    printf("Inserisci l'ascissa: ");
    scanf("%d", &(punto1.x));
    printf("Inserisci l'ordianta: ");
    scanf("%d", &(punto1.y));

    printf("\nInserisci il secondo punto:\n");
    printf("Inserisci l'ascissa: ");
    scanf("%d", &(punto2.x));
    printf("Inserisci l'ordianta: ");
    scanf("%d", &(punto2.y));

    printf("Calcolo la distanza tra i due punti con passaggio di valori...\n"); 
    printf("La distanza tra i due punti è: %f\n", distanzaDuePunti(punto1.x, punto1.y, punto2.x, punto2.y));

    printf("Calcolo la distanza tra i due punti con passaggio di riferimento...\n"); 
    printf("La distanza tra i due punti è: %f\n", distanzaDuePuntiPuntatori(&punto1, &punto2));
}

float distanzaDuePunti(int x1, int y1, int x2, int y2) {
    // Calcolo distanza tra due punti
    return pow(pow((x1-x2),2) + pow((y1-y2), 2), 0.5);
}

float distanzaDuePuntiPuntatori(Punto *p1, Punto *p2) {
    // Calcolo distanza tra due punti
    /*
    N.B. struct Punto *p1 è un puntatore alla prima struttura che abbiamo passato per riferimento
    Per accedere ai campi delle struttura passate come riferimento si deve fare:
    "nomeDelPuntatoreDellaStruttura"->"campoDaAccedereDellaStruttura"
    */
   
    /*
    Ovvero:
    float quadratox = pow((p1->x - p2->x),2);
    float quadratoy = pow((p1->y - p2->y), 2);
    float somma = quadratox + quadratoy;
    return pow(somma,0,5);
    */

    return pow(pow((p1->x - p2->x),2) + pow((p1->y - p2->y), 2), 0.5);
}