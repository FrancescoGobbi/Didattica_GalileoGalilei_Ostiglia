#include <stdio.h>

int main() {
    // Nome del file
    char nome_file[] = "prova.txt";

    // Messaggio da aggiungere al file
    char messaggio[100];

    // Apre il file in modalità append ("a" sta per append)
    FILE *file = fopen(nome_file, "a"); // Puntatore alla fine del file già scritto

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Indica un errore
    }

    // Chiede all'utente di inserire il messaggio
    printf("Inserisci il messaggio da aggiungere al file: ");
    scanf("%s", messaggio);
    //fgets(messaggio, sizeof(messaggio), stdin); // prendere una stringa in input anche con spazi

    // Scrive il messaggio nel file
    // int fprintf(FILE *stream, char *formato, argomenti ...)
    fprintf(file, "%s", messaggio); // Stampo il messaggio su file e vado a capo

    // Chiude il file
    fclose(file);

    printf("Il messaggio è stato aggiunto con successo al file.\n");
}
