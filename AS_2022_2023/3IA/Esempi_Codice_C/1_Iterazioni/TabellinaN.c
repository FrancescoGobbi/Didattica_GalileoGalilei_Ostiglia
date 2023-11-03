/*
Stampare tutta la tabellina del numero n in input.
Le restanti vanno messe con #

ES n = 3
righe: Colonne:
		1 2 3 4 5 6 7 8 9 10
	1	# # # # # # # # # # 
	2	# # # # # # # # # # 
	3	3 6 9 12 15 18 21 24 27 30
	4	.
	5	.
	6	.
	7	.
	8	.
	9	.
	10	# # # # # # # # # # 

*/

#include <stdio.h>

int main() {
	int righe = 1;
	int colonne = 1;
    int n;
    char carattere = '#';

    do{
        printf("Inserisci un numero positivo: ");
        scanf("%d", &n);
    }while(n<=0 || n>10);
	
	// Cicli annidati/innestati
	while(righe<=10){
		colonne = 1; // Riprendo dall'inizio della riga
		while(colonne<=10) {
            if (righe == n) { // Se sono nella riga n-esima corretta
			    printf("%4d", righe*colonne);
            }
            else {
                printf("%4c", carattere);
            }
			colonne++; // Incremento le colonne
		} // Fine while interno
		printf("\n"); // Vado a capo riga
		righe++; // Varo alla riga successiva
	} // Fine while esterno
}