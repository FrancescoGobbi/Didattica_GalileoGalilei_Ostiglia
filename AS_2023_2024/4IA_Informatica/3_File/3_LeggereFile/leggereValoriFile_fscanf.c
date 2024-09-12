#include <stdio.h>

int main() {
    // Nome del file da leggere
    char nome_file[] = "file_valori.txt";

    // Apre il file in modalità lettura ("r" sta per read)
    FILE *file = fopen(nome_file, "r"); // Puntatore del file aperto in sola lettura

    // Verifica se il file è stato aperto correttamente
    if (file != NULL) {
        // Variabili per tenere i valori
        int val;
        int somma = 0;

        // Legge e stampa ogni valore del file
        // fscanf() = funzione che prende una stringa/parola/Valore dal file
        // int fscanf(FILE *stream, char *format, variables)
        // feof() = funzione che verifica se il puntatore del file è arrivato ad EOF
        while (!feof(file)) {
            fscanf(file, "%d", &val); // Prendo parola per parola

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
