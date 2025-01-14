#include <stdio.h>

/*
Creare una funzione ricoriva in C che prenda in input
un numero intero n ed un numero i.
La funzione deve contare e restituire il numero dei
divisori della variabile n.

ESEMPIO: se n = 6, deve restituire 4 in quanto ci sono
4 possibili divisori di 6 (1, 2, 3 e 6).
*/
int contaDivisoriN(int n, int i);

/*
Creare una funzione che prenda in input due valori interi,
il primo valore sarà la base (chiamata base), 
mentre il secondo sarà l'esponente (chiamato esponente).
La funzione, utilizzando la ricorsione, deve restituire
l'operazione della potenza ((base)^esponente).

ESEMPIO: se b = 3 ed e = 3, dovrà restituire 27.
*/
int potenza(int base, int esponente);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    int count = contaDivisoriN(numero, numero);

    int pot = potenza(4, 5);
}

int contaDivisoriN(int n, int i) {
    if (i == 1) { // Caso base
        return 1;
    }
    else { // Caso ricorsivo
        if (n % i == 0) { // Se divisore
            return 1 + contaDivisoriN(n , i - 1);
        }
        else { // Se NON divisore
            return 0 + contaDivisoriN(n , i - 1);
        }
    }
}

int potenza(int base, int esponente) {
    // TO DO...
}