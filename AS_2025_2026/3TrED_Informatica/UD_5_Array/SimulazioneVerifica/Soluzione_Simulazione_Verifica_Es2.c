#include <stdio.h>

int contaOccorrenze(int arr[], int size, int x);

int main() {
    int vettore[7] = {4, 7, 4, 2, 9, 4, 1};
    int x;
    int risultato;
    printf("Inserisci il valore da cercare: ");
    scanf("%d", &x);

    risultato = contaOccorrenze(vettore, 7, x);

    printf("Il valore %d compare %d volte.\n", x, risultato);
}

int contaOccorrenze(int arr[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}