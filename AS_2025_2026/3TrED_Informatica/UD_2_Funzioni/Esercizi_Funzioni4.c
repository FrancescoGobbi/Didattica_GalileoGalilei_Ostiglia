/*
Esercizio 4: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Creare una funzione in C che prenda in input un numero intero n.
La funzione deve eseguguire il Triangolo di Floyd fino al livello n.
Il Triangolo di Floyd è una disposizione di numeri interi in forma triangolare, dove i numeri sono disposti in righe crescenti.
ESEMPIO, per n = 5, il Triangolo di Floyd sarà:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

FUNZIONE 2:
Creare una funzione in C che prenda in input un numero intero a ed un numero intero b.
La funzione deve calcolare e restituire il massimo comune divisore (MCD) tra a e b utilizzando l'algoritmo di Euclide.

ESEMPIO: a = 48, b = 18 --> return della funzione = 6 (perchè il MCD tra 48 e 18 è 6)
*/

#include <stdio.h>

// Dichiarazione della Funzione 1
void TriangoloFloyd(int n);

// Dichiarazione della Funzione 2
int mcdEuclide(int a, int b);

int main(){

    int val;
    int a, b;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &val);
    // Chiamata delle funzioni da creare
    TriangoloFloyd(val);

    printf("\n\nInserisci due numeri interi a e b: ");
    scanf("%d %d", &a, &b);

    int risultato = mcdEuclide(a, b);
    printf("La media dei numeri maggiori di %d è: %.2f\n", b, risultato);
}

// Definizione delle funzioni da creare
// FUNZIONE 1       
void TriangoloFloyd(int n) {
    int i, j; // Creo le variabili di iterazione
    int num = 1;

    for (i = 1; i <= n; i++) { // Iterazione per le righe
        for (j = 1; j <= i; j++) { // Iterazione per le colonne
            printf("%3d", num);
            num++; // Incremento il valore della variabile da stampare
        }
        printf("\n");
    }
    // NON FACCIO NESSUN RETURN: la funzione è di tipo void
}

// FUNZIONE 2
int mcdEuclide(int a, int b) {
    int i; // Creo le variabili di iterazione
    int mcd; 

    // Calcolo il MCD tra a e b
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i; // Aggiorno il MCD se è un divisore comune
        }
    }

    return mcd;
}