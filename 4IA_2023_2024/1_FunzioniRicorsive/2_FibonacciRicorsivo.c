#include <stdio.h>

int fibonacciRicorsivo(int val);

int main() {
    int val;

    printf("Insersci un valore: ");
    scanf("%d", &val);

    int fibo = fibonacciRicorsivo(val);
    printf("Il %d-numero della serie di Fibonacci è: %d\n", val, fibo);
}

int fibonacciRicorsivo(int val) {
    if(val == 1 || val == 0) {
        return val;
    }
    else {
        return fibonacciRicorsivo(val-1) + fibonacciRicorsivo(val-2);
    }
}