/*
Creare un codice in C in cui dato un array di dimensione fissata, vengono inseriti in modo randomico i valori
al suo interno tra due valori n ed m, presi dall'utente ed entrmabi strettamente positivi e con n<m.

Il codice deve trovare il valore minimo tra i valori dell'array e stamparlo a video.
*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define dim 10

int main(){
    int array[dim];
    int i, min;
    srand(time(0));
    int n, m;
    do{
        printf("Inserisci il valore minimo (n): ");
        scanf("%d", &n);
        printf("Inserisci il valore massimo (m): ");
        scanf("%d", &m);
    } while(n <= 0 || m <= 0 || n >= m);

    for (i = 0; i < dim; i++) {
        array[i] = rand() % (m - n + 1) + n;
    }

    min = array[0];
    
    for (i = 1; i < dim; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("Il valore minimo è: %d\n", min);
}