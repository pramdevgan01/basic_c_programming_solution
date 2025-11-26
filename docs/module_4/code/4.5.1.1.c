/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : String Equality Checker  */
/*   Description   : Compare two strings using*/
/*                   inbuilt function strcmp. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library
#include <string.h>    // For strcmp()

int main() {
    char str1[101], str2[101];

    // Read first string
    fgets(str1, sizeof(str1), stdin);
    // Read second string
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';

    for (int i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    // Compare using strcmp()
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
