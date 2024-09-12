#include <stdio.h>

int main() {
    // Nome del file da leggere
    char nome_file[] = "file_testo.txt";

    // Apre il file in modalità lettura ("r" sta per read)
    FILE *file = fopen(nome_file, "r");

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Indica un errore
    }

    // Legge e stampa ogni carattere del file
    char carattere;
    // EOF = End Of File
    while ((carattere = fgetc(file)) != EOF) { // Verifica se sono arrivato alla fine del file
        printf("%c", carattere);
    }

    // Alternativa
    /*
    carattere = fgetc(file);
    while (carattere != EOF) {
        printf("%c", carattere);
        carattere = fgetc(file);
    }
    */

    // Chiude il file
    fclose(file);
}
