/* Doppie Iterazioni 3 (Iterazioni annidate)

Creare un programma in C che prenda in input da parte dell'utente un valore intero A.
Il valore deve essere compreso tra 1 e 10 e che sia dispari.

Il programma deve stampare un alberello di Natale formato da * (asterischi) di dimensione A.
L'alberello deve essere composto da un triangolo isoscele di base A sterischi.

ESEMPIO:
Se l'utente inserisce A=3, il programma deve stampare:
   *
  ***

Se l'utente inserisce A=5, il programma deve stampare:
    *
   ***
  *****


Se l'utente inserisce A=7, il programma deve stampare:
     *
    ***
   *****
  *******

Input : 7  --> Output: 4
Formula usata : (A/2) + 1 = Numero Righe dell'alberello

Come sarà l'altezza del triangolo isoscele? Come posso calcolare il numero di righe da stampare?
Come posso calcolare il numero di spazi da stampare prima di ogni riga?

*/

#include <stdio.h>

int main() {
  int A; // Variabili per le dimensioni della figura
  int i, j, z; // Variabili di iterazione

  // Prendo in input il valore di A compreso tra 1 e 10 e deve essere dispari
  do {
      printf("Inserisci un valore per A (compreso tra 1 e 10): ");
      scanf("%d", &A);
  } while (A < 1 || A > 10 || A%2==0); // NOI VOGLIAMO: (A>=1 && A<=10 && A%2==1)

  int Nrighe = ((A/2)+1); // Formula empirica per calcolare il numero delle righe
  int spazietto = A - Nrighe;
  int asterischi = 1;  

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

    // Vado a capo riga e sistemo le variabili degli spazietti e degli asterischi
    printf("\n");
    spazietto--; // spazietto = spazietto - 1;
    asterischi = asterischi + 2; // asterischi+=2;
  }
}