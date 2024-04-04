#include <stdio.h>

int es3(char *str);

int main() {
    char str[] = "OstigliaCasaGalilei";

    int val = es3(str);

    printf("Il numero di lettere maiuscole nella parola %s è %d\n", str, val);
}

int es3(char *str) {

    int count = 0;

    while(*str!='\0') {
        if(*str>='A' && *str<='Z') {
            count++;
        }
        str++;
    }

    return count;
}