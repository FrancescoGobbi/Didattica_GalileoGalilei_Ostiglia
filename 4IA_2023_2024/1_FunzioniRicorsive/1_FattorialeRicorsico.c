#include <stdio.h>

int fattorialeRicorsivo(int n);

int main() {
    int val;

    printf("Inserisci un valore da fare il fattoriale: ");
    scanf("%d", &val);

    int fat = fattorialeRicorsivo(val);
    printf("Il fattoriale di %d è: %d\n", val, fat);
}

int fattorialeRicorsivo(int n) {
    // Caso base
    if(n == 1) { // if(n==1 || n==0)
        return n;
    }
    else { // Caso ricorsivo
        return n * fattorialeRicorsivo(n-1);
    }
}