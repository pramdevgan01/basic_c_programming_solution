/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates static storage class inside  */
/*                 a function and prints all counter values  */
/*                 in a single line.                         */
/*                                                           */
/*   Example Output (n=2):                                   */
/*                 Counter = 1, 2                             */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function that uses a static variable                      */
/*-----------------------------------------------------------*/
int getCounter(void)
{
    static int counter = 0;
    counter++;
    return counter;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("Counter = ");

    for (int i = 1; i <= n; i++)
    {
        int value = getCounter();
        printf("%d", value);

        if (i < n)   // add comma for all except last
            printf(", ");
    }

    return 0;
}
