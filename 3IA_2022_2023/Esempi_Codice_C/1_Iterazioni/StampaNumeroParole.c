#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int Ncifre = 0;
    int tmp; // Variabile temporanea
    int cifra;

    // Controllo sull'input
    do {
        printf("Inserisci un valore intero: ");
        scanf("%d", &n);
    }while(n<=0);

    tmp = n; // Uso della variabile temporanea

    // Conta delle cifre del numero
    while(tmp!=0) { // Terminatore quando n == 0
        Ncifre++;
        tmp = tmp/10;
    }

    Ncifre--; // Decremento il numero delle cifre

    // Ciclo per vedere il numero
    while(n!=0) {
        // Prendo la prima cifra rispetto al numero n inserito
        cifra = n / (int)pow(10,Ncifre);

        // Stampa della cifra in lettere
        switch(cifra) {
            case 0:
                printf("Zero ");
                break; 
            case 1: 
                printf("Uno ");
                break;
            case 2: 
                printf("Due ");
                break;
            case 3: 
                printf("Tre ");
                break;
            case 4: 
                printf("Quattro ");
                break;
            case 5: 
                printf("Cinque ");
                break;
            case 6: 
                printf("Sei ");
                break;
            case 7: 
                printf("Sette ");
                break;
            case 8: 
                printf("Otto ");
                break;
            case 9: 
                printf("Nove ");
                break;
            default:
                break;
        } // Fine switch

        // Prendo il numero senza la prima cifra
        n = n % (int)pow(10,Ncifre);
        Ncifre--; // Decremento il numero delle cifre per l'iterazione successiva
    } // Fine while

    printf("\n"); // Vado a capo
}