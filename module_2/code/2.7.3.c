#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int sum = a + b;
    int product = a * b;

    a += b;   
    b *= 2;  

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Updated a: %d\n", a);
    printf("Updated b: %d\n", b);

    return 0;
}
