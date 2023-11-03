/*
Esercizio stampa a serpente (vedi .png allegato all'esercizio)
*/

#include <stdio.h>
int main() {
	int righe, colonne;
	int x = 0;
	
	// Cicli annidati/innestati
	righe = 1;
	while(righe<=10) { // Ciclo per le righe
		colonne = 1;
		if (righe%2==1) { // Se la riga è dispari
			while(colonne<=10) { // Ciclo per le colonne
				printf("%4d", x);
				x++;
				colonne++;
			}
		}
		else { // Se la riga è pari
			x = x + 9;
			while(colonne<=10) { // Ciclo per le colonne
				printf("%4d", x);
				x--;
				colonne++;
			}
			x = x +11;
		}
	righe++;
	printf("\n");
	}
}
