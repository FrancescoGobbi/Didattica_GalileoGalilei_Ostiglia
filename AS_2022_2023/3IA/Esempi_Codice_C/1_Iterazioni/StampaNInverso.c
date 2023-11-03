#include <stdio.h>

int main() {
    int n;
    int x;

    // Controllo sull'input
    do {
        printf("Inserisci un valore intero: ");
        scanf("%d", &n);
    }while(n<=0);

    // Stampa al contrario del numero
    while(n!=0) { // Terminatore quando n == 0
        x = n%10;
        printf("%d", x);
        n = n/10;
    }

    printf("\n");

}