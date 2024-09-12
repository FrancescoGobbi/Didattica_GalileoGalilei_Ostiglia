#include <stdio.h>

int sommaCifreRicorsiva(int n);

int main() {
    int val;

    printf("Inserisci un valore intero: ");
    scanf("%d", &val);

    int risultato = sommaCifreRicorsiva(val);
    printf("La somma delle cifre di %d è: %d\n", val, risultato);
}

int sommaCifreRicorsiva(int n) {
    // Caso base
    if(n<=0) {
        return 0;
    }
    else { // Caso ricorsivo
        return n%10 + sommaCifreRicorsiva(n/10);
    }
}