#include <stdio.h>

int main(void) {
    double r;
    const double PI = 3.141592653589793;  

    if (scanf("%lf", &r) != 1) return 0;

    double volume = (4.0 / 3.0) * PI * r * r * r;

    printf("%.2f", volume);
    return 0;
}