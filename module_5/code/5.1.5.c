/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Exchange of Two Numbers  */
/*   Description   : Program to swap two      */
/*                   numbers using a          */
/*                   user-defined function.   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>

// User-defined function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int m, n;

    // Input prompts
    printf("Enter Value for m:\n");
    scanf("%d", &m);

    printf("Enter Value for n:\n");
    scanf("%d", &n);

    // Display before exchange
    printf("Values Before Exchange m=%d,n=%d\n", m, n);

    // Call swap function
    swap(&m, &n);

    // Display after exchange
    printf("Values After Exchange m=%d, n=%d", m, n);

    return 0;
}
