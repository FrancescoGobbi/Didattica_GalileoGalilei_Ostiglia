#include <stdio.h>

void es4(char str[], int len);

int main() {
    char str[10] = "Ostiglia";

    printf("Stringa PRIMA del reverse: %s\n", str);

    es4(str, 8);

    printf("Stringa DOPO del reverse: %s\n", str);
}

void es4(char str[], int len) {
    int i;
    char tmp;

    for(i = 0; i<len/2 ; i++) {
        tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }  
}