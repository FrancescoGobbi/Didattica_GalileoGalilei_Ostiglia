/*
"Dati in input due valori, n ed m, con n il numero delle righe ed m il numero delle colonne, creare un rettangolo di dimensione nxm".

ESEMPIO:
Se n = 3 ed m = 4
Output:
* * * *
* * * *
* * * *
*/

#include <stdio.h>

int main() {
	int n, m, righe, colonne;
	char asterisco = '*'; // Carattere asterisco per una migliore formattazione
	
	// Controllo sull'input
	do{
		printf("Inserisci il numero dele righe e delle colonne: ");
		scanf("%d%d", &n, &m);
	}while(n<=0 || m<=0);
	
	// Cicli annidati/innestati
	righe= 1;
	while(righe<=n) { // Ciclo per le righe
		colonne = 1;
		while(colonne<= m) { // Ciclo per le colonne
			printf("%4c", asterisco); // Stampa del carattere
			colonne++;
		}
		righe++;
		printf("\n");
	}
}
