/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Check for Isomorphic     */
/*                   Strings                  */
/*   Description   : Program to determine if  */
/*                   two strings are          */
/*                   isomorphic by checking   */
/*                   one-to-one character     */
/*                   mapping.                 */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>       // Standard I/O library

// User-defined function to check isomorphism
int isIsomorphic(char str1[], char str2[]) {
    int map1[256] = {0};   // Maps characters of str1 -> str2
    int map2[256] = {0};   // Maps characters of str2 -> str1

    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        unsigned char c1 = str1[i];
        unsigned char c2 = str2[i];

        // If mapping already exists, check consistency
        if (map1[c1] != 0 || map2[c2] != 0) {
            if (map1[c1] != c2 || map2[c2] != c1)
                return 0;   // Not isomorphic
        }
        else {
            map1[c1] = c2;   // Create mapping str1 → str2
            map2[c2] = c1;   // Create mapping str2 → str1
        }
        i++;
    }

    // If lengths mismatch → cannot be isomorphic
    if (str1[i] != '\0' || str2[i] != '\0')
        return 0;

    return 1;  // Strings are isomorphic
}

int main() {
    char str1[101];
    char str2[101];

    // Read both strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from both strings
    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';

    for (int i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    // Check isomorphic nature
    if (isIsomorphic(str1, str2))
        printf("Strings are isomorphic");
    else
        printf("Strings are not isomorphic");

    return 0;  // End of program
}
