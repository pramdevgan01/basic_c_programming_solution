/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Characters Individually  */
/*                   with Size                */
/*   Description   : Program to read 'n'      */
/*                   characters individually  */
/*                   and display them as a    */
/*                   single string.           */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    int n;              // Step 1: Size of character array
    scanf("%d", &n);

    char arr[n + 1];    // Step 2: +1 for null terminator
    int i;

    // Step 3: Read characters individually
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);   // leading space skips newline
    }

    arr[n] = '\0';      // Step 4: Null terminate the string

    // Step 5: Display the combined string
    printf("The string is: %s", arr);

    return 0;   // End of program
}
