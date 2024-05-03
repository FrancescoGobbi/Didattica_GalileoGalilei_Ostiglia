#include <stdio.h>

/*
Creare un programma in C che chieda in input un valore n (n>0)
e stampi un Triangolo di Tartaglia.

ESEMPIO: se n = 4
La stampa dovrà essere:
1
2 3
4 5 6
7 8 9 10

*/

int main() {
  int n;
  int i; // Per le righe
  int j; // Per le colonne
  int val = 1;

  do{
    printf("Inserisci un numero n per il Triangolo di Floyd: ");
    scanf("%d", &n);
  }while(n<=0);

  for(i=1; i<=n; i++){ // Iterazione per le righe
    for(j=1; j<=i; j++) { // Iterazione per le colonne
      printf("%d ", val); // Stampa del valore
      val++; // Incremento del valore per l'iterazione successiva
    }
    printf("\n"); // Vado a capo
  } 
}