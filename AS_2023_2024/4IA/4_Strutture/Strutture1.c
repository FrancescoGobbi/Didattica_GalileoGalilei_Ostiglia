#include <stdio.h>

/*
struct Studente{
   char cognome[50];
   int eta;
   float media;
};
*/

typedef struct{
    char cognome[50];
    int eta;
    float media;
} Studente;
//Così potrò semplicemente scrivere 'Studente' per andare a creare una struttura di tipo studente nel codice
//Quindi 'Studente' diventa un NUOVO TIPO: ovvero una struttura con particolari campi

int main()
{
    // Creo una struttura studente (s1) ed un puntatore ad una struttura (sp)
    Studente s1;
    Studente *sp; 
    sp = &s1; // Faccio puntare sp alla struttura studente s1 
        
    /*
    Per accedere ai campi delle struttura utilizzando un puntaotre si deve fare:
    "nomeDelPuntatoreDellaStruttura"->"campoDaAccedereDellaStruttura"
    */

    // Uso Persona s1 per salvare i dati
    printf("Inserisci il cognome: ");
    scanf("%s", s1.cognome);

    printf("Inserisci l'eta': ");
    scanf("%d", &(s1.eta));

    printf("Inserisci la media dello studente: ");
    scanf("%f", &(s1.media));

    // Uso la struttura s1 per stampare i valori
    printf("Mostro i dati inseriti:\n");
    printf("Cognome: %s\n", s1.cognome);
    printf("Eta': %d\n", s1.eta);
    printf("Media: %.2f\n", s1.media);

    //Uso il puntatore alla struttura per salvare i dati, quindi sp
    printf("Inserisci il cognome: ");
    scanf("%s", (sp->cognome));

    printf("Inserisci l'eta': ");
    scanf("%d", &(sp->eta));

    printf("Inserisci la media dello studente: ");
    scanf("%f", &(sp->media));

    // Uso la struttura s1 per stampare i valori
    printf("Mostro i dati inseriti:\n");
    printf("Cognome: %s\n", s1.cognome);
    printf("Eta': %d\n", s1.eta);
    printf("Media: %.2f\n", s1.media);
}