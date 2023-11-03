#include <stdio.h>

// Variabili globali
const float pi = 3.14; 

int main() {
    // Varaibili locali in tutto il main
    int a = 10;
    int i;

    if (a > 5) {
        // Variabile locale solo nell'if
       int b = 10;
       printf("Locazione della prima varibile b: %p\n", &b); 
       printf("%d\n", b);
    }

    for(i=1; i<=10; i++){
        printf("%d ", i);
    }
    printf("\n");
    printf("%d\n", i);

    printf("%d\n",c);

}