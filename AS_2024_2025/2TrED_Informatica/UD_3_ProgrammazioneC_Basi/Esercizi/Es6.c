/* Es6
Crea un programma in C che prenda in input due valori interi (a e b).
Il programma deve eseguire tutte le operazioni tra a e b e stampare i risultati.
(Almeno le operazioni basilari come: somma, differenza, prodotto e divizione)
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b;
    int sommaAB, differenzaAB, moltiplicazioneAB, divisioneAB;
    int sommaBA, differenzaBA, moltiplicazioneBA, divisioneBA;

    // Richiedo in input i valori
    printf("Inserisci il primo valore intero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore intero: ");
    scanf("%d", &b);

    // Soluzione condensata dei due input
    /*
    printf("Inserisci i due valori interi: ");
    scanf("%d %d", &a, &b); // Prendo i due valori con una sola riga di codice
    */

    // Eseguo le operazioni 
    sommaAB = a + b;
    sommaBA = b + a;
    differenzaAB = a - b;
    differenzaBA = b - a;
    moltiplicazioneAB = a * b;
    moltiplicazioneBA = b * a;
    divisioneAB = a / b;
    divisioneBA = b / a;

    // Stampo i risultati
    printf("%d + %d = %d\n", a, b, sommaAB);
    printf("%d - %d = %d\n", a, b, differenzaAB);
    printf("%d * %d = %d\n", a, b, moltiplicazioneAB);
    printf("%d / %d = %d\n", a, b, divisioneAB);

    printf("%d + %d = %d\n", b, a, sommaBA);
    printf("%d - %d = %d\n", b, a, differenzaBA);
    printf("%d * %d = %d\n", b, a, moltiplicazioneBA);
    printf("%d / %d = %d\n", b, a, divisioneBA);
}