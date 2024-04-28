#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int dato;
    struct Nodo *next;
} Nodo;

// Funzione per l'inserimento di un elemento in testa alla lista (push)
Nodo* push(Nodo *head, int dato) {

    // Nodo *nuovoNodo; //  Creo il nodo
    // nuovoNodo = (Nodo*)malloc(sizeof(Nodo)); // Alloco memoria
    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));

    // Operazione di push
    nuovoNodo->dato = dato; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa della lista

    return nuovoNodo; // Restituisco il nuovoNodo
}

// Funzione per la rimozione dell'elemento in testa alla lista (pop)
Nodo* pop(Nodo *head) {
    if (head != NULL) { // Se la testa non è vuota
        Nodo *nuovoNodo = head->next; // Creo un Nodo tmp per la nuova head(testa) della lista
        free(head); // Libero la memodia del nodo eliminato dalla lista
        return nuovoNodo; // Restituisco la nuova testa della lista 
        //(Quindi l'elemento successivo alla testa)
    }
    else {
        printf("La lista è già vuota!\n");
        return head;
    }
}

// Funzione per liberare memoria allocata per la lista (eliminare tutta la lista)
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
    if (tmp == NULL) {
        printf("La lista è vuota!\n");
    }
    else {
        printf("La lista è:\n");
        // Ciclo per leggere tutta la lista
        while (tmp != NULL) {
            printf("Indirizzo Nodo: %p |", tmp); // Stampo l'indizzo di memoria del Nodo corrente
            printf("Valore: %d |", tmp->dato); // Stampo il dato del Nodo corrente
            printf("Indirizzo next: %p \n", tmp->next); // Stampo l'indirizzo di memoria del Nodo next
            tmp = tmp->next;
        }
    }
    printf("\n");
}

// Funzione che aggiungo un nodo in coda alla lista (push in coda)
Nodo* pushInCoda(Nodo *head, int dato) {
    // Creo un nuovo nodo ed alloco memoria
    Nodo *nuovoNodo = malloc(sizeof(Nodo));
    // Aggiungo i parametri del nuovoNodo
    nuovoNodo->dato = dato;
    nuovoNodo->next = NULL; // Il nuovoNodo punta a NULL, quindi termina la lista

    if (head == NULL) { // Se la lista è vuota
        return nuovoNodo;
    }

    // Se invece la lista ha già dei nodi, quindi aggiungerò il nodo in coda
    // Creo un Nodo temoraneo per leggere i dati nella lista (N.B. Non rimuovo i dati dalla lista)
    Nodo *tmp = head;
    // Scorro la lista fino alla fine (al NULL)
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }   
    // Faccio puntare la lista al nuovo nodo
    tmp->next = nuovoNodo; // Il tmp->next è NULL quindi sarà collegato poi al nuovoNodo

    // Restituisco la testa, anche se non è cambiata
    return head; 
}

// Funzione per la rimozione dell'elemento in coda alla lista (pop in coda)
Nodo* popInCoda(Nodo *head) {
    if (head != NULL) { // Se la testa non è già vuota
        if (head->next == NULL) { // Se c'è solo un nodo nella lista
            free(head);
            return NULL;
        }
        else { // Se ci sono più nodi nella lista
            // Creo un Nodo temoraneo per leggere i dati nella lista (N.B. Non rimuovo i dati dalla lista)
            Nodo *tmp = head;
            // Scorro la lista fino alla fine (al NULL)
            while (tmp->next->next != NULL) {
                tmp = tmp->next;
            }
            // Libero la memoria del nodo eliminato dalla lista
            free(tmp->next); 
            // Il nodo precendete punterà a NULL, per terminare la lista
            tmp->next = NULL;
            return head;
        }
    }
    else { // Se la lista è già vuota
        printf("La lista è già vuota!\n");
        return NULL;
    }
    return NULL;
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

void printReverseRicorsivo(Nodo *head) {
    if(head != NULL) {
        // Prima chiamata ricorsiva e poi la stampa
        printReverseRicorsivo(head->next);
        printf(" <-- %d", head->dato);
    } 
    else {
        printf("NULL");
    }
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

    // PUSH IN CODA
    // Aggiungo dei nodi in coda alla lista
    head = pushInCoda(head, 10);
    head = pushInCoda(head, 22);
    head = pushInCoda(head, 35);
    stampaLista(head);

    printf("\n\nStampo la lista: ");
    printRicorsivo(head);

    printf("\n\nStampo la lista reverse: ");
    printReverseRicorsivo(head);
    printf("\n\n");

    // POP IN CODA
    // Faccio un pop in coda alla lista
    head = popInCoda(head);
    stampaLista(head);
    head = popInCoda(head);
    stampaLista(head);
    head = popInCoda(head);
    stampaLista(head);
    head = popInCoda(head);
    stampaLista(head);
    head = popInCoda(head);
    stampaLista(head);
}