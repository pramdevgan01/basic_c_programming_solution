/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates extern storage class by      */
/*                 accessing a global counter defined in     */
/*                 counter.c. Decrements it n times and      */
/*                 prints the final value.                   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "counter.c"   /* For online compiler: pulls in global definition */

/* extern declaration (shows intent that it lives in another file) */
extern int counter;

/* Function to decrement global counter once */
void decrementCounter(void)
{
    counter--;
}

int main(void)
{
    int n;
    scanf("%d", &n);    /* number of times to decrement */

    for (int i = 0; i < n; i++) {
        decrementCounter();
    }

    printf("Global Counter = %d", counter);

    return 0;
}
