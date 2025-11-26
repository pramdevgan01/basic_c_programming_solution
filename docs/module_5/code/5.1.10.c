#include <stdio.h>

// User-defined function to print Fibonacci sequence up to limit n
void fibonacciUpToN(int n) {
    int a = 0, b = 1;

    // Print first Fibonacci numbers
    if (n >= 0) printf("0");
    if (n >= 1) printf(" 1");

    int next = a + b;

    while (next <= n) {
        printf(" %d", next);
        a = b;
        b = next;
        next = a + b;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d: ", n);
    fibonacciUpToN(n);

    return 0;
}
