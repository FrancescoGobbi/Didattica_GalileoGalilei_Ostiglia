#include <stdio.h>

void stampaNValRicorsiva(int val);

int main() {
    int val;
    printf("Inserisci un valore: ");
    scanf("%d", &val);
    printf("Stampo i valori da 1 a %d:\n", val);
    stampaNValRicorsiva(val);
    printf("\n");
}

void stampaNValRicorsiva(int val) {
    // Caso base
    if(val==1) {
        printf("%4d", val);
    }
    else { // Caso ricorsivo
        stampaNValRicorsiva(val-1);
        printf("%4d", val);
    }
}