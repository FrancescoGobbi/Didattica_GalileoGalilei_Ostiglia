/*
TESTO: 
Creare le seguenti funzioni:
1) Funzione che prende in input il nome di un file .dat(binari) e crei uno Studente
con i dati presi in input dall'utente. Infine salvi i dati nel file
2) Funzione che prende in input il nome di un file .dat(binario) e stamapre tutte le strutture presenti nel file
3) Funzione che prende in input il nome di un file .dat(binario), calcoli la media per ogni singolo Studente e la stampi
4) Funzione che prende in input il nome di un file .dat(finario), chieda in input il nome di uno Studente e stampare
tutti i voti e la media del singolo studente. Se lo studente non è presente segnare un messaggio di errore.
5) Costruire il main() che richiami le funioni
*/


// Importare le librerie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definizione della struttura
typedef struct {
    char nome[30];
    char cognome[30];
    int matematica;
    int storia;
    int italiano;
    int informatica;
} Studente;

// Funzione 1
void inputStudente(char []);

// Funzione 2
void stampaStudenti(char []);

// Funzione 3
void mediaStudenti(char []);

// Funzione 4
void mediaSingoloStudente(char []);

// Funzione 5
int main() {
    inputStudente("file.dat");

    stampaStudenti("file.dat");

    mediaStudenti("file.dat");

    mediaSingoloStudente("file.dat");
}

void inputStudente(char fileName[]) {
    // Apro il file per l'append binario
    FILE *fOut = fopen(fileName, "ab");
    
    // Creo un puntatore ad una struttura ed alloco la memoria
    Studente * s = malloc(sizeof(Studente));

    printf("Inserisci il nome dello studente: ");
    scanf("%s", s->nome);
    fflush(stdin);
    printf("Inserisci il cognome dello studente: ");
    scanf("%s", s->cognome);
    fflush(stdin);
    printf("Inserisci il voto di MATEMATICA: ");
    scanf("%s", s->matematica);
    fflush(stdin);
    printf("Inserisci il voto di STORIA: ");
    scanf("%s", s->storia);
    fflush(stdin);
    printf("Inserisci il voto di ITALIANO: ");
    scanf("%s", s->italiano);
    fflush(stdin);
    printf("Inserisci il voto di INFORMATICA: ");
    scanf("%s", s->informatica);
    fflush(stdin);

    // Scrivo nel file
    fwrite(s, sizeof(Studente), 1, fOut);

    // Chiude il file
    fclose(fOut);
}

void stampaStudenti(char fileName[]) {
    // Apro il file per l'append binario
    FILE *fOut = fopen(fileName, "rb");
    
    // Creo un puntatore ad una struttura ed alloco la memoria
    Studente * s = malloc(sizeof(Studente));

    // Volendo il >=1 non serve
    // Leggo tutto il file, struttura Studente per struttura Studente
    // Quindi un quantitativo di byte pari alla struttura Studente
    while(fread(s, sizeof(Studente), 1, fOut) >= 1) {
        printf("Nome: %s\n", s->nome);
        printf("Cognome: %s\n", s->cognome);
        printf("Matematica: %d\n", s->matematica);
        printf("Storia: %d\n", s->storia);
        printf("Italiano: %d\n", s->italiano);
        printf("Informatica: %d\n", s->informatica);
    }
    
    // Chiudo il file
    fclose(fOut);
}

void mediaStudenti(char fileName[]) {
    // Apro il file per l'append binario
    FILE *fOut = fopen(fileName, "rb");
    float media;
    
    // Creo un puntatore ad una struttura ed alloco la memoria
    Studente * s = malloc(sizeof(Studente));

    // Volendo il >=1 non serve
    // Leggo tutto il file, struttura Studente per struttura Studente
    // Quindi un quantitativo di byte pari alla struttura Studente
    while(fread(s, sizeof(Studente), 1, fOut) >= 1) {
        printf("Nome: %s\n", s->nome);
        printf("Cognome: %s\n", s->cognome);
        media = (float)(s->matematica + s->italiano + s->italiano + s->storia) / 4;
        printf("Media dello studente: %f\n", media);
    }
    
    // Chiudo il file
    fclose(fOut);
}

void mediaSingoloStudente(char fileName[]) {
    // Apro il file per l'append binario
    FILE *fOut = fopen(fileName, "rb");
    float media;
    char nomeStudente[30];
    int check = 0;
    
    // Creo un puntatore ad una struttura ed alloco la memoria
    Studente * s = malloc(sizeof(Studente));

    printf("Inserisci il nome di una persona da trovare: ");
    scanf("%s", nomeStudente);
    fflush(stdin);

    // Volendo il >=1 non serve
    // Leggo tutto il file, struttura Studente per struttura Studente
    // Quindi un quantitativo di byte pari alla struttura Studente
    while(fread(s, sizeof(Studente), 1, fOut) >= 1) {
        if(strcmp(nomeStudente, s->nome)) {
            printf("Nome: %s\n", s->nome);
            printf("Cognome: %s\n", s->cognome);
            media = (float)(s->matematica + s->italiano + s->italiano + s->storia) / 4;
            printf("Media dello studente: %f\n", media);
            check = 1;
        }
    }
    
    // Chiudo il file
    fclose(fOut);

    if(check==0) {
        printf("Non c'è lo studente che ha inserito!\n");
    }
}   