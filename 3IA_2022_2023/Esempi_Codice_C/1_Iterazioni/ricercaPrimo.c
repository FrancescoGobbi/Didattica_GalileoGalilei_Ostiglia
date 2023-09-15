// Ricerca di un numero primo

#include <stdio.h>

int main() {
    int n;
    int contaPrimi = 0;
    int i = 1; // Contatore del ciclo

    do{
        printf("Inserisci un valore positivo: ");
        scanf("%d", &n);
    }while(n<=0);

    // Cerco e conto tutti i divisori di un numero
    while(i<=n) {
        if(n%i==0) {
            contaPrimi++;
        }
        i++;
    }

    if (contaPrimi == 2) {
        printf("Il numero %d è primo!\n", n);
    }
    else {
        printf("Il numero NON %d è primo!\n", n);
    }
}
