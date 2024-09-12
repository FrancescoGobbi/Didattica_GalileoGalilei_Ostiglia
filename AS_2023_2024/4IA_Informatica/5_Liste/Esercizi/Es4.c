#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Nodo'
typedef struct Nodo {
    int dato;
    struct Nodo *next;
} Nodo;

// Funzione per l'inserimento di un elemento in testa alla lista (push)
Nodo* pushHead(Nodo *head, int dato);

// Funzione per la stampa ricorsiva della lista
void printRicorsivo(Nodo *head);

// Funzione che trova il massimo nella lista in modo ricorsivo
int sommaPositivi(Nodo *head);

int lenghtList(Nodo *head);

/**
 * @brief Funzione da implementare per trovare il minimo
 * all'interno della lista
 * 
 * @param Nodo* head 
 * @return int 
 */
int minVal(Nodo *head);

/**
 * @brief Funzione ricorsiva per calcolare e restituire
 * la somma dei numeri pari nella lista
 * 
 * @param Nodo* head 
 * @return int 
 */
int sumNumPariRic(Nodo *head);

/**
 * @brief Funzione ricorsiva per definire la
 * lunghezza della lista
 * 
 * @param Nodo *head 
 * @return int 
 */
int lenghtListRic(Nodo *head);

/**
 * @brief Funzione che aggiunge un nodo copia per ogni 
 * nodo già presente nella lista.
 * 
 * ESEMPIO: 5 --> 3 --> 4 --> NULL
 * 
 * OUTPUT: 5 --> 5 --> 3 --> 3 --> 4 --> 4 --> NULL
 * 
 * @param head 
 * @return Nodo* 
 */
Nodo* addDuplicato(Nodo *head);

int main() {
    Nodo *head = NULL; // Inizializza la lista come vuota

    // push di alcuni elmenti nella lista
    // PUSH: AGGIUNTA IN TESTA DI UN ELEMENTO
    head = pushHead(head, 3); // 3 --> NULL
    head = pushHead(head, 5); // 5 --> 3 --> NULL
    head = pushHead(head, -3); // 3 --> 5 --> 3 --> NULL

    printf("La lista è:\n");
    printRicorsivo(head);

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

// Funzione per l'inserimento di un elemento in testa alla lista (push)
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

int sommaPositivi(Nodo *head) {
    if(head == NULL) {
        return 0;
    }
    else {
        if(head->dato>0) {
            return head->dato + sommaPositivi(head->next);
        }
        else {
            return sommaPositivi(head->next);
        }
    }
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

Nodo* reverseLista1(Nodo* head){
	Nodo* tmp = head;
	Nodo* nuovo = NULL;
	int dati[lenghtList(head)];
	int i = 0;
	while(tmp){
		dati[i] = tmp->dato;
		tmp = tmp->next;
		i++;
	}
	for(i = 0; i < lenghtList(head); i++){
		nuovo = pushHead(nuovo, dati[i]);
	}
	return nuovo;
}

Nodo* reverseLista2(Nodo* t )  {
	Nodo*tmp=t;
	Nodo*t2=0;
	while(tmp!=0)  {
		t2=pushHead(t2,tmp->dato)  ;
		tmp=tmp->next;
	}
	return t2;
}