#include <stdio.h>

/** FUNZIONE 2
 * @brief Creare una funzione ricorsiva in C che prenda in input una variabile start ed una varia-
    bile end (di tipo int entrambi).
    La funzione, in modo ricorsivo, deve calcolare la somma di tutti i numeri tra start ed end compresi.
    ESEMPIO: Se start = 10 ed end = 15, la funzione deve restituire 75, in quanto 10 + 11 + 12 + 13 + 14
    + 15 = 75.
 * 
 * @return int 
 */
int sommaNumeri(int start, int end);

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

int sommaNumeri(int start, int end) {
    // Caso base: se start è uguale ad end, ritorna start
    if (start == end) {
        return start;
    }
    else {// Caso/Passo ricorsivo: somma del numero corrente e chiamata ricorsiva con start + 1 e end
        if (start > end){
            return end + sommaNumeri(start , end + 1);
        }
        else{
            return start + sommaNumeri(start + 1, end);
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