#include <stdio.h>

int main() {
    // Nome del file da leggere
    char nome_file[] = "file_testo.txt";

    // Apre il file in modalità lettura ("r" sta per read)
    FILE *file = fopen(nome_file, "r"); // Puntatore del file aperto in sola lettura

    // Verifica se il file è stato aperto correttamente
    /*
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Indica un errore
    }
    */

    if (file != NULL) {
        // Buffer/memoria per leggere una riga alla volta
        char riga[1024];

        // Legge e stampa ogni riga del file
        // fscanf() = funzione che prende una stringa/parola dal file
        // int fscanf(FILE *stream, char *format, variables)
        // feof() = funzione che verifica se il puntatore del file è arrivato ad EOF in quel momento
        while (!feof(file)) {
            fscanf(file, "%s", riga); // Prendo parola per parola

            printf("%s ", riga); // Stampa nel terminale
        }
        printf("\n");
        // Chiude il file
        fclose(file);
    }
}
