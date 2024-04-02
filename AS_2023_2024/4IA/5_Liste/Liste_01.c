#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int dato;
    struct Nodo *next;
} Nodo;

// Funzione per l'inserimento di un elemento in testa alla lista (push)
Nodo* push(Nodo *head, int dato) {

    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));

    // Se il nodo non è stato allocato (memoria finita) segnalo l'errore
    if (nuovoNodo == NULL) {
        printf("Errore: impossibile allocare memoria\n");
        exit(1);
    }

    // Operazione di push
    nuovoNodo->dato = dato; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa della lista

    return nuovoNodo; // Restituisco il nuovoNodo
}

// Funzione per la rimozione dell'elemento in testa alla lista (pop)
Nodo* pop(Nodo *head) {

    // Se la lista è vuota
    if (head == NULL) {
        printf("Errore: lista vuota\n");
        exit(1);
    }

    Nodo *newHead = head->next; // Creo un Nodo tmp per la nuova head(testa) della lista
    free(head); // Libero la memodia del nodo eliminato dalla lista
    return newHead; // Restituisco la nuova testa della lista (Quindi l'elemento successivo alla testa)
}

// Funzione per liberare memoria allocata per la lista
void deAllocate(Nodo * head) {
    // Itezione per eliminare tutti i nodi della lista
    while (head != NULL) {
        // Chiamo la funzione pop
        head = pop(head);
    }
}

// Funzione per la stampa della lista
void stampaLista(Nodo *head) {
    // Creo un Nodo temoraneo per leggere i dati nella lista (N.B. Non rimuovo i dati dalla lista)
    Nodo *tmp = head;
    // Ciclo per leggere tutta la lista
    while (tmp != NULL) {
        printf("Indirizzo Nodo: %p |", tmp);
        printf("Valore: %d |", tmp->dato); // Stampo il dato
        printf("Indirizzo next: %p \n", tmp->next); // Stampo l'indirizzo di memoria del Nodo next
        tmp = tmp->next;
    }
    printf("\n");
}

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // Inserisce alcuni elementi nella lista (push)
    head = push(head, 3);
    head = push(head, 5);
    head = push(head, 7);

    // Stampa la lista
    printf("Lista dopo le operazioni di push:\n");
    stampaLista(head);

    // Rimuove un elemento dalla lista (pop)
    head = pop(head);
    printf("Riossa la testa dalla lista\n");

    // Stampa la lista dopo la rimozione
    printf("Lista dopo la rimozione:\n");
    stampaLista(head);
    
}