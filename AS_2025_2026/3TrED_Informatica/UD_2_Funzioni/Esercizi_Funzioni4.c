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

int main(){

    int val;
    int a, b;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &val);
    // Chiamata delle funzioni da creare
    stampaTriangoloFloyd(val);

    printf("\n\nInserisci due numeri interi a e b: ");
    scanf("%d %d", &a, &b);

    int risultato = mcdEuclide(a, b);
    printf("La media dei numeri maggiori di %d è: %.2f\n", b, risultato);
}

// Definizione delle funzioni da creare
// FUNZIONE 1       


// FUNZIONE 2