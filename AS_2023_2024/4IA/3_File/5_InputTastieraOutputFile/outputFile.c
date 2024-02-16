#include <stdio.h>

int main() {
    // Nome del file in cui scrivere i nomi
    char nome_file[] = "prova.txt";
    int i;

    // Apre il file in modalità scrittura ("w" sta per write)
    FILE *file = fopen(nome_file, "wt"); // Puntatore del file, sempre in testa al file

    // Verifica se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Indica un errore
    }

    // Buffer per leggere i nomi
    char nome[100];

    // Chiede all'utente di inserire i nomi e li scrive sul file
    printf("Inserisci i nomi\n");
    for (i = 1; i <= 5; i++) {
        printf("Nome %d: ", i);
        scanf("%s", nome);
        fprintf(file, "Nome %d: %s\n", i, nome); // Stampa di una stringa/frase con una stringa(vettore di char)
    }

    // Chiude il file
    fclose(file);

    printf("I nomi sono stati scritti con successo nel file %s.\n", nome_file);
}
