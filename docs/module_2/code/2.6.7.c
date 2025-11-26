#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);


    int Large = (a > b) ? a : b;

    printf("%d\n", Large);
    printf("a = %d, b = %d", a, b);

    return 0;
}
