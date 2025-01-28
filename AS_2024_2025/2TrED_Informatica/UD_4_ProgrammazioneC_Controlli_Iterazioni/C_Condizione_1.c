/*
Condizione 1
Creare un programma in C che prenda in input da parte dell'utente un valore intero (numero).
Il programma deve verificare se il numero è positivo, negativo o zero.
Se il numero è positivo, il programma deve stampare "Il numero X è positivo."
Se il numero è negativo, il programma deve stampare "Il numero X è negativo."
Se il numero è zero, il programma deve stampare "Il numero è zero."
*/

#include <stdio.h>

int main() {
    int numero;

    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    /*
    if (numero > 0) { // Potivio
        printf("Il numero è positivo.\n");
    }
    else {
        printf("Il numero NON è positivo.\n");
    }

    if (numero < 0) { // Negativo
        printf("Il numero è negativo.\n");
    }
    else{
        printf("Il numero NON è negativo.\n");
    }

    if (numero == 0) { // Zero (uguaglianza con 0)
        printf("Il numero è zero.\n");
    }
    else {
        printf("Il numero NON è zero.\n");
    }
    */

    // Verifica se il numero è positivo, negativo o zero
    if (numero > 0) {
        // Se il numero è maggiore di zero
        printf("Il numero %d è positivo.\n", numero);
    } 
    else if (numero < 0) {
        // Se il numero è minore di zero
        printf("Il numero %d è negativo.\n", numero);
    } 
    else {
        // Se il numero è uguale a zero
        printf("Il numero è zero.\n");
    }


    // Verifica se il numero è compresto tra 0-10 , 11-20, 21-30, 31-40, 41-50, 51-60, 61-70, 71-80, 81-90, 91-100
    if (numero>=0 && numero<=10){
        printf("Numero tra 0 e 10\n");
    }
    else if (numero>=11 && numero<=20){
        printf("Numero tra 11 e 20\n");
    }
    else if (numero>=21 && numero<=30){
        printf("Numero tra 21 e 30\n");
    }
    else if (numero>=31 && numero<=40){
        printf("Numero tra 31 e 40\n");
    }
    else if (numero>=41 && numero<=50){
        printf("Numero tra 41 e 50\n");
    }
    else if (numero>=51 && numero<=60){
        printf("Numero tra 51 e 60\n");
    }
    else if (numero>=61 && numero<=70){
        printf("Numero tra 61 e 70\n");
    }
    else if (numero>=71 && numero<=80){
        printf("Numero tra 71 e 80\n");
    }
    else if (numero>=81 && numero<=90){
        printf("Numero tra 81 e 90\n");
    }
    else if (numero>=91 && numero<=100){
        printf("Numero tra 91 e 100\n");
    }
    else {
        printf("Numero NON compreso tra 0 e 100\n");
    }
}