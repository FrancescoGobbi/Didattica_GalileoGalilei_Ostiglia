#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int dato;
    struct Nodo *next;
} Nodo;

// Funzione per l'inserimento di un elemento in testa alla lista (push)
Nodo* pushHead(Nodo *head, int dato);

// Funzione per la stampa ricorsiva della lista
void printRicorsivo(Nodo *head);

// Funzione che conta il numero di 3 presenti nella lista
int conta3(Nodo *head);

// VERSIONE 1
// Funzione che conta il numero di 3 presenti nella lista in modo ricorsivo
int conta3RicorsivoVers1(Nodo *head);

// VERSIONE 2
// Funzione che conta il numero di 3 presenti nella lista in modo ricorsivo
int conta3RicorsivoVers2(Nodo *head);

// VERSIONE 3
// Funzione che conta il numero di 3 presenti nella lista in modo ricorsivo
int conta3RicorsivoVers3(Nodo *head);

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 3); // 3 --> NULL
    head = pushHead(head, 5); // 5 --> 3 --> NULL
    head = pushHead(head, 3); // 3 --> 5 --> 3 --> NULL

    printf("La lista è:\n");
    printRicorsivo(head);
    
    int numTre = conta3(head);
    printf("\nIl numero di 3 nella lista è: %d\n", numTre);

    numTre = conta3RicorsivoVers1(head);
    printf("\nIl numero di 3 nella lista è: %d\n", numTre);

    numTre = conta3RicorsivoVers2(head);
    printf("\nIl numero di 3 nella lista è: %d\n", numTre);

    numTre = conta3RicorsivoVers3(head);
    printf("\nIl numero di 3 nella lista è: %d\n", numTre);
}



// Funzione per la stampa ricorsiva della lista
void printRicorsivo(Nodo *head) {
    if(head != NULL) {
        // Prima la stampa e poi chiamata ricorsiva
        printf("%d --> ", head->dato);
        printRicorsivo(head->next);
    } 
    else {
        printf("NULL");
    }
}

// Funzione per l'inserimento di un elemento in testa alla lista (push)
Nodo* pushHead(Nodo *head, int dato) {

    // Nodo *nuovoNodo; //  Creo il nodo
    // nuovoNodo = (Nodo*)malloc(sizeof(Nodo)); // Alloco memoria
    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));

    // Operazione di push
    nuovoNodo->dato = dato; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa della lista

    return nuovoNodo; // Restituisco il nuovoNodo
}

int conta3(Nodo *head){
    int count = 0;

    Nodo* tmp = head;

    while(tmp!=NULL){
        if(tmp->dato == 3) {
            count++;
        }
        tmp = tmp->next;
    }

    return count;
}

int conta3RicorsivoVers1(Nodo *head) {
    if (head->next == NULL) {
        if(head->dato == 3) {
            return 1;
        }
        return 0;
    }
    else {
        if(head->dato == 3) {
            return 1 + conta3RicorsivoVers1(head->next);
        }
        return 0 + conta3RicorsivoVers1(head->next);
    }
}

int conta3RicorsivoVers2(Nodo *head) {
    if (head == NULL) {
        return 0;
    }
    else {
        if(head->dato == 3) {
            return 1 + conta3RicorsivoVers1(head->next);
        }
        return 0 + conta3RicorsivoVers1(head->next);
    }
}

int conta3RicorsivoVers3(Nodo *head){
    if (head != NULL) {
        if (head->dato == 3) {
            return 1 + conta3RicorsivoVers1(head->next);
        }
        return 0 + conta3RicorsivoVers1(head->next);
    }
    return 0;
}