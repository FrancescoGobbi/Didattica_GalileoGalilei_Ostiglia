#include <stdio.h>

/*
La funzione deve modificare il vettore nel seguente modo:
• se un elemento `e positivo, deve essere sostituito con il suo doppio;
• se un elemento `e negativo, deve essere sostituito con il suo opposto;
• se un elemento `e uguale a zero, deve rimanere invariato.
*/

void trasformaVettore(int arr[], int size);

int main() {
    int vettore[6] = {-3, 5, 0, -8, 2, 7};
    int i;

    trasformaVettore(vettore, 6);

    printf("Vettore modificato:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

void trasformaVettore(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            arr[i] = arr[i] * 2; // Doppio se positivo
        } 
        else {
            arr[i] = -1 * arr[i]; // Opposto se negativo (zero rimane invariato)
        }
    }
}
