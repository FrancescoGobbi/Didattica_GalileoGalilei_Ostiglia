#include <stdio.h>

#define DIM 10

/*
*@brief prende in input un vettore.
La funzione stampa il massimo assoluto ed il
minimo assoluto tra i valori del vettore
*/
void stampoMaxMin(int vet[], int dim);

int main()
{
    int vet[DIM]= {1,2,3,4,5,63,4,2,1,10};
    
    stampoMaxMin(vet,DIM);
    
}
void stampoMaxMin(int vet[], int dim){
    int max=vet[0];
    int min=vet[0];
    int i;
    
    for(i=0;i<dim;i++){
        if(vet[i]>max){
            max=vet[i];
        }
        if(vet[i]<min){
            min=vet[i];
        }
    } 
    printf("Stampa max:%d, Stampa min:%d",max,min);
}

