#include <stdio.h>

/**
 * @brief Funzione che prende in input un valore intero n 
 * e calcola la sommatoria dei primi n numeri interi
 * 
 * @param n 
 * @return int 
 */
int sommatoria(int n);

/**
 * @brief Funzione che prende in input un valore intero n
 * e calcola il fattoriale del valore inserito
 * 
 * @param n 
 * @return int 
 */
int fattoriale(int n);

/**
 * @brief Funzione che prende in input tre valori interi
 * e trova il massimo tra i valori inseriti
 * 
 * @param a 
 * @param b 
 * @param c 
 * @return int 
 */
int max3valori(int a, int b, int c);

int main() {
    int x;
    int a, b, c;

    // Funzione sommatoria()
    printf("Inserisci un numero n da fare la sommatoria:");
    scanf("%d", &x);
    int sum = sommatoria(x); // Chiamata di funzione di sommatoria()

    printf("La sommatoria di %d è: %d\n", x, sum);
    
    // Funzione fattoriale()
    printf("Inserisci un numero n da fare il fattoriale:");
    scanf("%d", &x);
    int fat = fattoriale(x); // Chiatama di funione di fattoriale()
    int fat2 = fattoriale(3); 
    int fat3 = fattoriale(5);

    printf("Il fattoriale di %d è: %d\n", x, fat);

    // Funzione max3valori()
    printf("Inserisci tre valori da trovare il massimo: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = max3valori(a, b, c);
    printf("Il massimo tra i valori inseriti è: %d\n", max);
}

int sommatoria(int n) { // Funzione con controllo degli errori in input
    if (n > 0) { // Controllo se posso fare la sommatoria di numeri interi positivi
        int somma = 0;
        int i;
        for(i = n; i>0; i--) {
            somma += i;
        }
        return somma;
    }
    else {
        printf("Non è possibile applicare la sommatoria ad un numero negativo!\n");
        return 0; // Non esiste la sommatoria di un numero negativo
    }
}

int fattoriale(int n) { // Funzione con controllo degli errori in input
    if (n > 0) { // Controllo se posso fare il fattoriale del numero
        int fat = 1;
        int i;
        for(i = n; i>0; i--) {
            fat *= i;
        }
        return fat;
    }
    else {
        printf("Non è possibile applicare il fattoriale ad un numero negativo!\n");
        return 0; // Non esiste il fattoriale di un numero negativo
    }
}

int max3valori(int a, int b, int c) {
    if(a > b && a > c) {
        return a;
    }
    else if(b > c && b > a) {
        return b;
    }
    else {
        return c;
    }
}