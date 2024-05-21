#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int dato;
    char str[20];
    struct Nodo *next;
} Nodo;

Nodo* pushHead(Nodo *head, int dato, char str[]);

int main() {
    Nodo *head = NULL; // Inizializza la prima lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 12, "ciao"); // 12 --> NULL
}

Nodo* pushHead(Nodo *head, int dato, char str[]) {
    // Nodo *nuovoNodo; //  Creo il nodo
    // nuovoNodo = (Nodo*)malloc(sizeof(Nodo)); // Alloco memoria
    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));

    // Operazione di push
    nuovoNodo->dato = dato; // Aggiungo il dato al nuovoNodo
    strcpy(nuovoNodo->str, str);
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa della lista

    return nuovoNodo; // Restituisco il nuovoNodo
}