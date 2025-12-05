/*
Creare una funzione in C che prenda in input due valori interi a e b.
La funzione deve calcolare e restituire la somma dei numeri primi compresi tra il numero a ed il numero b.

ESEMPIO: Se a = 6 e b = 11, il programma dovrà sommare il valore 7 con il valore 11, in quanto entrambi
numeri primi. 
Quindi il valore di ritorno della funzione dovrà essere 18(= 7 + 11).
*/


int sommaPrimi(int a, int b);

int main() {

    int somma = sommaPrimi(11, 6);
}

// Verifico se n è un numero primo.
// Return 1 se è primo, 0 altrimenti
int isPrime(int n) {
    int countDivisori = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            countDivisori++;
        }
    }

    if (countDivisori == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

// VOI DOVETE SCRIVERE SOLO QUESTO!
int sommaPrimi(int a, int b) {
    int i;
    int somma = 0;

    // Secondo voi a è per forza minore di b?
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    for (i = a; i <= b; i++) {
        if (isPrime(i) == 1) {
            somma += i;
        }
    }
    return somma;
}