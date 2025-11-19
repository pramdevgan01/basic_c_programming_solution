#include <stdio.h>

// User-defined function to check prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }

    return 0;
}
