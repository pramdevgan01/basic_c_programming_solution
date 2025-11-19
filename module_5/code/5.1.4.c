/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Convert Decimal to Binary*/
/*   Description   : Program to convert a     */
/*                   decimal integer into     */
/*                   binary using a           */
/*                   user-defined function.   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>

// Step 1: User-defined function to print binary
void decimalToBinary(int n) {
    int bin[50];
    int i = 0;

    // Special case: if number is 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }

    // Print binary in reverse order
    for (i = i - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }
}

int main() {
    int n;

    // Step 2: Read number (fraction ignored if entered)
    scanf("%d", &n);

    // Step 3: Call user-defined binary conversion function
    decimalToBinary(n);

    return 0;  // End of program
}
