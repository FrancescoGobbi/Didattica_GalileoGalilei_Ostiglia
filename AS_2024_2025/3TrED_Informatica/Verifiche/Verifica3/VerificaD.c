#include <stdio.h>

/** FUNZIONE 2
 * @brief Creare una funzione ricorsiva in C che prenda in input una variabile n (di tipo int).
    La funzione, in modo ricorsivo deve calcolare il prodotto tra solo i valori pari tra 1 ed n.
    ESEMPIO: Se n = 4, la funzione deve fare il prodotto tra 2 e 4, quindi restituire 8, in quanto solo il 2 ed
    il 4 sono numeri pari.
 * 
 * @return int 
 */
int prodottoPari(int n);

/** FUNZIONE 3
 * @brief Creare una funzione ricorsiva in C che prenda in input una variabile n (di tipo int).
    La funzione, in modo ricorsivo deve calcolare la somma delle sue cifre intere e restituire quindi il
    risultato.
    ESEMPIO: Se n = 1234, la funzione deve restituire 10, in quanto 1 + 2 + 3 + 4 = 10.
 * 
 * @return int 
 */
int sommaCifre(int n);

int main() {
    int start = 12, end = 15;

    int somma = sommaNumeri(start, end);

    printf("La somma dei numeri tra %d e %d è: %d\n", start, end, somma);

    int n = 1234;
    
    float serie = sommaCifreDispari(n);

    printf("La serie armonica di %d è: %f\n", n, serie);
}

int prodottoPari(int n) {
    // Caso base: se n è 0, ritorna 1
    if (n == 0) {
        return 1;
    }
    else {
        // Caso/Passo ricorsivo: se la cifra corrente è pari, moltiplica la cifra corrente e chiamata ricorsiva con il numero senza la cifra corrente
        if (n % 2 == 0) {
            return n % 10 * prodottoPari(n / 10);
        }
        else {
            return prodottoPari(n / 10);
        }
    }
}

int sommaCifre(int n) {
    // Caso base: se n è 0, ritorna 0
    if (n == 0) {
        return 0;
    }
    else {
        // Caso/Passo ricorsivo: somma della cifra corrente e chiamata ricorsiva con il numero senza la cifra corrente
        return n % 10 + sommaCifre(n / 10);
    }
}