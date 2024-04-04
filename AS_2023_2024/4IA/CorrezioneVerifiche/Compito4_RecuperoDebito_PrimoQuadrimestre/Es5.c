#include <stdio.h>

int es5(char *str, char car);

int main() {
    char str[] = "GalileoGalilei";

    printf("Stringa PRIMA della modifica: %s\n", str);

    int val = es5(str, 'G');

    printf("La stringa ORA è %s e di cono %d di '!'\n", str, val);
}

int es5(char *str, char car) {
    int count = 0;

    while(*str!='\0') {
        if(*str == car) {
            *str = '!';
            count++;
        }
        str++;
    }

    return count;
}