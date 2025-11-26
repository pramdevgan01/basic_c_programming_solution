/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : String Equality Checker  */
/*   Description   : Compare two strings using*/
/*                   a user-defined function. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

// User-defined function to compare two strings
int stringCompare(char s1[], char s2[]) {
    int i = 0;

    // Compare character by character
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return 0;   // Not equal
        i++;
    }

    // If both ended at same time → equal
    return (s1[i] == '\0' && s2[i] == '\0');
}

int main() {
    char str1[101], str2[101];

    // Read first string
    fgets(str1, sizeof(str1), stdin);
    // Read second string
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';

    for (int i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    // Compare using user-defined function
    if (stringCompare(str1, str2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
