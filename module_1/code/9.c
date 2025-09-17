#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159;

    scanf("%f", &radius);

    if (radius <= 0) {
        printf("Error: Radius must be positive.\n");
    } else {
        area = PI * radius * radius;
        printf("Area of circle = %.2f\n", area);
    }
    return 0;
}
