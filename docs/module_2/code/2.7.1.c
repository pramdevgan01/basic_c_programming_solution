#include <stdio.h>

int main(void) {
    float price, finalPrice;
    const float DISCOUNT = 10.0; 

    scanf("%f", &price);

    finalPrice = price - (price * DISCOUNT / 100.0);

    printf("Final price after discount is: %.2f", finalPrice);

    return 0;
}
