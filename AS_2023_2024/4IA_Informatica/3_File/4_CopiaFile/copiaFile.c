#include <stdio.h>
#include <stdlib.h>

void copiaFile(char *sorgente, char *destinazione) {
    // Apre il file di origine in modalità lettura ("r" sta per read)
    FILE *file_origine = fopen(sorgente, "rt");

    // Verifica se il file di ORIGINE è stato aperto correttamente
    if (file_origine == NULL) {
        printf("Errore nell'apertura del file di origine.\n");
        exit(1); // Indica un errore o return 0;
    }

    // Apre il file di DESTINAZIONE in modalità scrittura ("w" sta per write)
    FILE *file_destinazione = fopen(destinazione, "wt");

    // Verifica se il file di destinazione è stato aperto correttamente
    if (file_destinazione == NULL) {
        printf("Errore nell'apertura del file di destinazione.\n");
        fclose(file_origine);
        exit(1); // Indica un errore
    }

    // Buffer per leggere una riga alla volta
    char riga[1024];

    // Legge e copia ogni riga dal file di origine al file di destinazione
    while (fgets(riga, sizeof(riga), file_origine) != NULL) {
        fprintf(file_destinazione, "%s", riga);
    }

    // Chiude i file
    fclose(file_origine);
    fclose(file_destinazione);
}

int main() {
    // Nome del file di origine
    char nome_file_origine[] = "sorgente.txt";

    // Nome del file di destinazione
    char nome_file_destinazione[] = "destinazione.txt";

    // Chiama la funzione per copiare il contenuto da un file all'altro
    copiaFile(nome_file_origine, nome_file_destinazione);

    printf("Il contenuto del file è stato copiato con successo.\n");
}
