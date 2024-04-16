#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int val;
    struct Nodo *next;
} Nodo;

// Funzione per l'inserimento di un elemento in testa alla lista (push)
Nodo* push(Nodo *head, int dato) {

    // Nodo *nuovoNodo; //  Creo il nodo
    // nuovoNodo = (Nodo*)malloc(sizeof(Nodo)); // Alloco memoria
    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));

    // Operazione di push
    nuovoNodo->val = dato; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa della lista

    return nuovoNodo; // Restituisco il nuovoNodo
}

// Funzione per la rimozione dell'elemento in testa alla lista (pop)
Nodo* pop(Nodo *head) {
    Nodo *nuovoNodo = head->next; // Creo un Nodo tmp per la nuova head(testa) della lista
    free(head); // Libero la memodia del nodo eliminato dalla lista
    return nuovoNodo; // Restituisco la nuova testa della lista (Quindi l'elemento successivo alla testa)
}

// Funzione per liberare memoria allocata per la lista
void deAllocate(Nodo * head) {
    // Itezione per eliminare tutti i nodi della lista
    while (head != NULL) {
        head = pop(head); // Chiamo la funzione pop
    }
}

// Funzione per la stampa della lista
void stampaLista(Nodo *head) {
    // Creo un Nodo temoraneo per leggere i dati nella lista (N.B. Non rimuovo i dati dalla lista)
    Nodo *tmp = head;
    // Ciclo per leggere tutta la lista
    while (tmp != NULL) {
        printf("Indirizzo Nodo: %p |", tmp); // Stampo l'indizzo di memoria del Nodo corrente
        printf("Valore: %d |", tmp->val); // Stampo il dato del Nodo corrente
        printf("Indirizzo next: %p \n", tmp->next); // Stampo l'indirizzo di memoria del Nodo next
        tmp = tmp->next;
    }
    printf("\n");
}

// Funzione che aggiungo un nodo in coda alla lista (push in coda)
void pushInCoda(Nodo *head, int dato) {
    // Creo un Nodo temoraneo per leggere i dati nella lista (N.B. Non rimuovo i dati dalla lista)
    Nodo *tmp = head;

    // Scorro la lista fino alla fine (al NULL)
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = malloc(sizeof(Nodo));
    // Faccio puntare la lista al nuovo nodo
    tmp->next = nuovoNodo; // Il tmp->next è NULL quindi sarà collegato poi al nuovoNodo

    // Aggiungo i parametri del nuovoNodo
    nuovoNodo->val = dato;
    nuovoNodo->next = NULL; // Il nuovoNodo punta a NULL, quindi termina la lista
}

// Funzione per la rimozione dell'elemento in coda alla lista (pop in coda)
void popInCoda(Nodo *head) {
    // Creo un Nodo temoraneo per leggere i dati nella lista (N.B. Non rimuovo i dati dalla lista)
    Nodo *tmp = head;

    // Scorro la lista fino alla fine (al NULL)
    while (tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    // Mi salvo il nodo next, che si dovrà eliminare
    Nodo *tmp2 = tmp->next;
    free(tmp2); // Libero la memoria del nodo eliminato dalla lista
    // Il nodo precendete punterà a NULL, per terminare la lista
    tmp->next = NULL;
}

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = push(head, 3); // 3 --> NULL
    head = push(head, 5); // 5 --> 3 --> NULL
    head = push(head, 7); // 7 --> 5 --> 3 --> NULL

    // Stampo la lista
    printf("Lista dopo le operazioni di push:\n");
    stampaLista(head);

    // Rimuovo un elemento dalla lista (pop)
    // POP: RIMUOVO L'ELEMENTO IN TESTA
    head = pop(head);
    printf("Rimossa la testa dalla lista\n");

    // Stampo la lista dopo la rimozione
    printf("Lista dopo la rimozione:\n");
    stampaLista(head);

    // Aggiungo dei nodi in coda alla lista
    pushInCoda(head, 10);
    pushInCoda(head, 22);
    pushInCoda(head, 35);
    stampaLista(head);

    // Faccio un pop in coda alla lista
    popInCoda(head);
    stampaLista(head);
    popInCoda(head);
    stampaLista(head);
}