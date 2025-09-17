//Enhance your coding skills, start writing your code here!!
#include <stdio.h>
int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int int_res = num1 / num2;
    float float_res = (float) num1 / num2;

    printf("Without casting: %d / %d = %.2f\n", num1, num2, (float)int_res);
    printf("With casting: %d / %d = %.2f", num1, num2, float_res);

    return 0;
}
