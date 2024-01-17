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

            // Se sono arrivato alla fine esco dal ciclo
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

            printf("%d\n", val); 
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
