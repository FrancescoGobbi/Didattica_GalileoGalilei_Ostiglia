#include <stdio.h>

/** FUNZIONE 1
 * @brief Funzione che calcola la potenza utilizando il prodotto ripetuto.
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int potenza(int a, int b);

/** FUNZIONE 2
 * @brief Funzione che verifichi se un numero è perfetto.
 * 
 * @param n 
 * @return int 
 */
int numeroPerfetto(int n);

/**
 * @brief Funzione che calcoli la sommatoria di n.
 * 
 * @param n 
 * @return int 
 */
int sommatoria(int n);

/** FUNZIONE 3
 * @brief Funzione che confronta fattoriale e sommatoria.
 * 
 * @param A 
 * @param B 
 */
void confronto(int *A, int *B);

/** FUNZIONE 4
 * @brief Funzione che prende in input un valore n, chiede all'untente di inserire n valori interi
 * e restiscuisce la somma degli n valori inseriti dall'utente.
 * 
 * @param n 
 * @return int 
 */
int sommaVal(int n);

int main() {
    int a = 5, b = 6;

    printf("I valori iniziali sono: %d e %d\n", a, b);

    // FUNZIONE 1
    int prod = prodotto(a, b);
    printf("%d * %d = %d\n", a, b, prod);

    // FUNZIONE 2
    int perf = numeroPerfetto(a);
    if (perf) {
        printf("Il numero %d è perfetto!\n", a);
    }
    else{
        printf("Il numero %d NON è perfetto!\n", a);
    }

    int perf = numeroPerfetto(b);
    if (perf) {
        printf("Il numero %d è perfetto!\n", b);
    }
    else{
        printf("Il numero %d NON è perfetto!\n", b);
    }

    // FUNZIONE 3
    confronto(&a, &b);
    if (a == 1 && b == 0) {
        printf("La sommatoria è più grande del fattoriale!\n");
    }

    // FUNZIONE 4
    int n = 5;
    int som = sommaVal(n);
    printf("La somma tra i primi %d valori inseriti è: %d\n", n, som);
}

int potenza(int a, int b) {
    int pot = 1;
    int i;
    
    for(i = 1; i<=b; i++) {
        pot *= a;
    }

    return pot;
}

int numeroPerfetto(int n) {
    int somma = 0;
    int i;

    for(i = 1; i<n; i++) {
        if (n % i == 0) {
            somma += i;
        }
    }
    if (somma == n) {
        return 1;
    }
    return 0;
}

int sommatoria(int n) {
    int somma = 0, i;

    for(i = 1; i<=n; i++){
        somma+=i;
    }
    return somma;
}

int fattoriale(int n) {
    int fatt = 1;
    int i;

    if (n >= 0) {
        for(i = 1; i <= n; i++) {
            fatt = fatt * i;
        }
    }
    return fatt;
}

void confronto(int *A, int *B) {
    int fat = fattoriale(*A);
    int sum = somamtoria(*B);

    if (fat > sum) {
        *A = 1;
        *B = 0;
    }
    else {
        *A = 0;
        *B = 1;
    }
}

int sommaVal(int n) {
    int som = 1;
    int i;
    int val;

    for(i = 1; i<=n; i++) {
        printf("Inserisci il %d° valore: ", i);
        scanf("%d", &val);
        som += val;
    }

    return som;
}