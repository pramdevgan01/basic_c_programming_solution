/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Print "Hello World" n Times    */
/*   Description   : Program to print "Hello World" */
/*                   message n times using a        */
/*                   do-while loop.                 */
/*                                                  */
/*   Logic:                                         */
/*     1. Read input n (number of times).           */
/*     2. Initialize counter i = 1.                 */
/*     3. Use do-while loop:                        */
/*        - Print "Hello World".                    */
/*        - Increment counter.                      */
/*        - Continue until i > n.                   */
/*                                                  */
/*   Example:                                       */
/*     Input : 4                                    */
/*     Output: Hello World (printed 4 times)        */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n, i = 1;  // n = number of times to print, i = counter

    // Step 1: Read input
    scanf("%d", &n);

    // Step 2: Use do-while loop to print message
    do {
        printf("Hello World\n");
        i++;  // Increment counter
    } while (i <= n);

    return 0; // End program
}
