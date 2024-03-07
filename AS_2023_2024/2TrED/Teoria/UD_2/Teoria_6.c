#include <stdio.h>

// Chiedere in input un valore intero (n), strettamente maggiore di 0.
// Il programma chiede in input n-valori interi strettamente maggiori di 0.
// Il programma deve esereguire la media di questi valori in input.

/*
ESEMPIO:
Se n = 3, il programma dovrà chiedere in input 3 valori interi quindi
Ipotizziamo che l'utente inserisca: 5, 4 e 8.
La somma dei tre valori inseriti sarà quindi: 17 (5+4+8)
Di conseguenza la media sarà: 17/3 = 5,66667  (N.B. Un valore con la virgola...)
*/

int main() {
    // n è la variabile di input per definire il numero di valori da inserire
    // somma è la variabile dove salvare le ripetute somme dei valori che l'utente inserirà
    // val è la variabile che l'utente inserirà di volta in volta
    int n, somma = 0, val;
    float media; // Variabile per la media, float per la virgola
    int i; // Variabile per il loop

    do{
        printf("Dimmi quanti numeri vuoi inseire per eseguire la media: ");
        scanf("%d", &n);
    }while(n<=0);

    for(i = 1; i<=n; i++) {
        do{
            printf("Inserisci il valore n°%d: ", i);
            scanf("%d", &val);
        }while(val<=0);
        somma = somma + val;
    }

    // Devo eserguire il CAST della variabile intera somma a float
    // e successivamente dividere per il valore interno n
    // Così facendo ottendo (float)/(int) --> float
    // Il risultato di conseguenza avrà la vigola
    media = (float) somma / n;

    printf("La media dei valori inseriti è: %f\n", media);
}