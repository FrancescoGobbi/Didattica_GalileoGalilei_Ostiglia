#include <stdio.h>
void elabora(int v[], int n) {
    int i;
    int x;
    x = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] > x) {
        x = v[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            v[i] = x - v[i];
        } else {
            v[i] = v[i] + i;
        }
    }
    for (i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            v[i] = v[i] - v[i + 1];
        } else {
            v[i] = v[i] + v[i + 1];
        }
    }
}
int main() {
    int v[7] = {6, 3, 10, 5, 2, 9, 4};
    int i;
    elabora(v, 7);
    for (i = 0; i < 7; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}