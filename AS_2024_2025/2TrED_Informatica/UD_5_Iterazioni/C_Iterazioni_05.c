/*
Iterazione 5 (Utilizzo del while)
Creare un programma in C che prenda in input da parte dell'utente un valore intero (n).
Il programma deve determinare se il valore inserito è un numero perfetto. 
Se il valore è un numero perfetto, il programma deve stampare "Il numero è perfetto."
Se il valore non è un numero perfetto, il programma deve stampare "Il numero non è perfetto."
N.B. Un numero perfetto è un numero intero positivo che è uguale alla somma dei suoi divisori propri (escluso il numero stesso).
Esempio: 6 è un numero perfetto perché 6 = 1 + 2 + 3.
*/

#include <stdio.h>

int main() {
    // Creazione delle variaibli
    int n;
    int i = 1; // Inizializzazione della variabile di controllo del ciclo
    int sum = 0;
    // Alternativa: int n, i = 1, sum = 0;
    
    // Input del numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Controllo i valori da 1 a N 
    while (i < n) { // Condizione del ciclo: continua finché i è minore di n
        if (n % i == 0){
            sum += i; // Alternativa: sum = sum + i;
        }
        i = i + 1; // Incremento della variabile di controllo del ciclo (Alternativa: i++;)
    }

    // Controllo se il numero è perfetto
    if (sum == n) {
        printf("Il numero è perfetto.\n");
    }
    else {
        printf("Il numero NON è perfetto.\n");
    }
}