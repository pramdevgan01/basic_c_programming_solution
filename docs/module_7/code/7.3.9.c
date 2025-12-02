/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate the use of typedef */
/*                 to define a string type. The program      */
/*                 reads a string (without spaces) and       */
/*                 prints its reverse.                       */
/*                                                           */
/*   Input:                                                  */
/*       A single string (1–100 characters, no spaces)       */
/*                                                           */
/*   Output:                                                 */
/*       The reversed string                                 */
/*                                                           */
/*   Example:                                                */
/*       Input: hello                                        */
/*       Output: olleh                                       */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------*/
/* Typedef Name : String                                     */
/* Description  : Defines 'String' as a character array of   */
/*                length 101 (100 chars + null terminator).  */
/*-----------------------------------------------------------*/
typedef char String[101];

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a string using typedef and prints   */
/*                 its reverse.                              */
/*-----------------------------------------------------------*/
int main() {
    String str, rev;
    int len, i;

    /* Read string */
    scanf("%s", str);

    len = strlen(str);

    /* Reverse the string */
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';  /* Null-terminate the reversed string */

    /* Output reversed string */
    printf("%s\n", rev);

    return 0; /* Successful termination */
}
