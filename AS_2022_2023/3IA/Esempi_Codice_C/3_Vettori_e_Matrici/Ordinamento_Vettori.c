#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void randomVal(int vet[], int dim, int vmin, int vmax);

void swap(int *n, int *m);

void stampaVet(int vet[], int dim);

void bubbleSort(int vet[], int dim);

void insertionSort(int vet[], int dim);

void selectionSort(int vet[], int dim);

int main() {
    int vet[DIM];
    srand(time(NULL));
    randomVal(vet, DIM, 1, 20);
    bubbleSort(vet, DIM);
    stampaVet(vet, DIM);

    /*
    randomVal(vet, DIM, 1, 20);
    insertionSort(vet, DIM);
    stampaVet(vet, DIM);
    */

    randomVal(vet, DIM, 1, 20);
    selectionSort(vet, DIM);
    stampaVet(vet, DIM);
    
}

void randomVal(int vet[], int dim, int vmin, int vmax) {
    int i;
    for(i=0;i<dim;i++) {
        vet[i] = rand()%vmax + vmin;
    }
}

void stampaVet(int vet[], int dim) {
    int i;
    printf("Il vettore è così composto: \n");
    for(i=0; i<dim; i++) {
        printf("%5d", vet[i]);
    }
    printf("\n");
}

void bubbleSort(int vet[], int dim) {
    int i, j;

    for(i=0; i<(dim - 1); i++) {
        for(j=0; j<(dim - i - 1); j++) {
            if(vet[j]>vet[j+1]) {
                // Scambio i due valori nel vettore
                swap(&(vet[j]), &(vet[j+1]));
            }
        }
    }
}

void swap(int *n, int *m) {
    int tmp;
    tmp = *n;
    *n = *m;
    *m = tmp;
}

void insertionSort(int vet[], int dim) {
    int i, j;

    for(i=1; i<dim; i++) {
        // Cerco nella parte del vettore precedente ad i, usando j
        for(j=i; j>0; j--) {
            // Se l'elemento precedente è maggiore di quello corrente a j
            if(vet[j-1]>vet[j]) {
                // Scambio i due valori nel vettore
                swap(&(vet[j-1]), &(vet[j]));
            }
        }
    }
}

void selectionSort(int vet[], int dim) {
    int i, j, min_index;

    // Guardo il vettore. L'ultima cella è chiaramente ordinata.
    for(i=0; i<dim-1; i++) {
        min_index = i; // Ipotizzo che il valore minore sia in i
        // Guardo tutto il vettore fino alla fine
        for(j=i+1; j<dim; j++) {
            // Se un valore è minore di quello ipotizzato nella posizione
            //minore (min_index)
            if(vet[j]<vet[min_index]){
                min_index = j; // Mi salvo la posizione del valore minore
            }
        }
        // Se ho cambiato la posizione del minimo
        if(min_index!=i) {
            swap(&(vet[i]), &(vet[min_index]));
        }
    }
}