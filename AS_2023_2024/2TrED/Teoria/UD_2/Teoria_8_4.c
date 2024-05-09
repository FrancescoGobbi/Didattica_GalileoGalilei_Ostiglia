#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0)
e stampi un triangolo al contrario formato da asterischi in base alla dimensione della variabile n

ESEMPIO: se n = 4
La stampa dovrà essere:
* * * *
  * * *
    * *
      *

N.B. Ci sono sia spazi e sia asterischi in una riga. Come fare?
Qual è la relazione tra il numero della riga rispetto al numero di spazi e di asterischi di ogni riga?     
*/

int main() {
  int n;
  int i; // Per le righe della figura
  int j; // Per le colonne della figura
  int spazi = 0;

  do{
    printf("Inserisci un numero n: ");
    scanf("%d", &n);
  }while(n<=0);

  printf("Stampo la figura:\n");

  // Doppia iterazione annidata
  for(i=1; i<=n; i++) { // For per le righe
    // Iterazione per gli spazi
    for (j=1; j<=spazi; j++) {
      printf("   ");
    }
    // Iterazione per gli asterischi
    for (j=1; j<=(n-i+1); j++) {
      printf(" * ");
    }
    printf("\n"); // Vado a capo
    spazi++;
  }

  printf("Stampo la figura (soluzione Daria):\n");
  spazi = 0;
  // Doppia iterazione annidata
  for(i=n; i>=1; i--) { // For per le righe
    // Iterazione per gli spazi
    for (j=1; j<=spazi; j++) {
      printf("   ");
    }
    // Iterazione per gli asterischi
    for (j=1; j<=i; j++) {
      printf(" * ");
    }
    printf("\n"); // Vado a capo
    spazi++;
  }
  
}