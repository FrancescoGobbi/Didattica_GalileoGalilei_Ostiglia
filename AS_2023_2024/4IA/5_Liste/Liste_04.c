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

/**
 * @brief Funzione che fonde due liste in una sola.
 * Attacca quindi gli elementi della seconda stringa dopo la fine della prima.
 * 
 * @param Nodo* head 
 * @param Nodo* head2 
 * @return Nodo* 
 */
Nodo* mergeListe(Nodo *head, Nodo* head2);

/**
 * @brief Funzione alternativa (e migliore) per il merge di due liste
 * 
 * @param Nodo* headA 
 * @param Nodo* headB 
 * @return Nodo* 
 */
Nodo* mergeListe(Nodo *headA, Nodo* headB);

/**
 * @brief Funzione che prende una lista e la splitta in due sotto liste date una posizione 
 * di taglio per la lista passata. La funzione restituisce la testa della nuova lista.
 * 
 * @param Nodo* head 
 * @param int pos 
 * @return Nodo* 
 */
Nodo* splitListe(Nodo *head, int pos);

int main() {
    Nodo *head = NULL; // Inizializza la prima lista come vuota
    Nodo *head2 = NULL; // Inzializzo la seconda lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 12); // 12 --> NULL
    head = pushHead(head, 14); // 14 --> 12 --> NULL
    head = pushHead(head, 15); // 15 --> 14 --> 12 --> NULL
    head2 = pushHead(head2, 3); // 3 --> NULL
    head2 = pushHead(head2, 10); // 10 --> 3 --> NULL
    head2 = pushHead(head2, 22); // 22 --> 10 --> 3 --> NULL

    puts("\n\n-----------------------------");
    printf("Prima lista:\n");
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    printf("\nSeconda lista:\n");
    printRicorsivo(head2);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head2));
    puts("-----------------------------");


    head = mergeListe(head, head2);
    puts("\n\n-----------------------------");
    printf("DOPO IL MERGE\n");
    printf("\nPrima lista ora:\n");
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    printf("\nSeconda lista:\n");
    printRicorsivo(head2);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head2));
    puts("-----------------------------");


    Nodo *head3 = NULL;
    head3 = splitListe(head, 3);

    puts("\n\n-----------------------------");
    printf("DOPO LO SPLIT\n");
    printf("\nPrima parte della lista:\n");
    printRicorsivo(head);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head));

    printf("\nSeconda parte della lista:\n");
    printRicorsivo(head3);
    printf("\nLa lunghezza della lista è %d\n", lenghtList(head3));
    puts("-----------------------------");
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

Nodo* mergeListe(Nodo *head, Nodo* head2) {
    Nodo* tmp = head; // Copio la testa della lista doce avverrà la fusione delle liste

    // Scorro la lista fino all'ultimo Nodo della lista
    while(tmp->next!=NULL) {
        tmp = tmp->next;
    }

    // Fondo le due liste
    tmp->next = head2;

    return head;
}

Nodo* mergeListe(Nodo *headA, Nodo* headB) {
    Nodo* tmp = headA; // Copio la testa della lista doce avverrà la fusione delle liste

    // Scorro la lista fino all'ultimo Nodo della lista
    while(tmp!=headB) {
        if(tmp->next == NULL) { // Se la lista è terminata
            tmp->next = headB; // Collego le due liste
            return headA;
        }
        tmp = tmp->next; // Scorro la lista
    }
    return headA;
}

Nodo* splitListe(Nodo *head, int pos) {
    if (pos<=lenghtList(head) && pos>=1) {
        Nodo* tmp = head;
        int i = 1;
        Nodo* newHead;

        // Scorro la lista
        while(i<pos && tmp != NULL) { 
            tmp = tmp->next;
            i++;
        }
        // Esco che sono nella posizone del taglio

        // Salvo il puntatore per la partenza della nuona lista
        newHead = tmp->next;
        // Eseguo quindi il taglio: la lista passata termina con il NULL
        tmp->next = NULL;
        return newHead;
    }
    printf("La lista è troppo corta. Non è avvenuto il taglio della lista!\n");
    return NULL;
}