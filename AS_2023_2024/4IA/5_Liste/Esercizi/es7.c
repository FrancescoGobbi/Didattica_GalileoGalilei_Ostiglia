#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Nodo{
	int val;
	struct Nodo* next;
}Nodo;

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
 * @brief funzione che fa il reverse della lista in un'altra lista
 * @param Nodo* nodo della testa della lista da invertire
 * @return testa della lista invertita.
*/
Nodo* reverseLista(Nodo* head);

/**
 * @brief Funzione che ritorna la lunghezza della lista
 * 
 * @param Nodo* head
 * @return int 
 */
int lenghtList(Nodo *head);


int main(){
	Nodo* head = NULL;
	Nodo* head2 = NULL;
	
	head = pushHead(head, 1);
	head = pushHead(head, 2);
	head = pushHead(head, 3);
	head = pushHead(head, 4);
	
	printRicorsivo(head);
	printf("\n");
	head2 = reverseLista(head);
	printRicorsivo(head2);
	
	return 0;
}

Nodo* popHead(Nodo *head) {
    if (head != NULL) { // Se la testa non � vuota
        Nodo *nuovoNodo = head->next; // Creo un Nodo tmp per la nuova head(testa) della lista
        free(head); // Libero la memodia del nodo eliminato dalla lista
        return nuovoNodo; // Restituisco la nuova testa della lista 
        //(Quindi l'elemento successivo alla testa)
    }
    else {
        printf("La lista � gi� vuota!\n");
        return head;
    }
}

void printRicorsivo(Nodo *head) {
    if(head != NULL) {
        // Prima la stampa e poi chiamata ricorsiva
        printf("%d --> ", head->val);
        printRicorsivo(head->next);
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
    nuovoNodo->val = dato; // Aggiungo il dato al nuovoNodo
    nuovoNodo->next = head; // Faccio puntare il nuovoNodo alla testa della lista

    return nuovoNodo; // Restituisco il nuovoNodo
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

Nodo* reverseLista(Nodo* head){
	Nodo* tmp = head;
	Nodo* nuovo = NULL;
	int dati[lenghtList(head)];
	int i = 0;
	
	while(tmp){
		dati[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	
	for(i = 0; i < lenghtList(head); i++){
		nuovo = pushHead(nuovo, dati[i]);
	}
	
	return nuovo;
}

