#include <stdio.h>

int prodottoUsandoSommaRicorsiva(int fatt1, int fatt2);

int main() {
    int a = 6, b = 3;
    
    printf("Il prodotto tra %d e %d è: %d\n", a, b, prodottoUsandoSommaRicorsiva(a,b));
}

int prodottoUsandoSommaRicorsiva(int fatt1, int fatt2) {
    // Caso base
    if(fatt2==0) { 
        return 0;
    }
    else{ // Caso ricorsivo
        return fatt1 + prodottoUsandoSommaRicorsiva(fatt1, fatt2-1);
    } 
}