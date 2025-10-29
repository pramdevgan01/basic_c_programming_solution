/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Prompting User           */
/*   Description   : Program to repeatedly    */
/*                   prompt the user to enter */
/*                   a valid username. A      */
/*                   valid username must be   */
/*                   at least 8 characters    */
/*                   long. The program keeps  */
/*                   asking for input until a */
/*                   valid username is given. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input/output functions
#include <string.h>  // Include string library for strlen() function

int main(void) {
    char username[101];   // Step 1: Declare a character array to store username input

    // Step 2: Start an infinite loop using while(1)
    // This loop continues until a valid username is entered
    while (1) {
        // Step 2.1: Prompt user to enter a username
        scanf("%s", username);

        // Step 2.2: Check the length of the entered username
        // Using strlen() to calculate number of characters
        if (strlen(username) >= 8) {
            // Step 2.3: If valid, print confirmation message
            printf("Valid username: %s\n", username);
            break;  // Exit loop since condition is met
        } else {
            // Step 2.4: If invalid, display error message and prompt again
            printf("Username must be at least 8 characters long. Try again.\n");
        }
    }

    // Step 3: Return 0 indicates successful program execution
    return 0;
}
