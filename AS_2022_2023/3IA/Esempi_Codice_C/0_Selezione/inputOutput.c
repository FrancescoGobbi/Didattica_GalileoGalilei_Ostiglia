#include <stdio.h>
// Uso del define per creare una sostizione val = 3
#define val 3 

int main () {
    const int val2 = 3;
    int x;
    int y;
    float a;
    double b;
    char c;
    
    // Stampa delle costanti
    printf("La costante è: %d\n", val2); 
    printf("La costante è: %d\n", val);

    
    printf("Inserisci un valore numerico per la x: ");
    scanf("%d", &x);
    //fflush(stdin); // Pulisco il buffer in input
    printf("Inserisci un valore per la x ed uno per la y: ");
    scanf("%d %d", &x, &y);
    //fflush(stdin); // Pulisco il buffer in input
   
    printf("Le coordinate sono: (%d, %d)\n", x, y);
    
    printf("\n\n\n");

    printf("Inserisci un numero decimale (float): ");
    scanf("%f", &a);
    //fflush(stdin); // Pulisco il buffer in input
    printf("Il float è: %.2f\n", a);
    
    
    printf("Inserisci un numero decimale (double): ");
    scanf("%lf", &b);
    fflush(stdin); // Pulisco il buffer in input
    printf("Il double è: %.10f\n", b);
    
    printf("Inserisci un carattere: ");
    scanf("%c", &c);
    fflush(stdin); // Pulisco il buffer in input
    printf("char: %c\n", c); // Stampa della variabile char
    printf("char in numero: %d\n", c); // STAMPA DEL NUMERO ASSOCIATO AL CARATTERE

    getchar();
    return(0);
}