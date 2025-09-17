//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

void calculateSum(int a, int b) {
    int sum = a + b;   // local variable
    printf("Sum inside function: %d\n", sum);
}

int main() {
    int num1, num2;
    
     scanf("%d %d", &num1, &num2);
    
    calculateSum(num1, num2);
    
    // Uncommenting the below line will cause an error
    // printf("%d", sum);
    
    return 0;
}
