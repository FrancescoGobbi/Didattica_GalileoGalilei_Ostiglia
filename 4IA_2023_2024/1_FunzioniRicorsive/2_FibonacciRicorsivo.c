#include <stdio.h>

int fibonacciRicorsivo(int n);

int main() {
    int val;

    printf("Insersci un valore: ");
    scanf("%d", &val);

    int fibo = fibonacciRicorsivo(val);
    printf("Il %d-numero della serie di Fibonacci è: %d\n", val, fibo);
}

int fibonacciRicorsivo(int n) {
    if(n == 1 || n == 0) {
        return n;
    }
    else {
        return fibonacciRicorsivo(n-1) + fibonacciRicorsivo(n-2);
    }
}