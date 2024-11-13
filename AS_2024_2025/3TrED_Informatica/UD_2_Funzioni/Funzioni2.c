#include <stdio.h>
#include <math.h>

/*
N.B. Per creare una funzione in C è necessario:
- Creare il prototipo della funzione, prima del main()
- Definire la funzione che si vuole costruire, sotto al main()
- Chiamare la funzione stessa nel main() o in altr funzioni
*/

/**
 * @brief Funzione per l'incremento di una variabile
 * 
 * @param x 
 * @return int 
 */
int incremento1 (int x);

/**
 * @brief Funzione per l'incremento di una variabile. 
 * N.B. Funzione void NON ha return
 * 
 * @param x 
 */
void incremento2 (int x);

/**
 * @brief Funzione per l'incremento di una variabile puntatore.
 * Viene passato il punatore della variabile che si vuole incrementare
 * N.B. Funzione void NON ha return
 * 
 * @param x 
 */
void incremento3 (int *x);

int main() {
    int x = 5;

    printf("Il valore di x è: %d\n", x);

    // incremento1()
    /*Chiamata della funzione incremento1()
    Il valore di x verrà sovrascritto con il valore che la funzione incremento1()
    le restituisce*/
    x = incremento1(x);
    printf("\n\nIl valore di x è: %d\n", x);

    // incremento2()
    /*Chiamata della funzione incremento2()
    Il valore di x nel main() NON viene cambiato*/
    incremento2(x);
    printf("\n\nIl valore di x è: %d\n", x);

    // incremento3()
    /*Chiamata della funzione incremento3()
    Il valore di x nel main() viene cammbiato perché viene passato il 
    riferimento di memoria della variabile x e nella funzione incremento3()
    viene utilizzato il puntatore per incrementare il valore.*/
    incremento3(&x);
    printf("\n\nIl valore di x è: %d\n", x);

}

int incremento1 (int x) {
    x++; // Incremento la variabile locale alla variabile
    return x; // restutisco il valore della variabile locale x alla funzione chiamante
}

void incremento2 (int x) {
    x++; // Incremento la variabile locale della funzione
    // N.B. Funzione void NON ha return
}

void incremento3 (int *x) {
    (*x)++; // Incrmento il valore PUNTATO dalla variabile x
}