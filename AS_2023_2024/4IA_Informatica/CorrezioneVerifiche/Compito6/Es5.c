#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo* next;
} Nodo;

void funzione1(Nodo* head, int val) {
    if(head!=NULL) {
        if(val > head->dato) {
            head->dato = head->dato+val;
            funzione(head->next, val);
        }
        else {
            head->dato = head->dato-val;
            funzione(head->next, val);
        }
    }
}

void funzione2(Nodo* head, int val1, int val2) {
    if(head!=NULL) {
        if (head->dato >= val1 && head->dato<=val2) {
            head->dato = head->dato * val1;
            funzione2(head->next, val1, val2);
        }
        else {
            head->dato = head->dato * val2;
            funzione2(head->next, val1, val2);
        }
    }
}

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

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 3); // 3 --> NULL
    head = pushHead(head, 5); // 5 --> 3 --> NULL
    head = pushHead(head, 7); // 7 --> 5 --> 3 --> NULL
    head = pushHead(head, 10); // 10 --> 7 --> 5 --> 3 --> NULL
    head = pushHead(head, 2); // 2 --> 10 --> 7 --> 5 --> 3 --> NULL

    printf("\nLista prima:\n");
    printRicorsivo(head);
   
    funzione1(head, 5);

    printf("\nLista ora:\n");
    printRicorsivo(head);
}