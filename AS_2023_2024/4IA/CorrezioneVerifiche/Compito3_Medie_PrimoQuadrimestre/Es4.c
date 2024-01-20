#include <stdio.h>

int funzione(char [], char, char);

int main() {
    char str[] = "abracadacra";
    char A = 'A';
    char B = 'R';

    int num = funzione(str, A, B);
    printf("Il numero di ! é: %d\n", num);
}

int funzione(char str[], char A, char B) {
    int count = 0;
    int i;

    for(i=0; str[i]!='\0'; i++) {
        // Upper-case
        if(str[i] >= 'a' && str[i]<='z') {
            str[i] = str[i] - 32;
        }

        if(str[i] == A || str[i] == B) {
            str[i] = '?';
        }
        else {
            str[i] = '!';
            count++;
        }
    }
    return count;
}