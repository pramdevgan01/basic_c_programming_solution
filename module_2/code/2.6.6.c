#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = (a - b) * (a * a) + (a++) - (--b) + (b * b);

    printf("%d", result);

    return 0;
}

