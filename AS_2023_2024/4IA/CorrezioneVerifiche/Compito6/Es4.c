#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo* next;
} Nodo;

// Funzione per il fattoriale
int funzione2(int val){
    int fat = 1;
    int i;

    for(i=1; i<=val; i++) {
        fat*=i;
    }
    return fat;
}

// Funzione per la sommatoria
int funzione3(int val) {
    int sum = 0;
    int i;

    for(i=1; i<=val; i++) {
        sum+=i;
    }
    return sum;
}

void funzione1(Nodo* head, int val) {
    Nodo* tmp = head;

    while(tmp!=NULL) {
        if(tmp->dato == val && val>=1 && val<=10) {
            tmp->dato = funzione2(val); // Se serve funzione3
        }
        else {
            tmp->dato = 1;
        }
        tmp = tmp->next;
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