/*

Nome:
Cognome: 
Classe:
Data:


Es2 C (2,5 punti)
Creare un programma in C che prenda in input 3 valori interi (A, B e C).
Il programma deve eseguire il prodotto tra i tre numeri in una nuova variabile.
Verificare se il valore trovato si è maggiore di 250, oppure no.
Nel caso in cui sia vero allora si dovrà stampare "Valore grande", altrimenti "Valore piccolo".

*/ 
// Questo sopra è un commento ad area da non eliminare o modificare!


#include <stdio.h>

int main() {
    int A, B, C, prodotto;

    // Input dei valori
    printf("Inserisci il valore di A: ");
    scanf("%d", &A);
    printf("Inserisci il valore di B: ");
    scanf("%d", &B);
    printf("Inserisci il valore di C: ");
    scanf("%d", &C);

    // Calcolo del prodotto
    prodotto = A * B * C;

    // Verifica del valore del prodotto
    if (prodotto > 250) {
        printf("Valore grande\n");
    } 
    else {
        printf("Valore piccolo\n");
    }
}