/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Factorial of a Number    */
/*   Description   : Program to calculate     */
/*                   factorial using a        */
/*                   user-defined function    */
/*                   (non-recursive).         */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>

// User-defined function to compute factorial (non-recursive)
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = factorial(n);

    printf("Factorial of %d is: %d", n, result);

    return 0;
}
