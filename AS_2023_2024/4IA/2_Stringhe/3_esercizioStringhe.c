#include <stdio.h>

const int dim = 50;

void initializeString(char[], int);
int lenghtString(char*);

// Funzione da implementare
/* Funzione che prende in input un puntatore
di una stringa. La funzione richiede in input
una stringa e accoda alla stringa già presente
la stringa appena presa in input dall'utente.

ESEMPIO: str = "ciao"
Richiedo in input una stringa, es "Carlo"
Quindi l'output devrà essere "ciaoCarlo"
*/
void addString(char *);


// Funzione da implementare
/* Funzione che prende in input una stringa ed
una sotto-stringa.
La funzione deve tornare l'indice di inizio della
sotto-stringa.

ESEMPIO: str = "Pallacanestro"
sub = "canestro"
Quindi l'output devrà essere 5, in quanto nella
cella 5 inizia la sotto-stringa.
*/
int findSubstring(char *, char *);

int main() {
    char str[dim];
    char sub[dim];

    initializeString(str, dim);
    printf("Inserisci la stringa iniziale: ");
    scanf("%s", str);
    
    addString(str);
    printf("Stringa dop l'aggiunta: %s\n", str);

    scanf("%s", str);
    scanf("%s", sub);
    printf("La posizione è: %d\n", findSubstring(str, sub));

}

void initializeString(char str[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        str[i] = '\0';
    }
}

int lenghtString(char *str) {
    int i = 0;
    while(*str != '\0') {
        i++;
        str++;
    }
    return i;
}

void addString(char *str) {
    char sub[dim];
    
    initializeString(sub, dim);
    printf("Inserisci la stringa da aggiungere: ");
    scanf("%s", sub);
    /*
    while(*str!='\0') {
        str++;
    }
    */
    // Alternativa
    printf("Prima del salto in coda: %p\n", str);
    str = str + sizeof(char) * lenghtString(str);
    printf("Dopo il salto in coda: %p\n", str);
    
    int i = 0;
    while(sub[i]!='\0'){
        *str = sub[i];
        str++;
        i++;
    }  
}

int findSubstring(char *str, char *sub) {
    int pos = 0, check = 0;
    char *tmpStr = str;
    char *tmpSub = sub;
    int posSub = 0; // Posizione per la sotto-stringa
    int posReturn = -1; // Posizione di return
    
    while(*str!='\0') { 
        // Puntatori temporanei per le stringhe da far scorrere
        tmpStr = str;
        tmpSub = sub;
        if(*tmpStr == *tmpSub) {
            posSub = pos;
            check = 1; // Ho un confronto vero
            while(*tmpSub != '\0') {
                if (*tmpStr != *tmpSub) {
                    check = 0; // Metto a falso, quindi la sotto-stringa non è la stessa
                }
                // Mi sposo nelle celle successive
                tmpSub++;
                tmpStr++;
            }
            if(check == 1) { // Trovata la sotto-stringa
                posReturn = posSub;
                break;
            }
        }
        str++;
        pos++;
    }
    return posReturn;
}