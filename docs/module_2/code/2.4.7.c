#include <stdio.h>

int main() {
    int num, reversed;
    scanf("%d", &num);

    int sign = (num < 0) ? -1 : 1;
    num = num * sign; 

    int d1 = num % 10;
    int d2 = (num / 10) % 10;
    int d3 = num / 100;

    reversed = d1 * 100 + d2 * 10 + d3;

    reversed = reversed * sign;

    printf("%d\n", reversed);

    return 0;
}
