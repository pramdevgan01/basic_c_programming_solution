/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates the auto storage class by    */
/*                 declaring two local variables (auto by     */
/*                 default) and printing their sum.           */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    /*-------------------------------------------------------*/
    /* auto variables (implicit, as all local vars are auto) */
    /*-------------------------------------------------------*/
    auto int a, b;

    /* Read two integers */
    scanf("%d %d", &a, &b);

    /* Compute sum */
    int sum = a + b;

    /* Output */
    printf("Sum: %d", sum);

    return 0;
}
