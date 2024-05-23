#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo* next;
} Nodo;

Nodo* funzione(Nodo *head) {
    Nodo *tmp1 = head;
    Nodo *tmp2 = NULL;

    while (tmp1 != NULL) {
        if (tmp1->dato % 2 == 0) {
            if (tmp2 == NULL) {
                head = tmp1->next;
                free(tmp1);
                tmp1 = head;
            } else {
                tmp2->next = tmp1->next;
                free(tmp1);
                tmp1 = tmp2->next;
            }
        } else {
            tmp2 = tmp1;
            tmp1 = tmp1->next;
        }
    }
    return head;
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

    head = removeEvenNumbers(head);

    printf("\nLista prima:\n");
    printRicorsivo(head);
}