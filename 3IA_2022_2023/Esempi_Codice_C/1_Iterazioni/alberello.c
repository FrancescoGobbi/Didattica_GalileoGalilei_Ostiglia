#include <stdio.h>

int main() {
    int righe = 1, colonne;
    int n;

    // Controllo sull'input
    do {
        printf("Inserisci un valore: ");
        scanf("%d", &n);
    }while(n<=0);

    // Stampo il semi-albero di altezza n
    while(righe <= n){
        colonne = 1;
        while(colonne <= righe) {
            printf(" * ");
            colonne++;
        }
        printf("\n"); // vado a capo
        righe++;
    } 

}