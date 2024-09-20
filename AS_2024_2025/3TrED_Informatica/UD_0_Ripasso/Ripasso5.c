/**
 * @file Ripasso5.c
 * @author your name
 * @brief Crea un programma in C che prenda in input un valore intero naturale n (n>=0) 
 * e due caratteri (char) in input A e B.
 * Il programma deve stampare una matrice quadrata in cui le righe si alternano tra il
 * valore contenuto nella variabile A e quello contenuto nella variabile B.
 * 
 * ESEMPIO: n = 3, A = 'c' e B = 'd'
 * Quindi si stamperà:
 * c c c 
 * d d d
 * c c c
 * 
 * @version 0.1
 * @date 2024-09-13
 * 
 * 
 */

#include <stdio.h>

int main () {
	int n, i, j;
	char A, B;
	
    do{
        printf("Inserisci un valore intero: ");
        scanf("%d", &n);
        fflush(stdin);
    }while( n<=0 );
    
    // Vogliamo: Da 'A' a 'Z' e da 'a' a 'z'
    // Ovvero:  (A>=65 && A<=90) || (A>=97 && A<=122)
    // Altrimenti: (A>='A' && A<='Z') || (A>='a' && A<='z')
    // Negazione(NOT --> !) della condizione composta/articolata sopra
    // Quindi, NON vogliamo: (A<'A' || A>'Z') && (A<'a' || A>'z')
    
    //(Esempio: Voglio (x>=5 && x<=10) --> NON voglio: (x<5 || x>10))
    do {
	    printf("Inserisci un primo carattare: ");
	    scanf("%c", &A);
	    fflush(stdin);
	}while((A<'A' || A>'Z') && (A<'a' || A>'z'));
    
    do {
	    printf("Inserisci un secondo carattare: ");
	    scanf("%c", &B);  
		fflush(stdin); 
	}while((B<'A' || B>'Z') && (B<'a' || B>'z'));

    printf("Il valore di n �: %d\n", n);
	printf("I due caratteri sono �: %c e %c\n", A, B);
	
	for(i = 1; i<=n; i++) { // Iterazione per le righe
        for(j = 1; j<=n; j++) { // Iterazione per le colonne
            if (i % 2 == 0) { // Righe pari
                printf(" %c ",B); // Stampa del carattere contenuto nella variabile B
            } 
            else { // Righe dispari
                printf(" %c ",A);
            }
        }
        printf("\n"); // Vado a capo riga
    }
}
