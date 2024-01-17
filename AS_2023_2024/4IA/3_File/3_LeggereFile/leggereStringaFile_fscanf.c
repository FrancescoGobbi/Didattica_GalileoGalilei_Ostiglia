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

            // Se arrivo alla fine del file
            /*
            N.B. Questo serve perché il ciclo while() controlla se si è in quel momento all'EOF.
            Quindi quando si esegue una nuova lettura da file il puntatore si sposta e magari in quel momento arriva all'EOF.
            Così facendo il file è terminato, ma effettivamente non ha letto una nuova parola dal file di testo.
            Ecco che allora la variabile stringa rimane tale, non cambia perché non preso qualcosa di nuovo, mentre il puntatore va all'EOF.
            Questo potrebbe quindi dare delle parole ripetute, solitamente l'ultima o le ultime, che sono appunto indesiderate.
            */
            if(feof(file)){
                break;
            }

            printf("%s ", riga);
        }
        printf("\n");
        // Chiude il file
        fclose(file);
    }
}
