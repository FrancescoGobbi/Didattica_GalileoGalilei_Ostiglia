/*
Esercizio 3: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Creare una funzione in C che prenda in input un numero intero n.
La funzione deve verificare se il numero n un numero perfetto oppure no.
La funzione deve restituire 1 se il numero è perfetto, 0 altrimenti.

ESEMPIO: n = 6 --> return della funzione = 1 (perchè 6 è un numero perfetto, in quanto 1 + 2 + 3 = 6)

FUNZIONE 2:
Creare una funzione in C che prenda in input un numero intero a ed un numero intero b.
La funzione chiede in input all'utente a valori interi che siano maggiori di b.
La funzione deve calcolare e restituire la media dei valori inseriti dall'utente.

ESEMPIO: a = 3, b = 5
Input utente: 6, 8, 10
Return della funzione = 8 (perchè (6 + 8 + 10) / 3 = 8)
*/

// Dichiarazione delle funzioni

// FUNZIONE 1
int verificaNumeroPerfetto(int n);

// FUNZIONE 2
float mediaMaggioreDiB(int a, int b);

#include <stdio.h>

int main(){

    int val;
    int a, b;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &val);
    // Chiamata delle funzioni da creare
    int risultato1 = verificaNumeroPerfetto(val);
    if (risultato1) {
        printf("Il numero %d è PERFETTO\n", val);   
    }
    else {
        printf("Il numero %d NON è PERFETTO\n", val);   
    }

    printf("\n\nInserisci due numeri interi a e b: ");
    scanf("%d %d", &a, &b);

    float risultato2 = mediaMaggioreDiB(a, b);
    printf("La media dei numeri maggiori di %d è: %.2f\n", b, risultato2);
}

// Definizione delle funzioni da creare
// FUNZIONE 1       
int verificaNumeroPerfetto(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1; // Il numero è perfetto
    } 
    else {
        return 0; // Il numero non è perfetto
    }
}

// FUNZIONE 2
float mediaMaggioreDiB(int a, int b) {
    int sum = 0;
    int num;
    int i;

    for(i = 1; i <= a; i++) { // Chiedo in input a numeri maggiori di b
        do{
            printf("Inserisci un numero intero maggiore di %d: ", b);
            scanf("%d", &num);
        } while (num <= b); // Controllo che il numero sia maggiore di b
        sum += num;
    }
    // Calcolo e restituisco la media
    return (float)sum / a; // Casting per ottenere un risultato float
}