#include <stdio.h>
#include <string.h>

#define DIM 15

int main() {
    // Nome del file
    char file_name[] = "scrittura.txt";
    // Variabili
    char str[DIM];
    int n;

    // Apertura del file
    FILE * fpIn = fopen(file_name, "wt");

    // ESERCIZIO 1
    /* Dato il file/stream aperto per la scrittura:
    - chiedere in input all'untente un valore numerico n
    - chiedere n-parole di lunghezza minore o uguale di 15 all'utente
    - ogni parola deve essere scritta nel file
    */
    
    printf("Inserisci n: ");
    scanf("%d", &n);
    fflush(stdin);
    
    int i;
    for(i = 1; i <= n; i++){
    	do{
    		printf("\nInserisci una parola: ");
    		scanf("%s", str);
			fflush(stdin);	
		}while(strlen(str) > 15);
		if(i == n){
			fprintf(fpIn, "%s", str);
		}
		else{
			fprintf(fpIn, "%s ", str);
		}
	}
    fclose(fpIn);   
}