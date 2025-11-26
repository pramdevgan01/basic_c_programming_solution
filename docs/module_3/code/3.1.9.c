//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main(void) {
    int n1, n2;
    char op;

    // Input
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf(" %c", &op);

    // Print entered values
    printf("Entered values of\n");
    printf(" n1=%d\n", n1);
    printf(" n2=%d\n", n2);
    printf("Enter the Operator [ +, -, *, /, %%] : \n");
    printf("Entered operator = %c\n", op);

  /*
  Entered values of
   n1=50
   n2=30
  Enter the Operator [ +, -, *, /, %] : 
  Entered operator = -
  Subtraction: 50 - 30 = 20 
  */

    if (op == '+') {
        printf("Addition: %d + %d = %d ", n1, n2, n1 + n2);
    }
    else if (op == '-') {
        printf("Subtraction: %d - %d = %d ", n1, n2, n1 - n2);
    }
    else if (op == '*') {
        printf("Multiplication: %d * %d = %d ", n1, n2, n1 * n2);
    }
    else if (op == '/') {
        if (n2 != 0)
            printf("Division: %d / %d = %.2f ", n1, n2, (float)n1 / n2);
        else
            printf("Division by zero is not allowed!");
    }
    else if (op == '%') {
        if (n2 != 0)
            printf("Modulus: %d %% %d = %d ", n1, n2, n1 % n2);
        else
            printf("Modulus by zero is not allowed!");
    }
    else {
        printf("Invalid operator!");
    }

    return 0;
}
