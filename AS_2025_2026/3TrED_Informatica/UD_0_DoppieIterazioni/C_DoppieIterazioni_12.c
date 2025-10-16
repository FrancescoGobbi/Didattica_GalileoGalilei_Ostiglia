/* Doppie Iterazioni 12 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Questo valore deve essere compreso tra 1 e 20 e dispari.
Il programma deve stampare un alberello al contrario.

ESEMPIO: Se A = 9
 *********
  *******
   *****
    ***
     *


ESEMPIO: Se A = 7
 *******
  *****
   ***
    *

*/

#include <stdio.h>

int main() {
    int A; // Variabili per le dimensioni della figura
    int i, j, z; // Variabili di iterazione

    // Prendo in input il valore di A compreso tra 1 e 20 e deve essere dispari
    do {
        printf("Inserisci un valore per A (compreso tra 1 e 20): ");
        scanf("%d", &A);
    } while (A < 1 || A > 20 || A%2==0); // NOI VOGLIAMO: (A>=1 && A<=20 && A%2==1)

    int Nrighe = ((A/2)+1); // Formula empirica per calcolare il numero delle righe
    int spazietto = 0;
    int asterischi = A;  

    // Ciclo for per le righe dell'alberello
    for (i = 1; i <= Nrighe; i++){

      // Ciclo for per il numero di spazietti
      for (j = 1; j <= spazietto; j++) {
        printf(" "); // Stampa dei spazietti
      }
      // Ciclo for per il numero degli asterischi
      for (z = 1; z<=asterischi; z++){
        printf("*"); // Stampa degli asterischi
      }
      printf("\n"); // Vado a capo dopo ogni riga
      spazietto++;
      asterischi -= 2;
    }
}