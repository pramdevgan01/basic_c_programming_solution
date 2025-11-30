/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates how a static variable inside */
/*                 a function retains its value across       */
/*                 multiple calls.                           */
/*                                                           */
/*                 Program reads an integer n (number of     */
/*                 calls). For each call, the function       */
/*                 getCounter() increments and returns a     */
/*                 static counter. The output prints:        */
/*                                                           */
/*                     Call i: Counter = <value>             */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*       Output:                                             */
/*           Call 1: Counter = 1                             */
/*           Call 2: Counter = 2                             */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function Name : getCounter                                */
/* Description   : Demonstrates static storage class.        */
/*                 A static variable retains its value even  */
/*                 after the function returns. Each time     */
/*                 getCounter() is called, the counter is    */
/*                 incremented and returned.                 */
/* Parameters    : None                                      */
/* Returns       : int - current value of static counter     */
/*-----------------------------------------------------------*/
int getCounter(void)
{
    static int counter = 0;  /* Static: value persists between calls */
    counter++;               /* Increment the counter */
    return counter;          /* Return updated value */
}

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Entry point of the program. Reads an      */
/*                 integer n, calls getCounter() n times,    */
/*                 and prints each returned value in format: */
/*                 "Call i: Counter = value".                */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    int n;

    /* Read number of times function should be called */
    scanf("%d", &n);

    /* Loop from 1 to n and display counter values */
    for (int i = 1; i <= n; i++)
    {
        int value = getCounter();   /* Get incremented static counter */
        printf("Call %d: Counter = %d\n", i, value);
    }

    return 0; /* Successful termination */
}
