#include <stdio.h>

#define dim 10

int main() {
    //int dim = 10;
    int vet[dim] = {1,2,3,4,5,6,7,8,9,10}; // Inizializzare un vettore
    int i;
    for(i=0; i<dim; i++) {
        printf("vet[%d] = %d\n", i,vet[i]);
    }
    printf("\n");

    // Inizializzo un vettore di tutti 0
    int vet2[10] = {0};
    vet2[3] = 2;
    for(i=0; i<dim; i++) {
        printf("vet2[%d] = %d\n", i,vet2[i]);
    }
    printf("\n");
    
    int vet3[10] = {1,2};
    for(i=0; i<dim; i++) {
        printf("vet3[%d] = %d\n", i,vet3[i]);
    }
    printf("\n");
    
    // Indirizzi del vettore
    for(i=0; i<dim; i++) {
        printf("Indirizzo di vet[%d] = %p\n", i, &(vet[i]));
    }
    printf("\n");

    printf("N.B. Indirizzo del nome del vettore: %p\n", vet);

    // Vettore di char
    char stringa[5] = {'c','i','a','o'}; 
    for(i=0; i<5; i++) {
        printf("stringa[%d] = %c Indirizzo:%p\n", i, stringa[i], &(stringa[i]));
    }   
    printf("\n");
    printf("N.B. Indirizzo del nome della stringa: %p\n", stringa);
    
    
    // Uso dei puntatori con gli array
    int vet4[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", *vet4);
    //int *ptr = vet4;
    for(i=0; i<10; i++) {
        printf("vet4[%d] = %d Indirizzo:%p\n", i, *(vet4+i), (vet4+i));
    }

    // Salvo valori presi da imput nel vettore
    int vet5[10] = {0};
    for(i=0; i<10; i++) {
        printf("Inserisco un valore in posizione %d: ", i);
        scanf("%d", &(vet5[i]));
    }
    printf("Il vettore è così composto:\n");
    for(i=0; i<10; i++) {
        printf("vet5[%d] = %d\n", i,vet5[i]);
    }
}