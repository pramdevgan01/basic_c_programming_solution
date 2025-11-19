/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : String Length and        */
/*                   Concatenation            */
/*   Description   : Program to read two      */
/*                   strings (no spaces),     */
/*                   calculate their lengths  */
/*                   manually without using   */
/*                   string functions, and    */
/*                   concatenate the second    */
/*                   string to the first.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O

int main() {
    char str1[201], str2[101];  
    int len1 = 0, len2 = 0;     
    int i, j;

    // Step 1: Read two strings from user (no spaces allowed)
    scanf("%s", str1);
    scanf("%s", str2);

    // Step 2: Count length of first string manually
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    // Step 3: Count length of second string manually
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    // Step 4: Concatenate str2 to str1 manually (no strcat)
    for (i = len1, j = 0; str2[j] != '\0'; i++, j++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0';   // Step 5: Null terminate the final string

    // Step 6: Output results
    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);
    printf("Concatenated string: %s", str1);

    return 0;  // End of program
}
