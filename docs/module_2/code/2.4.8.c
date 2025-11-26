#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    printf("%d\n", x);

    x += x;
    printf("%d\n", x);

    x -= 5;
    printf("%d\n", x);

    x *= 3;
    printf("%d\n", x);

    x /= 2;
    printf("%d\n", x);

    x %= 7;
    printf("%d\n", x);

    return 0;
}
