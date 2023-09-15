#include <stdio.h>

// Dichiarazione di funzioni
int fattoriale (int n);
void fibonacci (int n);

int main() {
    int a;
    int fat;

    // Controllo sulla variabile iniziale
    do{
        printf("Inserisci un valore: ");
        scanf("%d", &a);
    }while(a<0);

    fat = fattoriale(a);
    printf("%d! = %d\n", a, fat);

    printf("Il fattoriale di %d: \n", a);
    fibonacci(a);

}

int fattoriale (int n) {
    int i, fat = 1;
    // Ciclo per la creazione del fattoriale
    for(i=n; i>0; i--) {
        fat = fat * i; 
    }
    return fat; // return(fat);
}

void fibonacci (int n) {
    int i, primo = 1, secondo = 1, terzo;

    // Stampo il primo e secondo valore
    printf("%d, %d", primo, secondo);

    for(i=3; i<=n; i++) {
        // Calcolo di volta in volta il terzo valore
        terzo = primo + secondo;
        printf(",%d ", terzo);
        // Faccio lo swap delle variabili
        primo = secondo;
        secondo = terzo;
    }
    printf("\n"); // Vado a capo
}