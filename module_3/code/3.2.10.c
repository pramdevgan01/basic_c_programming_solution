//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Length of String (No strlen)   */
/*   Description   : Program to calculate the       */
/*                   length of a string using a     */
/*                   for loop without using         */
/*                   strlen() function.             */
/*                                                  */
/*   Logic:                                         */
/*     Traverse the string character by character   */
/*     until we reach '\0' (null terminator).       */
/*     Count how many characters exist before '\0'. */
/*                                                  */
/*   Example:                                       */
/*     Input : "Code"                               */
/*     Output: Length of the string: 4              */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    char str[1001];   // Array to store string (up to 1000 chars + null terminator)
    int length = 0;   // Counter to store string length

    // Step 1: Take input string (no spaces as per problem statement)
    scanf("%s", str);

    // Step 2: Traverse string using for loop
    // Loop continues until null character '\0' is found
    for (int i = 0; str[i] != '\0'; i++) {
        length++;  // Increment counter for each character
    }

    // Step 3: Print result in required format
    printf("Length of the string: %d", length);

    // Step 4: End program
    return 0;
}
