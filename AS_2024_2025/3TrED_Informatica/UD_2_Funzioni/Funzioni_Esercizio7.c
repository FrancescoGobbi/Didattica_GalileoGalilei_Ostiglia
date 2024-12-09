#include <stdio.h>
#include <math.h>

/** FUNZIONE 1
 * @brief Funzione che prende in input un valore intero ed un puntatore ad una variaibile intera.
 * La funzione deve moltiplicare val ad a e salvare il risultato dentro val.
 * 
 * @param a 
 * @param val 
 */
void prodotto(int a, int *val);

/** FUNZIONE 2
 * @brief Funzione che prende in input un valore intero e restituisce il valore assoluto del numero.
 * 
 * @param a 
 * @return int 
 */
int valoreAssoluto(int a); 

/** FUNZIONE 3
 * @brief Funzione che prende in input due valori interi e restituisce 1
 * se a è multiplo di b, altrimenti 0
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int mutiplo(int a, int b);

/** FUNZIONE 4
 * @brief Funzione che calcola l'ipotenusa nel triangolo rettangolo con cateti a ed b.
 * Il risultato andrà messo dentro la variaible puntata da c.
 * 
 * @param a 
 * @param b 
 * @param c 
 */
void ipotenusa(int a, int b, float *c);

/** FUNZIONE 5
 * @brief Funzione che prende in input un valore n intero. La funzione chiederà all'utente (quindi
 * all'utente verrà chiesto di inserire dei valori) n numeri interi e stamperà ogni valore inserito
 * dall'utente.
 * 
 * @param n 
 */
void stampaNumeri(int n);

/** FUNZIONE 6
 * @brief Funzione che prende in input un numero n e stampa i primi n numeri primi.
 * Quindi se n = 5, deve stampare 2, 3, 5, 7, 11; ovvero i primi 5 numeri primi.
 * 
 * @param n 
 */
void stampaNPrimi(int n);

int main() {
    int x = 3;
    int y = 5;

    printf("I numeri sono: %d e %d\n", x, y);

    // Chiamata FUNZIONE 1
    prodotto(x, &y);

    // Stampa del risulato
    printf("Il prodotto tra i numeri è: %d\n", y);

    int z = -3;
    printf("Il numero negativo è: %d\n", z);

    // Chiamata FUNZIONE 2
    int positivo = valoreAssoluto(z);
    printf("Il valore con valore assoluto è: %d\n", positivo);

    int a = 12;
    int b = 4;
    float ipote;

    // Chiamata FUNZIONE 3
    int risultato = mutiplo(a, b);

    if(risultato == 1) {
        printf("%d è un multiplo di %d.\n", a, b);
    }
    else {
        printf("%d NON è un multiplo di %d.\n", a, b);
    }

    // Chiamata FUNZIONE 4
    ipotenusa(a, b, &ipote); 

    int n;
    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &n);
    stampaNumeri(n); // Chiamata FUNZIONE 5

    // Chiamata FUNZIONE 6
    stampaNPrimi(n);
}

// FUNZIONE 1
void prodotto(int a, int *val) {
    *val = *val * a;
}

// FUNZIONE 2
int valoreAssoluto(int a) {
    if (a < 0) {
        return (-1*a);
    }
    return a;
}

// FUNZIONE 3
int mutiplo(int a, int b) {
    if (a%b == 0) {
        return 1;
    }
    return 0;
}

// FUNZIONE 4
void ipotenusa(int a, int b, float *c){
    *c = (float) pow((a*a) + (b*b), 0.5);
}

// FUNZIONE 5
void stampaNumeri(int n){
    int val;
    int i;
    for(i = 1; i<= n; i++) {
        printf("Inserisci il %d° valore intero: ", i);
        scanf("%d", &val);
        printf("Il valore inserito è %d\n", val);
    }
}

// FUNZIONE 6
void stampaNPrimi(int n) {
    int primo = 2;
    int i = 1; // Contanto per i numeri primi trovati
    int j;
    int check;

    while(i<=n){
        check = 0;
        for(j = 1; j<=primo; j++) { // Cerco di divisori
            if(primo%j == 0) { // Verifico se è un divisore
                check++; // Conto i divisori
            }
        }
        if (check == 2) { // Se è primo lo stampo
            printf("%4d", primo); // Stampa del numero
            i++; // Incrmento il numero di valori primi trovati
        }
        primo++; // Mi preparo a guardare il numero successivo
    }
    printf("\n");
}