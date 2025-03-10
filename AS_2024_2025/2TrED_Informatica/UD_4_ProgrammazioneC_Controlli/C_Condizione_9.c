/*
Condizione 9
Creare un programma in C che prenda in input da parte dell'utente tre valori interi (A, B e C).
Il programma deve verificare se i tre numeri possono formare i lati di un triangolo.
Se i numeri possono formare un triangolo, il programma deve determinare il tipo di triangolo:
- Equilatero (tutti i lati uguali)
- Isoscele (due lati uguali)
- Scaleno (tutti i lati diversi)
Il programma deve stampare il tipo di triangolo.
Se i numeri non possono formare un triangolo, il programma deve stampare "I numeri non possono formare un triangolo."

N.B. Quali sono le condizioni affinché tre numeri possano formare un triangolo?
*/

#include <stdio.h>

int main() {
    // Creo le variabili
    int a, b, c;

    // Prendo in input le variabili
    printf("Insersci il valore per il lato A: ");
    scanf("%d", &a);
    printf("Insersci il valore per il lato B: ");
    scanf("%d", &b);
    printf("Insersci il valore per il lato C: ");
    scanf("%d", &c);

    if( ((a+b) >= c) && ((a+c) >= b) && ((b+c) >= a) ) { // Verifico se è un triangolo
        if (a == b && b == c) { // Verifico se il triangolo è equilatero
            printf("Il traingolo è equilatero.\n");
        }
        else if( (a == b) || (b == c) || (c == a) ) { // Verifico se il triangolo è isoscele
            printf("Il traingolo è isoscele.\n");
        }
        else { // Altrimenti, il triangolo è scaleno
            printf("Il traingolo è scaleno.\n");
        }
    }
    else {
        printf("I numeri non possono formare un triangolo.\n");
    }
}