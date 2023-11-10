#include <stdio.h>

const int DIM = 20;

void initializeString(char[], int);

void inputString(char[]);

int lenghtString(char[]);

void reverseString(char[]);

void reverseStringAlternativa(char[]);

void swap(char*, char*);

int main() {
    char str[DIM];
    int i;

    initializeString(str, DIM);
    inputString(str);
    printf("%s\n", str);

    // Print number in all cell of string
    for(i=0; i<DIM; i++){
        printf("%4d", str[i]);
    }
    printf("\n");

    int lenght = lenghtString(str);
    printf("La lunghezza della stringa è: %d\n", lenght);

    printf("Stringa PRIMA del reverse: %s\n", str);
    reverseString(str);
    printf("Stringa DOPO del reverse: %s\n", str);

    printf("\n");
    printf("Stringa PRIMA del reverse: %s\n", str);
    reverseStringAlternativa(str);
    printf("Stringa DOPO del reverse: %s\n", str);
}

void initializeString(char str[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        str[i] = '\0';
    }
}

void inputString(char str[]) {
    printf("Inserisci una stringa: ");
    scanf("%s", str);
}

int lenghtString(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

// Swap two char in two different location, with pointer
void swap(char *x, char *y) {
    char tmp = *x;
    *x = *y;
    *y = tmp;
}

void reverseString(char str[]) {
    int i=0;
    int halfSize = (lenghtString(str))/2;
    
    int dim = lenghtString(str);
   
    for(i=0; i<halfSize; i++) {
        swap(&(str[i]), &(str[dim-i-1]));
    }
}

void reverseStringAlternativa(char str[]) {
    int i=0;
    int j = lenghtString(str) - 1;

    while(i < j) {
        swap(&(str[i]), &(str[j]));
        i++;
        j--;
    } 
}