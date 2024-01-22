#include <stdio.h>
#include <stdlib.h>

#define DIM 50

int main() {
    // Nome del file da leggere
    char nome_file[] = "file_valori.txt";

    // Apre il file in modalità lettura ("r" sta per read)
    FILE *file = fopen(nome_file, "r"); // Puntatore del file aperto in sola lettura

    // Verifica se il file è stato aperto correttamente
    if (file != NULL) {
        // Variabili per tenere i valori
        char riga[DIM];
        int val;
        int somma = 0;

        // Legge e stampa ogni valore del file
        // fgets() = funzione che prende una stringa/quantitativo di byte dal file
        // char *fgets(char *str, int n, FILE *stream)
        // Ritorna puntatore diverso da NULL se la lettura va a buon fine, altrimenti torna un puntatore NULL
        while (fgets(riga, sizeof(riga), file) != NULL) {
            // int atoi(char *str)
            val = atoi(riga); // Conversione della stringa in valore numerico intero
            printf("%d\n", val); // Stamap del valore a teminale
            somma += val;
        }

        // ALTERNATIVA
        /* // Leggo i valori finché la funzione fscanf() ritorna 1, altrimenti se alla arriva all'EOF non torna 1
        while (fscanf(file, "%d", &val) == 1) {
            somma += val;
        }
        */
        printf("Il risultato della somma dei valori :%d\n", somma);
        // Chiude il file
        fclose(file);
    }
}
