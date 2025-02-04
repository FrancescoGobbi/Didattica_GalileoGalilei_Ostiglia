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

/*
Crea una funzione ricorsiva che prenda in input un numero intero n.
La funzione deve contare e restituire il numero delle cifre che compongono 
quel numero.

ESEMPIO: se n = 1234, la funzione deve restituire 4, il numero è composto 
da quattro cifre.
*/
int contaCifreNumero(int n);

/*
Crea una funzione ricorsiva che prenda in input un numero intero n.
La funzione deve sommare e ritornare solamente i numeri dispari che vanno da 1 al numero n.

ESEMPIO: se n = 6, si dorà sommare 1, 3 e 5; quindi dare il risultato 9.
*/
int sommaDispari(int n);

int main() {
    int numero;

    // Richiesta all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("Esercizio di conta divisori ricorsivo\n");
    int count = contaDivisoriN(numero, numero);
    printf("Il numero di divisori di %d è: %d\n", numero, count);

    printf("\n\n\nEsercizio della potenza ricorsiva\n");
    int base = 4;
    int esponente = 5;
    int pot = potenza(base, esponente);

    printf("La potenza: %d^%d = %d\n", base, esponente, pot);

    printf("\n\n\nEsercizio della conta delle cifre\n");
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    int cifre = contaCifreNumero(numero);
    printf("Il numero %d è composto da %d cifre.\n", numero, cifre);
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
    if (esponente == 1 || esponente == 0 || base == 1 || base == 0)  {
        if (esponente == 1 || base == 1 || base == 0){
            return base;
        }
        else {
            return 1;
        }
    }
    else {
        return base * potenza(base, esponente-1);
    }
}

int contaCifreNumero(int n) {
    if (n <= 9) { // Caso base
        return 1;
    }
    else { // Caso ricorsivo
        return 1 + contaCifreNumero(n / 10);
    }
    
}

int sommaDispari(int n) {
    if (n == 1 || n == 0){
        return n;
    }
    else {
        if (n % 2 == 0){// Caso pari
            return 0 + sommaDispari(n - 1);
        }
        else { // Caso dispari
            return n + sommaDispari(n - 1);
        }
    }
}