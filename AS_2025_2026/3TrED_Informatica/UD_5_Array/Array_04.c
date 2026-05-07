/*
Codice in C in cui si crea un vettore di dimensione fissa e dove vengono generati in modo 
randomico i valori al suo interno compresi tra n ed m, presi in input dall'utente ed entrambi strettamente positivi, con n<m.
Il codice stamperà poi il vettore.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define dim 10

int main() {
    int vet[dim]; // Creazione di un array di interi di dimensione 10
    int i; // Dichiarazione della variabile i per il ciclo

    // Inizializzazione del generatore di numeri casuali con il tempo attuale
    srand(time(0)); // Questo è il seed o seme per la generazione dei numeri casuali, 
    //utilizzando il tempo attuale per garantire che i numeri siano diversi ogni volta che si esegue il programma

    // Ciclo for per riempire l'array con valori randomici compresi tra n ed m
    int n, m;
    do{
        printf("Inserisci il valore minimo (n): ");
        scanf("%d", &n);
        printf("Inserisci il valore massimo (m): ");
        scanf("%d", &m);
        
    } while(n <= 0 || m <= 0 || n >= m);

    for(i = 0; i < dim; i++) {
        vet[i] = rand() % (m - n + 1) + n; // Genera un numero casuale tra n e m
        // rand() % (m - n + 1) genera un numero tra 0 e (m - n), quindi aggiungendo n otteniamo un numero tra n e m
    }

    // Stampa del vettore
    printf("Il vettore generato è: ");
    for(i = 0; i < dim; i++) {
        printf("%d ", vet[i]); // Stampa di ogni elemento dell'array seguito da uno spazio
    }
    printf("\n"); // Stampa di una nuova linea alla fine del vettore
}