/* ESERCIZIO 1 (2.5 punti)
Crea un progamma in C, con main() e librerie, che prenda in input, da parte dell’utente, 5
valori interi, verifichi e stampi il numero minore.

ESEMPIO: Se A = 4, B = 5, C = 10, D = 4 e E = 1, il programma dovr`a stampare 1, in quanto `e il
numero minore tra i quattro valori inseriti.
*/

#include <stdio.h>

int main() {
    int A, B, C, D, E;
    int min;

    printf("Inserisci 5 numeri interi:\n");
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    // Trova il numero minore tra A, B, C, D ed E
    if (A <= B && A <= C && A <= D && A <= E) {
        printf("Il numero minore e': %d\n", A);
    } else if (B <= A && B <= C && B <= D && B <= E) {
        printf("Il numero minore e': %d\n", B);
    } else if (C <= A && C <= B && C <= D && C <= E) {
        printf("Il numero minore e': %d\n", C);
    } else if (D <= A && D <= B && D <= C && D <= E) {
        printf("Il numero minore e': %d\n", D);
    } else {
        printf("Il numero minore e': %d\n", E);
    }
}