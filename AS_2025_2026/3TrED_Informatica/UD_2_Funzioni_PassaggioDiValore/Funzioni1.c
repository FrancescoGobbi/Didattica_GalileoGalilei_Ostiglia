#include <stdio.h>
#include <math.h>

/*
N.B. Per creare una funzione in C è necessario:
- Creare il prototipo della funzione, prima del main()
- Definire la funzione che si vuole costruire, sotto al main()
- Chiamare la funzione stessa nel main() o in altr funzioni
*/

// Dichiarazione delle funzioni
/**
 * Funzione che prende in input due valori interi e restituisce
 * la somma tra i due valori
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int sommaVar(int x, int y);

/**
 * Funzione che prende in input un valore intero e lo stampa
 * 
 * @param a 
 */
void stampaInt(int a);

/***
 * Funzione che definisce se un numero è primo oppure no
 * 
 * @param a  
*/
void numeroPrimo(int a);

int main() {
    int x = 5;
    int y = 6;

    printf("Sono nella funzione main(): x=%d y=%d\n", x,y);
    printf("Sono nella funzione main(): x=%p y=%p\n", &x,&y);

    // Chiamata delle funzioni stampaInt()
    stampaInt(x);
    stampaInt(y);
    printf("Sono nella funzione main(): x=%d y=%d\n", x,y);
    printf("Sono nella funzione main(): x=%p y=%p\n", &x,&y);

    printf("\n\nDevo chiamare sommaVar() per sommare due valori.\n");
    int somma = sommaVar(x,y);
    stampaInt(somma);

    printf("\n\nSono tornato nella funzione main().\n");
    // Funzioni già viste a lezione
    printf("Inserisci due valori interi: ");
    scanf("%d%d", &x, &y);
    printf("Le variabili sono state inserite\n");
    printf("Sono nella funzione main(): x=%d y=%d\n", x,y);
    printf("Sono nella funzione main(): x=%p y=%p\n", &x,&y);

    // Funzione della libreria math.h
    // Funzione pow(base, esponente); 
    // La funzione è all'interno della libreria math.h
    // Funzione che prende in input la base, come primo argomento
    // e l'esponente come secondo argomento 
    // Esegue la potenza della base elevata all'esponente
    // Il risultato/return è un float
    printf("\n\nSono tornato nella funzione main().\nFaccio la l'operazione %d^%d\n", x, y); 
    printf("Sono nella funzione main(): x=%p y=%p\n", &x,&y);
    float potenza = pow(x, y); 
    printf("%d^%d = %.2f\n", x, y, potenza);

    // Potenza di una potenza (funzione con all'interno un'altra funzione)
    printf("\n\nSono tornato nella funzione main().\nFaccio la l'operazione (2^4)^5\n"); 
    float val = pow(pow(2,4),5);
    printf("%f\n", val);

    // Funzione void
    printf("\n\nSono tornato nella funzione main().\nChiedo in input un numero per verificare se è un numero primo o no.\n"); 
    printf("Inserisci un numero da definire se è primo: ");
    scanf("%d", &x);
    numeroPrimo(x);
    printf("\n\nSono tornato nella funzione main().\nVerifico ora se 15 è un numeroprimo o no.\n"); 
    x = 15;
    numeroPrimo(x);
    
} // Fine main()

void stampaInt(int a) {
    printf("\n\nSono nella funzione stampoInt().\nDevo stampare il numero %d.\n", a);
    printf("Sono nella funzione stampaInt(): a=%p\n", &a);
    printf("Il numero intero è a=%d\n", a);
}

int sommaVar(int x, int y) {
    printf("\n\nSono nella funzione sommaVar().\nDevo sommare i valori: x=%d y=%d\n", x,y);
    printf("Sono nella funzione sommaVar(): x=%p y=%p\n", &x,&y);
    int s = x + y;
    return s; // return x+y;
}

void numeroPrimo(int a) {
    printf("\n\nSono nella funzione numeroPrimo().\nDevo verificare se il numero %d è primo.\n", a);
    printf("Sono nella funzione numeroPrimo(): a=%p\n", &a);
    int cnt = 0;
    int i;
    for(i = 1; i<=a; i++) {
        if (a%i == 0) {
            cnt++;
        }
    }

    if (cnt == 2) {
        printf("%d è primo\n", a);
    }
    else{
        printf("%d è NON primo\n", a);
    }
}