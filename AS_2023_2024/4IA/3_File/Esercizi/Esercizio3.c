#include <stdio.h>

#define DIM 15

int main() {
    // Nome del file
    char file_name[] = "valori.txt";
    // Variabili
    int val;
    int n;

    // Esercizio 3
    /*
    Scrivere il file "valori.txt":
    - chiedere un numero di valori in input all'utente, terminati con il valore 0
    - i valori che l'utente inserisce devono essere scritti nel file "valori.txt"
    - i valori che si possono scrivere nel file sono esclusivi, quindi non ci possono essere doppioni/ripetizioni

    ES input: 3, 4, 4, 5, 6, -9 , 0
    Nel file dovrà esserci: 3, 4, 5, 6, -9 (chiaramente non lo 0)
    */
    
    int i;
    int check; // Variabile di controllo se il valore è presente nel file
    do{
    	check=0;

		printf("inserisci un valore: ");
    	scanf("%d", &val);
    	fflush(stdin);

        // Apro il file per la lettura
    	FILE * controllo = fopen(file_name, "rt");
    	while(!feof(controllo)){
    		fscanf(controllo, "%d", &n);
    		if(n == val){
    			check = 1;
			}
		}
		if(check==0 && val!=0){ // Se il valore non è presente nel file E non è uguale a 0
            // Apertura del file per la scrittura
            FILE * fpIn = fopen(file_name, "wt");
			fprintf(fpIn, "\n%d", val);
            fclose(fpIn);
		}
        // Chiudo il file per la lettura
        fclose(controllo);
	}while(val != 0);   
}