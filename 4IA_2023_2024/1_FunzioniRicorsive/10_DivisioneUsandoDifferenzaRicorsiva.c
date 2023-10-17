#include <stdio.h>

int divisioneUsandoDifferenzaRicorsiva(int dividendo, int divisore);

int main() {
    int a, b;
    printf("Inserisci due valori: ");
    scanf("%d %d", &a, &b);

    int quoziente = divisioneUsandoDifferenzaRicorsiva(a, b);

    printf("%d / %d = %d\n", a, b, quoziente);
}

int divisioneUsandoDifferenzaRicorsiva(int dividendo, int divisore){
    if(dividendo<divisore) {
        return 0;
    }
    else {
        return 1 + divisioneUsandoDifferenzaRicorsiva(dividendo-divisore, divisore);
    }
}