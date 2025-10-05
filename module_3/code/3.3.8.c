//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Armstrong Number Check         */
/*   Description   : Program to check whether a     */
/*                   number is an Armstrong number  */
/*                   using a while loop.            */
/*                                                  */
/*   Definition:                                    */
/*     A number is Armstrong if:                    */
/*       n = (d1^p + d2^p + d3^p + ... + dk^p)      */
/*     where p = number of digits                   */
/*     and d1, d2, ... dk are digits of n.          */
/*                                                  */
/*   Example:                                       */
/*     153 → 1^3 + 5^3 + 3^3 = 153 (Armstrong)      */
/*     123 → 1^3 + 2^3 + 3^3 = 36  (Not Armstrong)  */
/*                                                  */
/****************************************************/

#include <stdio.h>
#include <math.h>   // For pow() function

int main(void) {
    int n, original, digits = 0;
    int sum = 0, temp, digit;

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Preserve original number
    original = n;
    temp = n;

    // Step 3: Count digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    // Step 4: Reset temp to original and calculate Armstrong sum
    temp = n;
    while (temp > 0) {
        digit = temp % 10;                    // Extract last digit
        sum += (int)pow(digit, digits);       // Add digit^digits
        /*
        If you don't want to use math.h header file
            power = 1;
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }
        You have to calculate it power manually
        */
        temp = temp / 10;                     // Remove last digit
    }

    // Step 5: Compare sum with original number
    if (sum == original) {
        printf("%d is an Armstrong number.", original);
    } else {
        printf("%d is not an Armstrong number.", original);
    }

    return 0; // End program
}
