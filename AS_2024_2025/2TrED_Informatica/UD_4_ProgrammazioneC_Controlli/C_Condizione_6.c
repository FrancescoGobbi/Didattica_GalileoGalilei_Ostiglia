/*
Condizione 6
Creare un programma in C che prenda in input da parte dell'utente tre valori interi (A, B e C).
Il programma deve verificare se tutti e tre i numeri sono positivi.
Se tutti i numeri sono positivi, il programma deve verificare se almeno due di essi sono pari.
Se almeno due numeri sono pari, il programma deve stampare "Almeno due numeri sono pari e tutti positivi."
Se tutti i numeri sono positivi ma meno di due sono pari, il programma deve stampare "Tutti positivi ma meno di due sono pari."
Se uno o più numeri sono negativi, il programma deve stampare "Almeno un numero è negativo."


ESEMPIO 1:
Se A = -3, B = 6 e C = 10 --> Stampare "Almeno un numero è negativo"

ESEMPIO 2:
Se A = 3, B = 6 e C = 8 --> Stampare "Almeno due numero sono pari e tutti positivi"

ESEMPIO 3: 
Se A = 3, B = 5 e C = 8 --> Stamapre "Tutti positivi ma meno di due numeri sono pari"
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b, c;

    // Prendo in input le variabili
    printf("Insersci il valore per A: ");
    scanf("%d", &a);
    printf("Insersci il valore per B: ");
    scanf("%d", &b);
    printf("Insersci il valore per C: ");
    scanf("%d", &c);

    // Faccio le varie considerazioni/controlli
    if (a > 0 && b > 0 && c > 0) {
        if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 0 && c % 2 == 0) || (b % 2 == 0 && c % 2 == 0)) {
            printf("Almeno due numeri sono pari e tutti positivi.\n");
        }
        else {
            printf("Tutti positivi ma meno di due sono pari.\n");
        }
    }
    else {
        printf("Almeno un numero è negativo.\n");
    }
}