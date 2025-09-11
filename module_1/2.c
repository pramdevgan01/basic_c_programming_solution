#include <stdio.h>

int main() {
    float a, b, temp;
    scanf("%f", &a);
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("%.2f\n", a);
    printf("%.2f\n", b);

    return 0;
}
