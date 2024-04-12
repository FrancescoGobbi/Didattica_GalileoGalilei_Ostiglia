#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int val;
    struct Nodo *next;
} Nodo;

int main() {
    // STEP 1
    Nodo *head = NULL; // Inizializza la lista come vuota

    // STEP 2
    // OPERAZIONE DI PUSH NELLO STACK
    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));
    
    nuovoNodo->val = 5; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa (precedente) della lista

    // STEP 3
    // Modifico la testa della lista
    head = nuovoNodo;

    // OPERAZIONE DI PUSH NELLO STACK
    // Alloco memoria
    nuovoNodo = (Nodo*)malloc(sizeof(Nodo));

    // Se il nodo non è stato allocato (memoria finita) segnalo l'errore
    if (nuovoNodo == NULL) {
        printf("Errore: impossibile allocare memoria\n");
        exit(1);
    }

    nuovoNodo->val = 10; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa (precedente) della lista

    // Modifico la testa della lista
    head = nuovoNodo;

    // Inizio a scorrere la lista dalla testa
    printf("\n\nLista dopo i push:\n");
    nuovoNodo = head;
    // Leggo la lista 
    while(nuovoNodo != NULL) {
        printf("Inirizzo nodo: %p | Valore: %d | Nodo Next: %p\n", nuovoNodo, nuovoNodo->val, nuovoNodo->next);
        nuovoNodo = nuovoNodo->next;
    }

    // OPERAZIONE DI POP
    nuovoNodo = head->next; // Il nuovoNodo punta al head->next
    free(head);
    head = nuovoNodo;

    // Inizio a scorrere la lista dalla testa
    printf("\n\nLista dopo il pop:\n");
    nuovoNodo = head;
    // Leggo la lista 
    while(nuovoNodo != NULL) {
        printf("Inirizzo nodo: %p | Valore: %d | Nodo Next: %p\n", nuovoNodo, nuovoNodo->val, nuovoNodo->next);
        nuovoNodo = nuovoNodo->next;
    }
}