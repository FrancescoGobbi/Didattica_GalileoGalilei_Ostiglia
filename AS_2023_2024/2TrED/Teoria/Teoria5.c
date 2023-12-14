#include <stdio.h>

// Richiesta di un valore in input per verificare se il valore è nel range
// ARGOMENTO: if con operatori logici

int main() {
    int val;

    printf("Inserisci un valore compreso tra 10 e 50: ");
    scanf("%d", &val);

    if(val >= 10 && val<=50) {
        printf("Il numero inserito è compreso nel range!\n");
    }
    else{
        printf("Il numero inserito NON è compreso nel range!\n");
    }

    printf("Inserisci un valore che NON sia compreso tra 10 e 50: ");
    scanf("%d", &val);

    if(val < 10 || val>50) {
        printf("Il numero inserito è compreso nel range!\n");
    }
    else{
        printf("Il numero inserito NON è compreso nel range!\n");
    }
}