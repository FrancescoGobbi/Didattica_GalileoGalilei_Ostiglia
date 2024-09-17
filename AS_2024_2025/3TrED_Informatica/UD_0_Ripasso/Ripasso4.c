/**
 * @file Ripasso4.c
 * @author your name 
 * @brief Crea un programma in C che stampi il perimetro di un rettandolo,
 * utilizzando solo asterischi di dimensioni A e B (A <= B), variabili date in input.
 * Se A = 3 e B = 4
 * 
 *  * * * *
 *  *     *
 *  * * * *
 * 
 * @version 0.1
 * @date 2024-09-13
 *
 * 
 */

#include <stdio.h>

int main () {
    int A, B;
    int i, j;

    do{
        printf("Inserisci due valori interi: ");
        scanf("%d %d", &A, &B);
    }while( A>B );

    for(i=1; i<=A ; i++){ // Per le RIGHE
        for(j=1; j<=B ; j++){ // Per le COLONNE
            if(i==1 || i==A || j==1 || j==B) { // Per gli ASTERISCHI
                printf(" * ");
            }
            else {
                printf("   "); // Per gli SPAZIETTI
            }
        }
        printf("\n");
    }
}