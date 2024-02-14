#include <stdio.h>

struct studente{
   char cognome[50];
   int eta;
};

int main()
{
    // Creo una struttura studente (s1) ed un puntatore ad una struttura (sp)
    struct studente *sp, s1; 
    sp = &s1; // Faccio puntare sp alla struttura studente s1 
        
    /*
    Per accedere ai campi delle struttura passate come riferimento si deve fare:
    "nomeDelPuntatoreDellaStruttura"->"campoDaAccedereDellaStruttura"
    */

    //Uso il puntatore alla struttura per salvare i dati
    printf("Inserisci il cognome: ");
    scanf("%s", (sp->cognome));

    printf("Inserisci l'eta': ");
    scanf("%d", &(sp->eta));

    // Uso la struttura per stampare i valori
    printf("Mostro i dati inseriti:\n");
    printf("Cognome: %s\n", s1.cognome);
    printf("Eta': %d\n", s1.eta);
}