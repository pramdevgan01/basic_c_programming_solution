//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main() {
    float f_val;
    double d_val;
    float f_back;
    
    scanf("%f", &f_val);
    
    d_val = f_val;
    f_back = (float)d_val;

    printf("Original float value: %.6f\n", f_val);
    printf("Converted to double value: %.6f\n", d_val);
    printf("Converted back to float value: %.6f\n", f_back);

    return 0;
}
