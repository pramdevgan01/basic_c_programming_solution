#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    (n % 2 == 0) 
        ? printf("%d is Even", n) 
        : printf("%d is Odd", n);

    return 0;
}

