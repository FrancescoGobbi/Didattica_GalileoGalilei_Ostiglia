#include <stdio.h>

int potenzaRicorsivaUsandoProdotto(int base, int esponente);

int main() {
    int a = 2;
    int b = 10;

    printf("La %d^%d = %d\n", a, b, potenzaRicorsivaUsandoProdotto(a,b));
}

int potenzaRicorsivaUsandoProdotto(int base, int esponente) {
    if(esponente == 0){
        return 1;
    }
    else {
        return base * potenzaRicorsivaUsandoProdotto(base, esponente-1);
    }
}