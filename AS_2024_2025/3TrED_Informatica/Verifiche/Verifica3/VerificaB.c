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
 * @brief Creare una funzione ricorsiva in C che preso in input un numero intero n.
    La funzione deve calcolare e restituisca la somma delle di cifre dispari presenti nel numero.
    ESEMPIO: Se n = 1234 la funzione deve restituire 4, in quanto la somma tra 1 + 3 da 4.
 * 
 * @return int 
 */
int sommaCifreDispari(int n);

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

int sommaCifreDispari(int n) {
    // Caso base: se n è 0, ritorna 0
    if (n == 0) {
        return 0;
    }
    else {
        // Caso/Passo ricorsivo: somma della cifra corrente se è dispari e chiamata ricorsiva con il numero senza la cifra corrente
        if ((n % 10) % 2 != 0) {
            return n % 10 + sommaCifreDispari(n / 10);
        }
        else {
            return 0 + sommaCifreDispari(n / 10);
        }
    }
}