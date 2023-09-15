#include <stdio.h>
#include <math.h>

int decimale(int n) {
    int i = 0; // Indice
    int decimale = 0;

    while(n!=0) { 
        int resto = n % 10;
        if (resto == 1) { // Faccio la potenza in base due solo se il binario è 1
        // Sippiamo che un numero moltiplicato per 0 da 0, quindi non serve alla somma
            decimale += pow(2,i); // fa il cast ad int
        }
        i++; // Incremento sempre l'indice, perché mi sposto alla cifra successiva
        n = n / 10; // Tolgo la cifra più a destra del numero in binario
    }
    return decimale;
}

int bisestile(int n){
    // Se l'anno è bisestile
    if((n%400==0) || (n%4==0 && !(n%100==0))) {
        return 1;
    }
    else { // Se l'anno NON è bisestile
        return 0;
    }
}

int main() {
    int n = 1111111111;
    int val = decimale(n);
    printf("Il numero %d è: %d\n", n, val);

    int anno;
    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    int check = bisestile(anno);
    // if(chech)
    if(check == 1) { 
        printf("L'anno %d è bisestile!\n", anno);
    }
    else{
        printf("L'anno %d NON è bisestile!\n", anno);
    }
}