#include <stdio.h>

void initializeString(char[], int);
int lenghtString(char[]);
void genSustringIndex(char [], char [], int, int);
int findNumberSubstring(char [], char []);

int main()
{
    char str[50] = "precipitevolissimevolmente";
    char dst[50];
   
    printf("Stringa: %s\n", str);

    initializeString(dst, 50);
    genSustringIndex(str, dst, 6, 13);

    printf("Sotto-stringa: %s\n", dst);

    printf("Inserisci un'altra stringa: ");
    scanf("%s", str);
    printf("Inserisci una sotto-stringa: ");
    scanf("%s", dst);
    printf("Il numero delle volta in cui compare la sotto-stringa è: %d\n", findNumberSubstring(str, dst));
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

int findNumberSubstring(char str[], char sub[]) {
    int count = 0;
    int check;
    int i, j;
    int dimStr = lenghtString(str);
    int dimSub = lenghtString(sub);
    
    for(i=0; i<=(dimStr-dimSub); i++) {
        check = 1; // la sottostringa c'è
        for(j=0; j<dimSub; j++) {
            if(str[i+j]!=sub[j]) {
                check = 0;
            }
        }
        if(check) {
            count++;
        }
    }
    return count;
}