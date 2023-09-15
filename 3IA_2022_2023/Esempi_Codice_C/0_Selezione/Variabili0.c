#include <stdio.h>

int main (){
    int a; // Creazione di una variabile
    printf("La variabile a contiene il numero: %d\n", a);

    //int b = 0; // Inizializzazione di una variabile
    int b;
    b = 0;
    printf("La variabile b contiene il numero: %d\n", b);

    a = 5; // Modifica di una variabile
    /* N.B. il comando int, peril tipo di variabile
    non serve, perchèla variabile a è già stata creata!
    Quindi basterà richiamarla per modificarla, fare operazioni
    leggerla,...
    */
    int c = a; // Creazione di una variabile
    printf("La variabile c contiene il numero: %d\n", c);

    printf("%d %d\n", a,b);

    printf("\n\n\n");

    // ESEMPIO INCREMENTO (POST E PRE)
    int x = 2;
    printf("Post-incremento di x: %d\n", x++);
    printf("Pre-incremento di x: %d\n", ++x);
    x++; // ++x; // Incremento che porta all'incremento della variabile direttamente
    // Incremento di 2 : x += 2;

    int y = 2;
    printf("Pre-incremento di y: %d\n", ++y);
    printf("Post-incremento di y: %d\n", y++);

}