/**************************************************************/
/*                                                            */
/*   File Name   : loan_details.c                             */
/*   Author      : Param Vishwakarma                          */
/*                                                            */
/*   Description :                                            */
/*     This program demonstrates the use of structures and    */
/*     Dynamic Memory Allocation (DMA) to store and display   */
/*     loan details entered by the user. Each loan record     */
/*     consists of:                                           */
/*         - Loan Amount                                      */
/*         - Interest Rate                                    */
/*         - Loan Term (in years)                             */
/*                                                            */
/*     The program:                                           */
/*       1. Reads 'n' (number of loans).                      */
/*       2. Dynamically allocates memory for 'n' loan records.*/
/*       3. Accepts all loan details from user input.         */
/*       4. Displays the loan details in a tabular format.    */
/*                                                            */
/*     This demonstrates key concepts:                        */
/*       - Structures                                         */
/*       - Dynamic Memory Allocation (malloc)                 */
/*       - Formatted table output                             */
/*                                                            */
/*   Input Format:                                            */
/*       n                                                    */
/*       amount1                                              */
/*       interest1                                            */
/*       term1                                                */
/*       ... (repeated n times)                               */
/*                                                            */
/*   Output Format:                                           */
/*       Loan details displayed in a formatted table          */
/*                                                            */
/*   Constraints:                                             */
/*       1 ≤ n ≤ 100                                          */
/*       amount  > 0                                          */
/*       interest > 0                                         */
/*       term > 0                                             */
/*                                                            */
/*   Date        : November 2025                              */
/*                                                            */
/**************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*************************************************************/
/* Structure Definition                                      */
/*************************************************************/
/*
    struct Loan:
        A structure to store:
            - amount       : double
            - interest     : double
            - term (years) : int
*/
struct Loan {
    double amount;
    double interest;
    int term;
};

/*************************************************************/
/*                         MAIN FUNCTION                     */
/*************************************************************/
int main(void)
{
    int n;

    /* Read number of loans */
    scanf("%d", &n);

    /*---------------------------------------------------------*/
    /* Dynamic Memory Allocation for n loans                   */
    /*---------------------------------------------------------*/
    struct Loan *loans = (struct Loan *)malloc(n * sizeof(struct Loan));
    if (loans == NULL) {
        printf("Memory Allocation Failed\n");
        return 0;
    }

    /*---------------------------------------------------------*/
    /* Read loan details from user                             */
    /*---------------------------------------------------------*/
    for (int i = 0; i < n; i++) {
        scanf("%lf", &loans[i].amount);
        scanf("%lf", &loans[i].interest);
        scanf("%d", &loans[i].term);
    }

    /*---------------------------------------------------------*/
    /* Print loan details in formatted table                   */
    /*---------------------------------------------------------*/
    printf("Loan Details:\n");
    printf("--------------------------------------------------\n");
    printf("Loan No\tAmount\t\tInterest Rate\tTerm (years)\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%.2lf\t\t%.2lf\t\t%d\n",
               i + 1,
               loans[i].amount,
               loans[i].interest,
               loans[i].term);
    }

    /*---------------------------------------------------------*/
    /* Free allocated memory                                   */
    /*---------------------------------------------------------*/
    free(loans);

    return 0;
}
