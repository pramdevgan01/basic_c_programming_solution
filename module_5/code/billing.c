/***************************************************************/
/*                                                             */
/*   File Name   : billing.c                                   */
/*   Author      : Param Vishwakarma                           */
/*   Description : Implements the recursive electricity        */
/*                 billing function. Counts how many times     */
/*                 the function is called using a global       */
/*                 counter.                                    */
/*                                                             */
/*                 Billing logic:                              */
/*                   - If units ≤ 100                          */
/*                       units * 1.5                           */
/*                   - If 100 < units ≤ 200                    */
/*                       100 * 1.5 + calculate_bill(units-100) */
/*                   - If units > 200                          */
/*                       100 * 1.5 + 100 * 2.0 +               */
/*                       calculate_bill(units - 200)           */
/*                                                             */
/*   Date        : November 2025                               */
/*                                                             */
/***************************************************************/

#include "billing.h"

/* Definition of global call counter */
int call_count = 0;

double calculate_bill(int units)
{
    call_count++;  /* Count this function call */

    if (units <= 100) {
        return units * 1.5;
    }
    else if (units <= 200) {
        return 100 * 1.5 + calculate_bill(units - 100);
    }
    else {
        return 100 * 1.5 + 100 * 2.0 + calculate_bill(units - 200);
    }
}
