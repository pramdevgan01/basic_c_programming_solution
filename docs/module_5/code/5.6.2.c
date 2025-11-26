/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads total units consumed, calls the     */
/*                 recursive billing function from           */
/*                 billing.c, and prints the total bill and  */
/*                 the number of recursive function calls.   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "billing.h"
#include "billing.c"   /* For online compilers that don't link multiple .c files */

int main(void)
{
    int units;
    scanf("%d", &units);

    double total = calculate_bill(units);

    printf("Total Bill: ₹%.2lf\n", total);
    printf("Function called: %d times", call_count);

    return 0;
}
