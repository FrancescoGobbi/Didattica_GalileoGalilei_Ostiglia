#include <stdio.h>

/*
Creare un codice in C che prenda in input 5 valori interi.
Ad ogni inserimento del valore in input il programma deve verificare
se il valore in quel momento è >=10.
Se SI, il programma stamperà "OK!", altrimenti "NO!"
*/

int main() {
    int i; // Variabile di iterazione
    int val; // Variabile per il valore inserito dall'utente

    for(i = 1; i <= 5; i++) {
        printf("Inserisci un valore intero: ");
        scanf("%d", &val);

        if(val >= 10) {
            printf("OK!\n");
        } 
        else {
            printf("NO!\n");
        }
    }
}