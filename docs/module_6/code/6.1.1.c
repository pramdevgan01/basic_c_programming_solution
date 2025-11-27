/******************************************************/
/*                                                    */
/*   Author        : Param Vishwakarma                */
/*   Problem Name  : Area of a Rhombus Using Pointers */
/*   Description   : Program to read two diagonals    */
/*                   of a rhombus and calculate its   */
/*                   area using pointers.             */
/*   Date          : October 2025                     */
/*                                                    */
/******************************************************/

#include <stdio.h>   // Standard input/output library

int main() {
    float d1, d2, area;
    float *ptr1, *ptr2;   // Pointer declarations

    // Step 1: Prompt and read inputs
    scanf("%f", &d1);

    scanf("%f", &d2);

    // Step 2: Assign addresses to pointers
    ptr1 = &d1;
    ptr2 = &d2;

    // Step 3: Calculate area using pointers
    area = ((*ptr1) * (*ptr2)) / 2.0;

    // Step 4: Display result
    printf("The area of a rhombus is %.2f CMs", area);

    return 0;   // End of program
}
