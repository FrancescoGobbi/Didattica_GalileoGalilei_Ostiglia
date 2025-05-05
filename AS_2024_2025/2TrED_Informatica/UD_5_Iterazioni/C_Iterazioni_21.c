/*
Iterazione 21 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il valore deve essere compreso tra 1 e 20.

Il programma deve eseguire e stampare la media sei soli valori pari tra gli A-valori inseriti dall'utente.
Quindi dovrò chiedere in input altri A-valori, quindi tanti quanti il valore di A. 
Dovrò fare la media tra solamente quei numeri pari inseriti.

media = (somma dei numeri pari inseriti) / (frequenza dei numeri pari inseriti)
*/

#include <stdio.h>

int main() {
    int a;
    float media = 0;
    int somma = 0;
    int num;
    int i;
    int count = 0; // Contatore per i numeri pari

    // Prendo in input il valore di a corretto (compereso tra 1 e 20)
    do{ 
        printf("Inserisci il valore di a: ");
        scanf("%d", &a);
    }while(a<1 || a>20);
    // NOI VOGLIAMO: a>=1 && a<=20
    // Quindi, quello che NON VOGLIAMO: a<1 || a>20

    // Prendo in input A-valori e li sommo tra loro
    for (i=1 ; i<=a; i++) {
        do{ // Prendo in inpit solo numeri positivi da parte dell'utente
            printf("Inserisci il %d^ numero: ", i);
            scanf("%d", &num);
        }while(num<=0);
        
        if(num%2==0) { // Se il numero è pari
            somma += num; // somma = somma + num;
            count++; // Incremento il contatore dei numeri pari
        }
    }

    // Eseguo la media
    if(count > 0) { // Controllo se ci sono numeri pari
        media = (float)somma / count; 
        printf("La media finale dei numeri pari è: %f\n", media);
    } else {
        printf("Non sono stati inseriti numeri pari.\n");
    }
}