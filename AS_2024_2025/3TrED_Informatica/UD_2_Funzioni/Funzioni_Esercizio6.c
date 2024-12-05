#include <stdio.h>
#include <math.h>

/**
 * @brief Funzione che restituisce il massimo dati due numeri interi in input
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int maggiore(int a, int b);

/**
 * @brief Funzione che stampa i primi n valori interi partendo da 0, dato il valore di n in input
 * 
 * @param n 
 */
void stampaNumeri(int n);

/**
 * @brief Funzione che eleva un numero al quadrato e restituisce il risultato tramite un puntatore.
 * 
 * @param numero 
 * @param *risultato 
 */
void elevaAlQuadrato(int numero, int *risultato);

/**
 * @brief Funzione che prende in input un numero n, considerando che questo sia in binario.
 * La funzione calcola e restituisce il numero decimale associato
 * 
 * @param n 
 * @return int 
 */
int convertiInDecimale(int n);

/**
 * @brief Funzione che prende in input un numero n, considerando che sia intero e positivo.
 * La funzione calcola il binario del numero e lo restituisce.
 * N.B. Deve restituire un velore in binario (di soli 0 ed 1) in una variabile intera
 * 
 * @param n 
 * @return int 
 */
int convertiInBinario(int n);

int main() {
    int a = -10;
    int b = 3;
    int quadrato;
    int binario = 1111000; // Intero con un numero "binario", ovvero 120, per noi binario...

    // Chiamata della funzione maggiore()
    // Chiamo la funzione dentro la funzione printf(). Quindi stampo, senza salvare, il valore del return
    printf("Il valore maggiore tra %d e %d è: %d\n", a, b, maggiore(a, b));

    // Chiamata della funzione stampaNumeri()
    stampaNumeri(a);

    // Chiamata della funzione elevaAlQuadrato()
    elevaAlQuadrato(a, &quadrato);
    printf("%d^2 = %d\n", a, quadrato);

    // Chiamata della funzione convertiInDecimale()
    int decimale = convertiInDecimale(binario);
    printf("Il valore %d = %d\n", binario, decimale);

    // Chiamata della funzione convertiInBinario()
    binario = convertiInBinario(decimale);
    printf("Il valore %d = %d\n", decimale, binario);
}

int maggiore(int a, int b) {
    int max;
    if(a > b) {
        max = a;
    }
    else {
        max = b;
    }
    return max;
}

void stampaNumeri(int n) {
    int i;
    printf("I primi %d numeri sono: ", n);
    for(i = 0; i<n; i++) {
        printf("%4d", i);
    }
    printf("\n");
}

void elevaAlQuadrato(int numero, int *risultato){
    *risultato = numero * numero;
    //*risultato = pow(numero, 2); // Alternativa
}

int convertiInDecimale(int n){
    int intero = 0; // Per la somma e quindi il return della funzione
    int i = 0; // Per l'indice dell'elevamento a potenza
    while(n > 0) {
        int binario = n % 10; // Prendo l'ultima cifra, quindi la cifra meno significativa del numero
        intero = intero + pow(2,i)*binario; // Calcolo la potenza di 2 rispetto a quella posizione
        n = n / 10; // Sposto il numero alla cifra successiva, ovvero mi sposto da destra verso sinistra
        i++; // Incremento l'indice perchè mi sposto verso sinistra
    }
    return intero;
}

int convertiInBinario(int n){
    int binario = 0; // Per il binario e quindi il return della funzione
    int i = 0; // Per l'indice dell'elevamento a potenza

    while(n > 0) {
        int resto = n % 2; // Prendo il resto del numero (dalla cifra meno significativa alla più significativa)
        binario = binario + resto*pow(10,i);
        n = n / 2; // Preparo n per il ciclo successivo
        i++; // Incremento l'esponente
    }
    return binario;
}