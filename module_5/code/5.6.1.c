/*************************************************************/
/*                                                           */
/*   File Name   : banking.c                                 */
/*   Author      : Param Vishwakarma                         */
/*   Description : Banking simulation using modular          */
/*                 functions and a static transaction        */
/*                 counter. Supports deposit, withdrawal,    */
/*                 and balance display.                      */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Function Prototypes                                      */
/*-----------------------------------------------------------*/
int deposit(int balance, int amount);
int withdraw(int balance, int amount);
void display(int balance);

/*-----------------------------------------------------------*/
/*  Static transaction counter                               */
/*-----------------------------------------------------------*/
static int transactionCount = 0;

/*-----------------------------------------------------------*/
/*                  Deposit Function                         */
/*-----------------------------------------------------------*/
int deposit(int balance, int amount)
{
    balance += amount;
    printf("Deposited ₹%d\n", amount);

    transactionCount++;   /* Count successful transaction */
    return balance;
}

/*-----------------------------------------------------------*/
/*                 Withdrawal Function                       */
/*-----------------------------------------------------------*/
int withdraw(int balance, int amount)
{
    if (amount > balance)
    {
        printf("Insufficient balance!\n");
        return balance; /* No transaction counted */
    }

    balance -= amount;
    printf("Withdrawn ₹%d\n", amount);

    transactionCount++;   /* Count successful transaction */
    return balance;
}


/*-----------------------------------------------------------*/
/*               Display Balance Function                    */
/*-----------------------------------------------------------*/
void display(int balance)
{
    printf("Current Balance: ₹%d\n", balance);
}

/*-----------------------------------------------------------*/
/*                       MAIN PROGRAM                        */
/*-----------------------------------------------------------*/
int main(void)
{
    int balance, choice, amount;

    /* Read initial balance */
    scanf("%d", &balance);

    while (1)
    {
        scanf("%d", &choice);

        if (choice == 0)
            break;   /* Exit program */

        switch (choice)
        {
            case 1:  /* Deposit */
                scanf("%d", &amount);
                balance = deposit(balance, amount);
                break;

            case 2:  /* Withdrawal */
                scanf("%d", &amount);
                balance = withdraw(balance, amount);
                break;

            case 3:  /* Display Balance */
                display(balance);
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    /* Final transaction count */
    printf("Total transactions: %d", transactionCount);

    return 0;
}
