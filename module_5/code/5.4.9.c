/*************************************************************/
/*                                                           */
/*   File Name   : sum_natural_recursive.c                   */
/*   Author      : Param Vishwakarma                         */
/*   Description : Computes the sum of the first N natural   */
/*                 numbers using a recursive function.       */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*   Recursive function to compute sum of first n numbers    */
/*-----------------------------------------------------------*/
long long sumNatural(int n) {
    if (n == 1) {
        return 1;   // Base case: sum of first 1 natural number = 1
    }
    return n * 1LL + sumNatural(n - 1);   // Recursive step
}

int main() {
    int n;

    /* Read user input */
    scanf("%d", &n);

    long long result = sumNatural(n);

    /* Print output exactly as required */
    printf("Sum of natural numbers: %lld", result);

    return 0;
}
