#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int n = 5;
    int massimo = 3;

    int v1[5];
    int v2[5];

    int uguali = 0;
    long tentativi = 0;

    clock_t inizio, fine;
    double tempo;

    srand(time(NULL));

    // Creazione del primo vettore con numeri casuali
    printf("Primo vettore:\n");

    for (i = 0; i < n; i++) {
        v1[i] = rand() % massimo;
        printf("%d ", v1[i]);
    }

    printf("\n\n");

    // Inizio conteggio tempo, fuori dal loop
    inizio = clock();

    // Il ciclo continua finché i due vettori non sono uguali
    while (!uguali) {
        tentativi++;

        // Creazione del secondo vettore con numeri casuali
        for (i = 0; i < n; i++) {
            v2[i] = rand() % massimo;
        }

        // Suppongo inizialmente che i vettori siano uguali
        uguali = 1;

        // Controllo se i due vettori sono uguali
        for (i = 0; i < n; i++) {
            if (v1[i] != v2[i]) {
                uguali = 0;
            }
        }
    }

    // Fine conteggio tempo, fuori dal loop
    fine = clock();

    tempo = (double)(fine - inizio) / CLOCKS_PER_SEC;

    printf("Secondo vettore trovato uguale:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n\n");
    printf("I due vettori sono uguali.\n");
    printf("Numero di tentativi: %ld\n", tentativi);
    printf("Tempo necessario: %f secondi\n", tempo);
}