#include <stdio.h>

int main(void) {
    int numerator, denominator;
    float result;

    scanf("%d", &numerator);
    scanf("%d", &denominator);

    result = (float)numerator / denominator;

    printf("Division result is: %.2f", result);

    return 0;
}
