/*
Stampare tutta la tabellina dal valore 1 al valore 10

righe: Colonne:
		1 2 3 4 5 6 7 8 9 10
	1	1 2 3 4 5 6 7 8 9 10
	2	2 4 6 8 10 12 14 16 18 20
	3	.
	4	.
	5	.
	6	.
	7	.
	8	.
	9	.
	10	10 20 30 40 50 60 70 80 90 100
*/

#include <stdio.h>

int main() {
	int righe = 1;
	int colonne = 1;
	
	// Cicli annidati/innestati
	while(righe<=10){
		colonne = 1; // Riprendo dall'inizio della riga
		while(colonne<=10) {
			printf("%4d", righe*colonne);
			colonne++; // Incremento le colonne
		} // Fine while interno
		printf("\n"); // Vado a capo riga
		righe++; // Varo alla riga successiva
	} // Fine while esterno
}
