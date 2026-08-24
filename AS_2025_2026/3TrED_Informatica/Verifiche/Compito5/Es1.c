#include <stdio.h>
void elabora(int v[], int n) {
    int i;
    int x;
    x = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] < x) {
            x = v[i];  
        }
    }
    printf("Il valore di x è: %d\n", x);

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            v[i] = v[i] - x;
        } else {
            v[i] = v[i] + x;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        v[i] = v[i] + v[i + 1];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v[7] = {8, 3, 6, 1, 10, 5, 4};
    int i;
    elabora(v, 7);
    for (i = 0; i < 7; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}