/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to read a company name, store it  */
/*                 in a structure, convert it to capital     */
/*                 letters, and return the modified string.  */
/*                                                           */
/*   Input:                                                  */
/*       A single string (company name, ≤ 100 characters)    */
/*                                                           */
/*   Output:                                                 */
/*       Input the Company name:                             */
/*                                                           */
/*       Company Name: <STRING_IN_CAPITAL_LETTERS>           */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           hyderabad                                       */
/*                                                           */
/*       Output:                                             */
/*           Company Name: HYDERABAD                         */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*-----------------------------------------------------------*/
/* Structure Name : Company                                  */
/* Description    : Stores company name                      */
/* Members        : name - character array to store name     */
/*-----------------------------------------------------------*/
struct Company {
    char name[100];
};

/*-----------------------------------------------------------*/
/* Function Name : toUpper                                   */
/* Description   : Converts all characters of the string in  */
/*                 the structure to uppercase.               */
/* Parameters    : struct Company *c                         */
/* Returns       : void                                      */
/*-----------------------------------------------------------*/
void toUpper(struct Company *c) {
    for (int i = 0; c->name[i] != '\0'; i++) {
        c->name[i] = toupper(c->name[i]);
    }
}

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a string, converts it to uppercase, */
/*                 and prints the result.                    */
/*-----------------------------------------------------------*/
int main() {
    struct Company c;

    printf("Input the Company name:\n");
    fgets(c.name, sizeof(struct Company), stdin);

    /* Convert to uppercase */
    toUpper(&c);

    printf("Company Name: %s\n", c.name);

    return 0;
}
