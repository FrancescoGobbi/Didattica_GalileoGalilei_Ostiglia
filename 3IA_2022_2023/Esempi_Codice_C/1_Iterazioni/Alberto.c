#include <stdio.h>

int main(){
	int righe=1,colonne=1,i=0,n=1;
	
	// Controlo sull'input, variabile i
	do{
		printf ("inserisci il numero ");
		scanf("%d",&i);
	}while(i<1);
	
	while(righe <= i){ // Ciclo per le righe
        colonne = 1;
        n=1;
        while(colonne <=i) { // Ciclo per le colonne
            if(righe>colonne) { // Se l'indice di riga è maggiore di quello delo colonne
			// Si può fare anche al contrario: se l'indice delle colonne è minore di quello delle righe
            	printf("   -");
			}
            
            else { // Altrimenti stampo il numero
            	printf("%4d",n);
			}

            colonne++;
			n++;
		}
		printf("\n"); 
        righe++;
	}
}