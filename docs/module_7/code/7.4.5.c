/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates how unions allow storing     */
/*                 different data types (integer and string) */
/*                 in the same memory location. The program  */
/*                 accepts an integer and a string, then     */
/*                 displays both values.                     */
/*                                                           */
/*                 Note: Since union members share memory,   */
/*                 writing to one member overwrites the       */
/*                 others. This program displays the values  */
/*                 based on separate assignments.            */
/*                                                           */
/*   Input:                                                  */
/*       Integer value (1–10000)                             */
/*       String (max 19 characters, no spaces)               */
/*                                                           */
/*   Output:                                                 */
/*       Integer Value: <integer>                            */
/*       String Value: <string>                              */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           25                                              */
/*           Hello                                           */
/*                                                           */
/*       Output:                                             */
/*           Integer Value: 25                               */
/*           String Value: Hello                             */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------*/
/* Union Name : Data                                         */
/* Description : Stores either an int or a string using the  */
/*               same memory block.                          */
/* Members     : num  - integer value                        */
/*               text - string value (max 19 chars + '\0')   */
/*-----------------------------------------------------------*/
union Data {
    int num;
    char text[20];
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads integer and string values, assigns  */
/*                 them to the union separately, and prints  */
/*                 the results.                              */
/*-----------------------------------------------------------*/
int main() {
    union Data d;
    int tempInt;
    char tempStr[20];

    /* Read input values */
    scanf("%d", &tempInt);
    scanf("%s", tempStr);

    /* Assign and print integer */
    d.num = tempInt;
    printf("Integer Value: %d\n", d.num);

    /* Assign and print string */
    strcpy(d.text, tempStr);
    printf("String Value: %s\n", d.text);

    return 0; /* Successful termination */
}
