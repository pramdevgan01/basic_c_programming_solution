/*************************************************************/
/*                                                           */
/*   File Name   : factorial_recursive.c                     */
/*   Author      : Param Vishwakarma                         */
/*   Description : Calculates the factorial of a number      */
/*                 using a recursive function.               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*   Recursive function to compute factorial of n            */
/*-----------------------------------------------------------*/
long long factorial(int n) {
    if (n == 0) {
        return 1;     // Base case: 0! = 1
    }
    return n * factorial(n - 1);   // Recursive step
}

int main() {
    int n;

    /* Read number from user */
    scanf("%d", &n);

    long long result = factorial(n);

    /* Output result */
    printf("Factorial: %lld", result);

    return 0;
}
