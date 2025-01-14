/*
Creare un programma in C che prenda in input tre valori interi.
Il programma esegua la media tra i tre valori e verifichi se il valore
della media positiva o negativa, in termini di valutazione scolastica.
Stampare o dire come messaggio se la media è positiva/sufficiente o non.
*/

#include <stdio.h> // Inclusione della libreria standard per input e output

int main() {
    // Dichiarazione delle variabili
    int numero1, numero2, numero3;
    float media;

    printf("Inserisci 3 voti: ");
    // scanf("%d", &numero1);
    // scanf("%d", &numero2);
    // scanf("%d", &numero3);
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    media = (float)(numero1 + numero2 + numero3) / 3;

    if( media >= 6 ) {
        printf("La media è positiva\n");
    }
    else {
        printf("La media NON è positiva\n");
    }
}