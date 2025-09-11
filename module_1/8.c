#include <stdio.h>

int main() {
    float weight, height, bmi;

    scanf("%f", &weight);
    scanf("%f", &height);


    if (weight <= 0 || height <= 0) {
        printf("Error: Invalid input. \nWeight and height must be greater than zero.\n");
    } else {
        bmi = weight / (height * height);
        printf("BMI = %.2f\n", bmi);
    }

    return 0;
}
