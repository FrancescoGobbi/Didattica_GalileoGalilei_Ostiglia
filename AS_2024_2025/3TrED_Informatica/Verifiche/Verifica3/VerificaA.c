#include <stdio.h>

/** FUNZIONE 2
 * @brief Creare una funzione ricorsiva in C che prenda in input una variabile n (di tipo int).
    La funzione, in modo ricorsivo deve calcolare la somma delle sue cifre intere e restituire quindi il
    risultato.
    ESEMPIO: Se n = 1234, la funzione deve restituire 10, in quanto 1 + 2 + 3 + 4 = 10.
 * 
 * @return int 
 */
int sommaCifre(int n);

/** FUNZIONE 3
 * @brief Creare una funzione ricorsiva in C che prenda in input un numero intern n.
    La funzione deve calcolare la serie armonica del numero n.
    Dicasi serie armonica la sommatoria che da 1/1 a 1/n. Quindi la sommatoria di 1/x, dove
    x `e un valore compreso tra 1 ed n.
    ESEMPIO: Se n = 5, la funzione deve restituire la somma tra: 1 + 1/2 + 1/3 + 1/4 + 1/5.
 * 
 * @return int 
 */
float serieArmonica(int n);

int main() {
    int n = 1234;

    int somma = sommaCifre(n);

    printf("La somma delle cifre di %d è: %d\n", n, somma);

    n = 5;
    
    float serie = serieArmonica(n);

    printf("La serie armonica di %d è: %f\n", n, serie);
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

float serieArmonica(int n) {
    // Caso base: se n è 1, ritorna 1
    if (n == 1) {
        return 1;
    }
    else {
        // Caso/Passo ricorsivo: somma della frazione corrente e chiamata ricorsiva con n - 1
        return 1.0 / n + serieArmonica(n - 1);
        // ALTERNATIVA: return (float) 1 / n + serieArmonica(n - 1);
    }
}