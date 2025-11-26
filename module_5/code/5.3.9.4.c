/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads number of increments, calls the      */
/*                 increment function, then prints the final  */
/*                 global counter value using extern.         */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "counter.h"
#include "counter.c"     // Required for online compilers
#include "increment.c"   // Required for online compilers

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        incrementCounter();
    }

    printf("%d", counter);

    return 0;
}
