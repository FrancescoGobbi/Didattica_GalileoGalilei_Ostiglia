#include <stdio.h>

int main() {
    // Nome del file
    char nome_file[] = "prova.txt";

    // Messaggio da scrivere nel file
    char messaggio[] = "Questo è un semplice messaggio.";

    // Apre il file in modalità scrittura ("w" sta per write)
    FILE *file = fopen(nome_file, "w"); // Puntatore al file

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Indica un errore
    }

    // Scrive il messaggio nel file
    // int fprintf(FILE *stream, char *formato, argomenti ...)
    fprintf(file, "%s\n", messaggio);

    // Chiude il file
    fclose(file);

    printf("Il messaggio è stato scritto con successo nel file.\n");
}
