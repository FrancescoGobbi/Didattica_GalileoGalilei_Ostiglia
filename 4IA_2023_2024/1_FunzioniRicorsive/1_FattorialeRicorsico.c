#include <stdio.h>

int fattorialeRicorsivo(int val);

int main() {
    int val;

    printf("Inserisci un valore da fare il fattoriale: ");
    scanf("%d", &val);

    int fat = fattorialeRicorsivo(val);
    printf("Il fattoriale di %d è: %d\n", val, fat);
}

int fattorialeRicorsivo(int val) {
    if(val == 1) {
        return val;
    }
    else {
        return val * fattorialeRicorsivo(val-1);
    }
}