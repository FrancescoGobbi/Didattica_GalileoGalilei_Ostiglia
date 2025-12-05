/*
Esercizio 5: CREA LE SEGUENTI FUNZIONI IN C (DICHIARAZIONE E DEFINIZIONE + CHIAMATA NEL MAIN)


FUNZIONE 1:
Creare una funzione in C che prenda in input un numero intero n.
La funzione sommare tutti i numeri perfetti minori o uguali a n e restituisce la somma.

ESEMPIO: n = 10 --> return della funzione = 18 (perchè 6 è l'unico numero perfetto minore o uguale a 10, quindi 6 = 6)


FUNZIONE 2:
Creare una funzione in C che prenda in input un numero intero a ed un numero intero b.
La funzione deve calcolare e restituisce la media dei numeri maggiori di b tra i primi a numeri primi.

ESEMPIO: a = 5, b = 3
I primi 5 numeri primi sono: 2, 3, 5, 7, 11
I numeri maggiori di 3 sono: 5, 7, 11
Return della funzione = 7.67 (perchè (5 + 7 + 11) / 3 = 7.67)
*/

#include <stdio.h>

// Definizione delle funzioni da creare

// Funzione necessaria per la FUNZIONE 1
int NumeroPerfetto(int num);

// FUNZIONE 1
int sommaNumeriPerfetti(int n);

// FUNZIONE 2
float mediaPrimiMaggioriDiB(int a, int b);

int main(){

    int val;
    int a, b;

    printf("Inserisci un numero intero n: ");
    scanf("%d", &val);

    // Chiamata delle funzioni da creare
    int risultato1 = sommaNumeriPerfetti(val);
    printf("La somma dei numeri perfetti minori o uguali a %d è: %d\n", val, risultato1);

    printf("\n\nInserisci due numeri interi a e b: ");
    scanf("%d %d", &a, &b);

    float risultato2 = mediaPrimiMaggioriDiB(a, b);
    printf("La media dei numeri maggiori di %d tra i primi %d numeri primi è: %.2f\n", b, a, risultato2);
}

// Definizione delle funzioni da creare

int NumeroPerfetto(int num) { // Funzione di supporto per verificare se un numero è perfetto
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

// FUNZIONE 1
int sommaNumeriPerfetti(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (NumeroPerfetto(i)) { // Uso la funzione di supporto per verificare se i è un numero perfetto
            sum += i;
        }
    }
}

// FUNZIONE 2
float mediaPrimiMaggioriDiB(int a, int b) {
    int count = 1;
    int sum = 0;
    int num = 2; // Primo numero primo
    int numerriMaggioDiB = 0;

    while (count <= a) { // Finché non ho trovato i primi a numeri primi
        int isPrime = 1; // Presumo che num sia primo, variabile di check
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break; // Non è primo, esco dal ciclo
            }
        }
        if (isPrime) { // Se num è primo
            count++; // Incremento il contatore dei numeri primi trovati
            if (num > b) { // Se il numero primo è maggiore di b
                sum += num;
                numerriMaggioDiB++;
            }
        }
        num++;
    }
    
    // Calcolo e restituisco la media
    if (numerriMaggioDiB == 0) {
        return 0.0; // Evito la divisione per zero
    }
    // Non necessito dell'else esplicito, in quanto il programma terminerà qui se NON entra nell'if
    return (float)sum / numerriMaggioDiB; // Casting per ottenere un risultato float
}