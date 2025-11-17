/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : 1D Char Array Using      */
/*                   while Loop               */
/*   Description   : Program to read a string */
/*                   into a 1D character      */
/*                   array and print it using */
/*                   a while loop until '\0'. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O library

int main() {
    char ch[101];      // Step 1: Character array with space for 100 chars + '\0'
    int i = 0;         // Step 2: Loop index for while-loop printing

    // Step 3: Display prompt before taking input
    printf("Enter a string (up to 99 characters):\n");

    // Step 4: Read string including spaces using fgets()
    fgets(ch, sizeof(ch), stdin);

    // Step 5: Print heading
    printf("The entered string is:\n");

    // Step 6: Print characters one by one using while loop until null '\0'
    while (ch[i] != '\0') {
        printf("%c", ch[i]);
        i++;
    }

    return 0;   // Step 7: End of program
}
