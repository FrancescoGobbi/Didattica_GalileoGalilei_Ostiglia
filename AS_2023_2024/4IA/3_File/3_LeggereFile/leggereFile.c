#include <stdio.h>

int main() {
    // Nome del file da leggere
    char nome_file[] = "prova.txt";

    // Apre il file in modalità lettura ("r" sta per read)
    FILE *file = fopen(nome_file, "r");

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Indica un errore
    }

    // Buffer/memoria per leggere una riga alla volta
    char riga[1024];

    // Legge e stampa ogni riga del file
    while (fgets(riga, sizeof(riga), file) != NULL) {
        printf("%s", riga); // Nella riga del file c'è già lo '\n'
    }

    // Chiude il file
    fclose(file);
}
