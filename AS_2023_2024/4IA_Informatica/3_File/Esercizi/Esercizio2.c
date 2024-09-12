#include <stdio.h>

#define DIM 15

int main() {
    // Nome del file
    char file_name[] = "scrittura.txt";
    // Variabili
    char str[DIM];
    int cnt = 0;

    // Apertura del file
    FILE * fpIn = fopen(file_name, "rt");

    // Esercizio 2
    /*
    Leggere il file "scrittura.txt":
    - contare il numero di parole che hanno la lettera maiuscola
    */
    while(!feof(fpIn)){
    	fscanf(fpIn,"%s", str);
    	if(str[0] >= 'A' && str[0] <= 'Z'){
    		cnt++;
		}
	}
    printf("Il numero di parole che hanno la lettera maiuscola sono: %d", cnt);

	fclose(fpIn);
}