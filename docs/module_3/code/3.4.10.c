/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Menu-Driven Calculator         */
/*   Description   : Program to perform basic       */
/*                   arithmetic operations using a  */
/*                   do-while loop. The program     */
/*                   takes an operation code and    */
/*                   two numbers (if needed) until  */
/*                   the user enters 5 to exit.     */
/*                                                  */
/*   Note:                                          
/*     Prints only result output (no menu text).    */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int choice;         // Operation code
    double a, b, result; // Operands and result

    // Step 1: Start the loop
    do {
        scanf("%d", &choice); // Read user choice

        // Step 2: Check for exit condition first
        if (choice == 5) {
            break; // Exit immediately
        }

        // Step 3: For choices 1–4, read operands
        scanf("%lf %lf", &a, &b);

        // Step 4: Perform the selected operation
        switch (choice) {
            case 1: // Addition
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;

            case 2: // Subtraction
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;

            case 3: // Multiplication
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;

            case 4: // Division
                if (b == 0) {
                    printf("Cannot divide by zero\n");
                } else {
                    result = a / b;
                    printf("Result: %.2lf\n", result);
                }
                break;
        }

    } while (choice != 5); // Continue until user selects Exit

    return 0; // End program
}
