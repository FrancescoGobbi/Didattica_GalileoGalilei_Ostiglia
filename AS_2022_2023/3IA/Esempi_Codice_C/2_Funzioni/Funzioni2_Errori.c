#include <stdio.h>

/**
 * @brief Incremento una variabile passata per VALORE
 * 
 * @param a 
 * @return int 
 */
int incremento(int a);

/**
 * @brief Incremento una variabile passata per RIFERIMENTO
 * 
 * @param a 
 */
void incremento2(int *a);

/***
 * Scambio due variabili passate per riferimento
*/
void swap(int *a, int *b);

int main() {
    int a = 5;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("Indirizzi: a = %p, b = %p\n", &a, &b);

    a = incremento(a); // Chiamata di funzione con passaggio di valore

    printf("a = %d, b = %d\n", a, b);

    incremento2(&a); // Chiamata di funzione con passaggio di riferimento

    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b); // Chiamata di funzione con passaggio di riferimento (due riferimenti di memoria)

    printf("a = %d, b = %d\n", a, b);
}

int incremento(int a) {
    a++;
    return a;
}

// INSERITI DEGLI ERRORI CON L'USO DEI PUNTATORI
void incremento2(int *a) {
    printf("Valore contenuto in a = %p\n", a); // Stampa dell'indirizzo iniziale del puntatore
    printf("Valore puntato da a = %d\n", *a); // Stampa del valore puntato dal puntatore inizialmente

    // Errore nell'uso dei puntatori
    a++; // Incremento l'indirizzo di memoria contenuto nel puntatore, non il valore puntato da esso!

    printf("Valore contenuto in a = %p\n", a); // Stampa dell'indirizzo dopo la modifica del puntatore
    printf("Valore puntato da a = %d\n", *a); // Stampa del valore puntato dal puntatore dopo la modifica

    // Uso del puntatore corretto!
    (*a)++;

    printf("Valore puntato da a = %d\n", *a); // Stampa del valore puntato dal puntatore modificato!
    // Si avrà quindi un valore indesiderato, in quanto l'indirizzo di memoria è diverso da quello passato inizialmente!
}

// INSERITI DEGLI ERRORI CON L'USO DEI PUNTATORI
void swap(int *a, int *b) {
    int tmp; // Variabile temporanea

    // Stampo il contenuto delle variabili
    printf("Valore contenuto nelle variabili: a = %p, b = %p, tmp = %d\n", a, b, tmp);

    tmp = a; // WARNING: Compio un indirizzo dentro una variabile intero, potrebbe causare dei problemi successivi

    printf("Valore contenuto nelle variabili: a = %p, b = %p, tmp = %d\n", a, b, tmp);

    a = b; // Non creo problemi, copio il contenuto di un puntatore dentro un'altra variabile puntatore

    printf("Valore contenuto nelle variabili: a = %p, b = %p, tmp = %d\n", a, b, tmp);

    b = tmp; // WARNING: Copio un valore intero dentro una varibiali puntatore. Questo avrà delle ripercussioni 
    // sull'indirizzo contenuto da b, che non sarà quello desiderato!

    printf("Valore contenuto nelle variabili: a = %p, b = %p, tmp = %d\n", a, b, tmp);
}