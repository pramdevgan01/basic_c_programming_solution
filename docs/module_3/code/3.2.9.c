//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Palindrome Number Check        */
/*   Description   : Program to check whether a     */
/*                   given integer is a palindrome  */
/*                   using a for loop.              */
/*                                                  */
/*   Definition:                                    */
/*     A number is a palindrome if it reads the     */
/*     same forward and backward.                   */
/*                                                  */
/*   Mathematical Idea:                             */
/*     Reverse number by repeatedly extracting       */
/*     last digit → n % 10                          */
/*     Remove last digit → n / 10                   */
/*     Build reversed number → rev = rev*10 + digit */
/*                                                  */
/*   Example:                                       */
/*     121 → Palindrome                             */
/*     123 → Not Palindrome                         */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;                // Input number
    int original;         // Store original number
    int reversed = 0;     // Store reversed number
    int digit;            // To hold each extracted digit

    // Step 1: Take input from user
    scanf("%d", &n);

    // Step 2: Preserve original value
    original = n;

    // Step 3: Reverse the number using a for loop
    // Loop continues until n becomes 0
    for (; n > 0; n = n / 10) {
        digit = n % 10;               // Extract last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
    }

    // Step 4: Compare original and reversed
    if (original == reversed) {
        printf("%d is a palindrome.", original);
    } else {
        printf("%d is not a palindrome.", original);
    }

    return 0; // Step 5: End program
}
