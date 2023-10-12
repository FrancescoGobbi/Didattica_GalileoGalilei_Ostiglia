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
    if(n == 1) {
        return n;
    }
    else {
        return n * fattorialeRicorsivo(n-1);
    }
}