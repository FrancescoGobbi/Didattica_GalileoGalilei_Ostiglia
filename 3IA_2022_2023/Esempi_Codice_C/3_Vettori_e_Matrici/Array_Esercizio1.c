#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

int main(){
    int vet[DIM] = {0};
    int i, count = 0;
    int n;
    srand(time(NULL));

    for(i=0; i<DIM; i++) {
        vet[i] = rand()%10 + 1;
    }

    for(i=0; i<DIM; i++) {
        printf("%3d", vet[i]);
    }
    printf("\n");

    do{
        printf("---");
        scanf("%d", &n);
    }while(n<1 || n>10);

    for(i=0; i<DIM; i++) {
        if(vet[i]==n){
            count++;
        }
    }
    printf("Il numero %d compare %d volte\n", n, count);
}