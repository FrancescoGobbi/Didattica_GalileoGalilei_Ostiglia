/*
Iterazione 20 (Utilizzo del do-while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il valore deve essere compreso tra 1 e 20.

Il programma deve eseguire e stampare la media degli A-valori inseriti dall'utente.
Quindi dovrò chiedere in input A-valori, quindi tanti quanti il valore di A. Dovrò fare la media
tra tutti questi.
*/

#include <stdio.h>

int main() {
    int a;
    float media = 0;
    int somma = 0;
    int num;
    int i = 1;

    // Prendo in input iul valore di a corretto (compereso tra 1 e 20)
    do{ 
        printf("Inserisci il valore di a: ");
        scanf("%d", &a);
    }while(a<1 || a>20);
    // NOI VOGLIAMO: a>=1 && a<=20
    // Quindi, quello che NON VOGLIAMO: a<1 || a>20

    // Prendo in input A-valori e li sommo tra loro
    // while(i<=a)
    for (i=1 ; i<=a; i++) {
        do{ // Prendo in inpit solo numeri positivi da parte dell'utente
            printf("Inserisci il %d^ numero: ", i);
            scanf("%d", &num);
        }while(a<=0);
        
        somma = somma + num; // somma += num;
    }

    // Eseguo la media
    media = (float)somma / a; 
    printf("La media finale è: %f\n", media);
}