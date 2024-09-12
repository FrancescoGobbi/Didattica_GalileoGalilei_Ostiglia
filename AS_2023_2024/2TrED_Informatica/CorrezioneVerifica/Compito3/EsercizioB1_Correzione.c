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
    Il programma deve salvare e stampare la MEDIA di tutti i valori interi e maggiori di 0 presi da input.

    ESEMPIO:
    Se A = 5, il programma dovrà chiedere in input 5 valori interi di conseguenza.
    Ipotizziamo che l'utente inserisca questi 5 valori: 10 , -45, 4, 6 e -2. 
    La media dei valori inseriti maggiori di 0 è (10+4+6)/3 = 6,666667, 
    quindi il programma dovrà poi stampare a video il risultato ottenuto.
    N.B. I numeri minori o uguali a 0 non sono considerati nella somma.
    */

    int A;
    int i;
    int numeriPositivi = 0;
    int somma = 0;
    int val;
    float media; 

    do{
        printf("Inserisci un valore intero: ");
        scanf("%d", &A);
    }while(A<=0);

    for(i = 1; i<=A; i++) {
        printf("Inserisci il valore %d: ", i);
        scanf("%d", &val);
        if(val > 0) {
            somma+=val;
            numeriPositivi++;
        }
    }

    media = (float)somma/numeriPositivi;
    printf("La media dei numeri positivi è: %f\n", media);
    printf("Il numero di numeri positivi è: %d\n", numeriPositivi);
}