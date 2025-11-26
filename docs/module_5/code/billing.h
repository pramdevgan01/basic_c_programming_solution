/*************************************************************/
/*                                                           */
/*   File Name   : billing.h                                 */
/*   Author      : Param Vishwakarma                         */
/*   Description : Header file for recursive electricity      */
/*                 billing utilities. Declares the global    */
/*                 call counter and the recursive            */
/*                 calculate_bill() function.                */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#ifndef BILLING_H
#define BILLING_H

/* Extern declaration for the global call counter */
extern int call_count;

/* Recursive function to calculate total bill */
double calculate_bill(int units);

#endif
