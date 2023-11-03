#include <stdio.h>

int main ( ) {
    int i=0;
    int j=0;
    int x=0;
    int y=0;
    int z=0;
    
    for (i=0; i<5; i++) {//in quanto ci sono 5 righe che vanno verso dx e 5 righe che vanno verso sx, allora le raggruppo
        for (j=0; j<10; j++) {//righe che vanno verso destra, vanno a crescere
            printf("%3d", x);
            x++;
        }
        printf("\n"); // Stampo e vado a capo
        z = x+9;
        x= z+1;
        for (y=0; y<10; y++) {
            printf("%3d", z);
            z--;
        }
        printf("\n"); // Stampo e vado a capo
    }
}
