#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int Min = (a < b) ? a : b;

    printf("The smaller number is: %d\n", Min);
    printf("a = %d, b = %d", a, b);

    return 0;
}
