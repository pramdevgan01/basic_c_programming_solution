/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Odd and Even Number      */
/*   Description   : Program to read 'n'      */
/*                   numbers and check        */
/*                   whether each number is   */
/*                   Odd or Even.             */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O library

int main() {
    int n, num, i;

    // Step 1: Prompt for limit
    printf("Enter Limit:\n");

    // Step 2: Read limit
    scanf("%d", &n);

    // Step 3: Read n numbers and check each
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);

        // Step 4: Print result based on even/odd
        if (num % 2 == 0) {
            printf("Enter Number-%d : %d is Even\n", i, num);
        } else {
            printf("Enter Number-%d : %d is Odd\n", i, num);
        }
    }

    return 0;   // End of program
}
