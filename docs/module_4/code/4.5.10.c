/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Compare Two Strings      */
/*   Description   : Program to accept two    */
/*                   strings (no spaces) and  */
/*                   compare them using       */
/*                   strcmp(). Displays       */
/*                   whether the strings are  */
/*                   equal or not.            */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O
#include <string.h>    // For strcmp()

int main() {
    char str1[101], str2[101];

    // Step 1: Input two strings (no spaces)
    scanf("%s", str1);
    scanf("%s", str2);

    // Step 2: Compare the strings using strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.");
    } else {
        printf("Strings are not equal.");
    }

    return 0;  // End of program
}
