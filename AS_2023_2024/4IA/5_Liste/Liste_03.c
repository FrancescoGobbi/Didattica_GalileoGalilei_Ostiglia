#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int dato;
    struct Nodo *next;
} Nodo;

/**
 * @brief Funzione ricorsiva per la stampa della lista DIRETTA (DA TESTA ALLA CODA)
 * 
 * @param Nodo* head  
 */
void printRicorsivo(Nodo *head);

/**
 * @brief Funzione ricorsiva per la stampa della lista INDIRETTA (DALLA CODA ALLA TESTA)
 * 
 * @param Nodo* head  
 */
void printReverseRicorsivo(Nodo *head);

/**
 * @brief Funzione per il PUSH IN TESTA della lista
 * 
 * @param Nodo* head 
 * @param int dato 
 * @return Nodo* 
 */
Nodo* pushHead(Nodo *head, int dato);

/** 
 * @brief Funzione per il POP IN TESTA della lista
 * 
 * @param Nodo* head  
 * @return Nodo* 
 */
Nodo* popHead(Nodo *head);

/**
 * @brief Funzione per il PUSH IN CODA della lista
 * 
 * @param Nodo* head 
 * @param int dato 
 * @return Nodo* 
 */
Nodo* pushTail(Nodo *head, int dato);

/**
 * @brief Funzione per il POP IN CODA della lista
 * 
 * @param Nodo* head 
 * @return Nodo* 
 */
Nodo* popTail(Nodo *head);

/**
 * @brief Funzione che ritorna la lunghezza della lista
 * 
 * @param Nodo* head
 * @return int 
 */
int lenghtList(Nodo *head);

/**
 * @brief Funzione che ricerca un elemento nella lista
 * return 1 --> elemento presente
 * return 0 --> elemento NON presente
 * 
 * @param Nodo* head 
 * @param int dato
 * @return int
 */
int searchElement(Nodo *head, int dato);

/**
 * @brief Funzione che inserisce un elemento in una data posizione
 * N.B. La posizione parte da 0 con l'elemento in testa
 * 
 * @param Nodo* head 
 * @param int dato 
 * @param int pos 
 * @return Nodo* 
 */
Nodo* pushPosition(Nodo *head, int dato, int pos);

/**
 * @brief Funzione che toglie un elemento, se possibile,
 * in una data posizione in input 
 * 
 * @param Nodo* head 
 * @param int pos 
 * @return Nodo* 
 */
Nodo* popPosition(Nodo *head, int pos);

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 3); // 3 --> NULL
    head = pushHead(head, 5); // 5 --> 3 --> NULL
    head = pushHead(head, 7); // 7 --> 5 --> 3 --> NULL

    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    head = pushPosition(head, 10, 1);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    head = pushPosition(head, 31, 4);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    head = pushPosition(head, 31, 3);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    // Errore nell'inserimento
    head = pushPosition(head, 31, 15);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    head = popPosition(head, 3);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    head = popPosition(head, 5);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    head = popPosition(head, 1);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    // Errore nell'eliminazione
    head = popPosition(head, 9);
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

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

Nodo* popHead(Nodo *head) {
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

Nodo* pushTail(Nodo *head, int dato) {
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

Nodo* popTail(Nodo *head) {
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
            // Mi salvo il nodo next, che si dovrà eliminare
            Nodo *tmp2 = tmp->next;
            free(tmp2); // Libero la memoria del nodo eliminato dalla lista
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

int lenghtList(Nodo *head) {
    int lenght = 0;

    Nodo *tmp = head;
    while(tmp != NULL) {
        lenght++;
        tmp = tmp->next;
    }
    return lenght;
}

int searchElement(Nodo *head, int dato) {
    Nodo *tmp = head;

    while(tmp != NULL) {
        if (tmp->dato == dato) {
            printf("L'elemento %d è presente nella lista\n", dato);
            return 1;
        }
        tmp = tmp->next;
    }
    printf("L'elemento %d NON è presente nella lista\n", dato);
    return 0;
}

Nodo* pushPosition(Nodo *head, int dato, int pos) {
    int i = 1; // Indice della posizione della lista

    Nodo *tmp = head; // Secondo "filo" per scorrere la lista
    // Creo il nuovoNodo da inserire
    Nodo* nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->dato = dato;

    // Se la posizone è 1
    if (pos == 1 && head != NULL) {
        nuovoNodo->next = head;
        head = nuovoNodo;
        return head;
    }
    // Se la posizione è > 0 e < della lunghezza
    // La posizione deve essere minore della lunghezza massima e maggiore di 0
    if (pos<=lenghtList(head) && pos>1) {
        // Scorro la lista fino ad arrivare alla posizione corretta
        while(i<pos-1 && tmp != NULL) { 
            i++;
            tmp = tmp->next;
        }
        nuovoNodo->next = tmp->next;
        tmp->next = nuovoNodo;
    }
    else {
        printf("\n\nNon posso inserire il valore: posizione non presente nella lista\n\n");
    }
    return head;
}

Nodo* popPosition(Nodo *head, int pos) {
    int i = 1; // Indice della posizione della lista

    Nodo *tmp = head;

    if (pos > lenghtList(head)) {
        printf("\n\nNon posso eseguire il pop. Elemento fuori dalla lista.\n\n");
    }
    else {
        if (pos == 1 && tmp != NULL) {
            printf("\nTolgo l'elemento con valore: %d\n", head->dato);
            tmp = tmp->next;
            free(head);
            return tmp;
        }
        else {
            while(i<pos-1 && tmp != NULL) {
                i++;
                tmp = tmp->next;
            }
            // Sposto il Nodo next
            Nodo *tmp2 = tmp->next;
            tmp->next = tmp->next->next;
            printf("\nTolgo l'elemento con valore: %d\n", tmp2->dato);
            free(tmp2);
        }
    }
    return head;
}