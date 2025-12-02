/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates the use of a union to store  */
/*                 different forms of currency—USD, Euros,   */
/*                 and Yen. The user selects a currency and  */
/*                 enters an amount. The program then prints */
/*                 the currency type along with the amount.  */
/*                                                           */
/*   Input:                                                  */
/*       choice (1 = USD, 2 = Euros, 3 = Yen)                */
/*       amount (float)                                      */
/*                                                           */
/*   Output:                                                 */
/*       You entered <CurrencyName>: <Amount>                */
/*       OR                                                  */
/*       Invalid currency selection.                         */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           1                                               */
/*           100.50                                          */
/*       Output:                                             */
/*           You entered USD: 100.50                         */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : Currency                                     */
/* Description : Stores a floating-point value representing  */
/*               any type of currency. The union is used to  */
/*               show that the same memory stores the amount */
/*               regardless of currency type.                */
/* Members     : usd   - value in USD                        */
/*               euro  - value in Euros                      */
/*               yen   - value in Yen                        */
/*-----------------------------------------------------------*/
union Currency {
    float usd;
    float euro;
    float yen;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads choice and amount, stores value in  */
/*                 the proper union member, and prints the   */
/*                 selected currency's amount.               */
/*-----------------------------------------------------------*/
int main() {
    int choice;
    float amount;

    union Currency money;

    /* Read currency choice and amount */
    scanf("%d", &choice);
    scanf("%f", &amount);

    switch (choice) {
        case 1:  // USD
            money.usd = amount;
            printf("You entered USD: %.2f\n", money.usd);
            break;

        case 2:  // Euros
            money.euro = amount;
            printf("You entered Euros: %.2f\n", money.euro);
            break;

        case 3:  // Yen
            money.yen = amount;
            printf("You entered Yen: %.2f\n", money.yen);
            break;

        default:
            printf("Invalid currency selection.\n");
    }

    return 0; /* Successful termination */
}
