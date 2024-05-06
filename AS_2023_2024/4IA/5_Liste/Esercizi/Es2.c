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

// Funzione che trova il massimo nella lista in modo ricorsivo
int sommaPositivi(Nodo *head);

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 3); // 3 --> NULL
    head = pushHead(head, 5); // 5 --> 3 --> NULL
    head = pushHead(head, -3); // 3 --> 5 --> 3 --> NULL

    printf("La lista è:\n");
    printRicorsivo(head);

    printf("\n\nLa somma dei valori positivi della lista è: %d\n", sommaPositivi(head));
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

int sommaPositivi(Nodo *head) {
    if(head == NULL) {
        return 0;
    }
    else {
        if(head->dato>0) {
            return head->dato + sommaPositivi(head->next);
        }
        else {
            return sommaPositivi(head->next);
        }
    }
}