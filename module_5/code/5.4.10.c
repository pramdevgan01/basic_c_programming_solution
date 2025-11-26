/*************************************************************/
/*                                                           */
/*   File Name   : power_recursive.c                         */
/*   Author      : Param Vishwakarma                         */
/*   Description : Computes base raised to exponent using    */
/*                 a recursive power function.               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*        Recursive function to compute base^exponent        */
/*-----------------------------------------------------------*/
long long power(int base, int exponent) {

    /* Base case: anything raised to power 0 is 1 */
    if (exponent == 0) {
        return 1;
    }

    /* Recursive case */
    return base * power(base, exponent - 1);
}

int main() {

    int base, exponent;

    /* Read inputs */
    scanf("%d", &base);
    scanf("%d", &exponent);

    long long result = power(base, exponent);

    /* Output result exactly as required */
    printf("Power: %lld", result);

    return 0;
}
