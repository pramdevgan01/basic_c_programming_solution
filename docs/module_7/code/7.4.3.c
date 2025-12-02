/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates union declaration and        */
/*                 initialization in C. The program reads an */
/*                 integer, a float, and a character into a  */
/*                 union and prints them.                    */
/*                                                           */
/*                 Note: Since union members share memory,   */
/*                 only the last stored value is actually     */
/*                 valid, but this program prints each       */
/*                 separately as per the requirement.        */
/*                                                           */
/*   Input:                                                  */
/*       Integer value                                       */
/*       Float value                                         */
/*       Character value                                     */
/*                                                           */
/*   Output:                                                 */
/*       Integer value: <int_value>                          */
/*       Float value: <float_value>                          */
/*       Character value: <char_value>                       */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           10                                              */
/*           5.5                                             */
/*           A                                               */
/*       Output:                                             */
/*           Integer value: 10                               */
/*           Float value: 5.50                               */
/*           Character value: A                              */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : Data                                         */
/* Description : Stores an int, float, or char using the     */
/*               same memory block (union demonstration).    */
/* Members     : i - integer                                 */
/*               f - float                                   */
/*               c - character                               */
/*-----------------------------------------------------------*/
union Data {
    int i;
    float f;
    char c;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads and prints union values as per      */
/*                 problem requirement.                      */
/*-----------------------------------------------------------*/
int main() {
    union Data d;
    int tempInt;
    float tempFloat;
    char tempChar;

    /* Read values into temporary variables */
    scanf("%d", &tempInt);
    scanf("%f", &tempFloat);
    scanf(" %c", &tempChar);  // space before %c avoids newline issues

    /* Print integer */
    d.i = tempInt;
    printf("Integer value: %d\n", d.i);

    /* Print float */
    d.f = tempFloat;
    printf("Float value: %.2f\n", d.f);

    /* Print character */
    d.c = tempChar;
    printf("Character value: %c\n", d.c);

    return 0; /* Successful termination */
}
