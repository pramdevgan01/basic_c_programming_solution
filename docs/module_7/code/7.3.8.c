/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating the use of enum to  */
/*                 represent currency denominations. The     */
/*                 user inputs a number, and the program      */
/*                 prints the corresponding denomination if   */
/*                 valid.                                     */
/*                                                           */
/*   Valid Denominations: 1, 5, 10, 20, 50, 100               */
/*                                                           */
/*   Input:                                                  */
/*       n - integer representing denomination               */
/*                                                           */
/*   Output:                                                 */
/*       Denomination: <n> units                             */
/*       OR error message for invalid input.                 */
/*                                                           */
/*   Example:                                                */
/*       Input: 100                                          */
/*       Output: Denomination: 100 units                     */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Denomination                                  */
/* Description : Represents valid currency denominations     */
/* Values      : ONE = 1, FIVE = 5, TEN = 10, TWENTY = 20,   */
/*               FIFTY = 50, HUNDRED = 100                   */
/*-----------------------------------------------------------*/
enum Denomination {
    ONE = 1,
    FIVE = 5,
    TEN = 10,
    TWENTY = 20,
    FIFTY = 50,
    HUNDRED = 100
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads an integer and prints the           */
/*                 corresponding denomination if valid.      */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read user input */
    scanf("%d", &n);

    /* Check against enum values */
    switch (n) {
        case ONE:
        case FIVE:
        case TEN:
        case TWENTY:
        case FIFTY:
        case HUNDRED:
            printf("Denomination: %d units\n", n);
            break;
        default:
            printf("Invalid input! Please enter a valid denomination.\n");
    }

    return 0; /* Successful termination */
}
