/*
Verifica 2TRED
Nome:
Cognome:
*/

#include <stdio.h>

int main() {
    /*
    Creare un programma in C che prenda in input un valore A intero e maggiore di 0.
    Il programma deve richiedere in input A-valori interi.
    Il programma deve salvare e stampare:
    - la SOMMA di tutti i valori interi e maggiori di 0 presi da input.
    - il numero dei valori che sono maggiori di 0

    ESEMPIO:
    Se A = 5, il programma dovrà chiedere in input 5 valori interi di conseguenza.
    Ipotizziamo che l'utente inserisca questi 5 valori: 10 , -45, 4, 6 e -2. 
    La somma dei valori inseriti maggiori di 0 è 20, 
    quindi il programma dovrà poi stampare a video il risultato 20 ed il numero 3,
    perché sono 3 i numeri maggiori di 0.
    N.B. I numeri minori o uguali a 0 non sono considerati nella somma.
    */
   int A;
   int SOMMA = 0;
   int val;
   int countPositivi = 0;
   int i;

    do{
        printf("Inserisci un valore maggiore di 0:");
        scanf("%d", &A);
    }while(A<=0);

    for(i=1; i<=A; i++) {
        printf("Inserisci il valore %d: ", i);
        scanf("%d", &val);

        if (val > 0) {
            SOMMA+=val;
            countPositivi++;
        }
    }

    printf("La somma dei valori positivi è: %d\n", SOMMA);
    printf("Il numero dei valori positivi è: %d\n", countPositivi);
}