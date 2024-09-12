#include <stdio.h>

const int DIM = 20;

int main() {
    char str[DIM];
    int i;

    // String initialization
    for(i=0; i<DIM; i++) {
        str[i] = '\0';
    }

    printf("Inserisci una stringa: ");

    // Get string --> '\0' end of string
    scanf("%s", str);
    fflush(stdin);

    // Print string
    printf("%s\n", str);

    // Print char-by-char
    i = 0;
    while(str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    // Print number in all cell of string
    for(i=0; i<DIM; i++){
        printf("%4d", str[i]);
    }
    printf("\n");
}