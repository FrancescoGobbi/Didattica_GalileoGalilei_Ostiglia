#include <stdio.h>

void initializeString(char[], int);
int lenghtString(char[]);
void genSustringIndex(char [], char [], int, int);

int main()
{
    char str[50] = "precipitevolissimevolmente";
    char dst[50];
   
    initializeString(dst, 50);
    genSustringIndex(str, dst, 6, 13);
    printf("%s\n", dst);

}

void initializeString(char str[], int dim) {
    int i;
    for(i=0; i<dim; i++) {
        str[i] = '\0';
    }
}

int lenghtString(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

void genSustringIndex(char str[], char dst[], int in, int fi) {
    int i, j;
    if((in < fi) && (in > 0) && (fi < lenghtString(str)) ) {
        for(i=in, j=0; i<=fi; i++, j++) {
            dst[j] = str[i];
            //j++;
        }
    }
    else {
        printf("Non posso creare la sotto-stringa");
    }
}
