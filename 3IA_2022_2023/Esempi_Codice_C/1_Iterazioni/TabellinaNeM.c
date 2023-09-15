/*
Stampare tutte le tabelline tra due numeri in input (n e m).
Le restanti vanno messe con #

ES n = 3 e m = 4
righe: Colonne:
		1 2 3 4 5 6 7 8 9 10
	1	# # # # # # # # # # 
	2	# # # # # # # # # # 
	3	3 6 9 12 15 18 21 24 27 30
	4   4 8 12 16 20 24 28 32 36 40
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
    int inizio; // n
    int fine; // m
    char carattere = '#';

    do{
        printf("Inserisci un primo numero positivo: ");
        scanf("%d", &inizio);
    }while(inizio<=0 || inizio>10);

    do{
        printf("Inserisci un secondo numero positivo: ");
        scanf("%d", &fine);
    }while(fine<=inizio || fine>10);
	
	// Cicli annidati/innestati
	while(righe<=10){
		colonne = 1; // Riprendo dall'inizio della riga
		while(colonne<=10) {
            if (righe >= inizio && righe<=fine) { // Se sono nella riga n-esima corretta
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
