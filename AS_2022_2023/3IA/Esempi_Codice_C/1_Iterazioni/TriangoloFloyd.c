 /*
 "Dato un numero n in input si deve visualizzare a schermo una piramide con 
 numeri crescenti che partono da 1 e che abbia la dimensione delle righe pari 
 ad n, il quale deve essere maggiore di 0".

ESEMPIO:
se n = 5
Output:
1 
2  3
4  5  6 
7  8  9  10
11 12 13 14 15
*/

#include <stdio.h>

int main() {
	int n;
	int righe;
	int colonne;
	int cnt; // Numero da stampare
	
	// Controllo sull'input
	do{
		printf("Inserisci un valore numerico: ");
		scanf("%d", &n);
	}while(n<=0);
	
	// Cicli annidati/innestati
	righe= 1;
	cnt = 1;
	while(righe<=n) { // Ciclo per le righe
		colonne = 1;
		while(colonne<= righe) { // Ciclo per le colonne
			printf("%4d", cnt); // Stampa del numero
			cnt++; // Incremento contatore del numero
			colonne++;
		}
		righe++;
		printf("\n");
	}	
}
