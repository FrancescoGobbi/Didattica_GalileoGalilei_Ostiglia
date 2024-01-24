#include <stdio.h>

#define DIM 20

int main() {
    char file_name[] = "prova.txt";
    char str[DIM];
    int i;

    FILE * fpIn = fopen(file_name, "rt");

    while(!feof(fpIn)) {
        fscanf(fpIn, "%s", str);
        printf("%s ovvero %d\n", str, str[0]);
        
        for(i = 0; i < DIM; i++) {
            printf("%5d", str[i]);
        }
        printf("\n");
        
        printf("Entro nel while\n");
    }

    fclose(fpIn);

    /*
    // Riapro il file per la lettura
    fpIn = fopen(file_name, "rt");

    while (fgets(str, sizeof(str), fpIn) != NULL) {
        printf("%s\n", str);
        printf("Entro nel while\n");
    }
    fclose(fpIn);
    */
}