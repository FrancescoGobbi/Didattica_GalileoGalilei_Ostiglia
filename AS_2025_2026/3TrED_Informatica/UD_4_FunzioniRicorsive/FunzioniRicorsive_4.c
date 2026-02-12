#include <stdio.h>

/* Creare una funzione ricorsiva in C che prenda in input un numero intero n.
La funzione deve contare e restituire il numero dei numeri pari tra n ed 1.
*/
int contaPari(int n);

/*  Creare una funzione ricorsiva in C che prenda in input un numero n ed un
numero m.
La funzione deve sommare e restituire la somma di tutti i numeri pari tra 1 e n 
sommata a quella tra 1 ed m.
*/
int sommaPari(int n, int m);

// Funzione aggiuntiva per risolvere la funzione sopra
int sommaPariN(int n);

/*
Creare una funzione ricorsiva in C che prenda in input un numero a ed un
numero b.
La funzione deve restituire il risultato della divisione tra a e b, utilizzando
la ricorsione.
*/
int divisione(int a, int b);

int main() {
    int n = 5, m = 6;

    printf("Esercizio di conta dei numeri pari\n");
    int pari = contaPari(n);
    printf("Il numero di numeri pari tra 1 e %d è: %d\n", n, pari);
    int pari2 = contaPari(m);
    printf("Il numero di numeri pari tra 1 e %d è: %d\n", m, pari2);

    printf("\n\n\nEsercizio della SOMMA dei numeri pari\n");
    int somma = sommaPari(n, m);
    printf("La somma dei numeri pari tra 1 e %d e tra 1 e %d è: %d\n", n, m, somma);

    printf("\n\n\nEsercizio della DIVISIONE\n");
    int a = 10, b = 2;
    int div = divisione(a, b);
    printf("La divisione tra %d e %d è: %d\n", a, b, div);
}

int contaPari(int n) {
    if(n <= 1) {
        return 0;
    }
    else {
        if (n % 2 == 0) {
            return 1 + contaPari(n - 2);
        }
        else {
            return 0 + contaPari(n - 1);
        }
    }
}

/*
int sommaPari(int n, int m){
    if (n <= 1 && m <= 1){ // Caso Base
        return 0;
    }
    else {
        if (n % 2 == 0 && m % 2 == 0 && (n>=0 && m >=0)){ // Se entrambi sono pari
            return n + m + sommaPari(n-1, m-1);
        }
        else if (n % 2 == 0 && m % 2 == 1 && n>=0 ){ // Se solo n è pari
            return n + sommaPari(n-1, m-1);
        }
        else if (n % 2 == 1 && m % 2 == 0 &&  m >=0){ // Se solo m è pari
            return m + sommaPari(n-1, m-1);
        }
        else { // Se non sono pari
            return 0 + sommaPari(n-1, m-1);
        }
    }
}
*/

int sommaPariN(int n) {
    if (n<=1){ // Caso base
        return 0;
    }
    else { // Caso ricorsivo
        if (n % 2 == 0){// Caso pari
            return n + sommaPariN(n - 2);
        }
        else { // Caso dispari
            return 0 + sommaPariN(n - 1);
        }
    }
}

int sommaPari(int n, int m){
    return sommaPariN(n) + sommaPariN(m);
}

int divisione(int a, int b){
    if (a < b) {
        return 0;
    }
    else {
        return 1 + divisione(a-b, b);
    }
}

int sommaPari2(int n, int m){
    if (n <= 1 && m <= 1){ // Caso Base
        return 0;
    }
    else {
        int somma = 0; 
        if (n > 0 && n%2==0) { // Se n è pari e n>0
            somma += n;
        }  
        if (m > 0 && m%2==0) { // Se m è pari e m>0
            somma += m;
        }   
        return somma + sommaPari(n-1, m-1);
    }
}