/*************************************************************/
/*                                                           */
/*   File Name   : stringutils.c                             */
/*   Author      : Param Vishwakarma                         */
/*   Description : Implements functions for reversing a       */
/*                 string and converting it to uppercase.     */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <ctype.h>
#include <string.h>
#include "stringutils.h"

/*-----------------------------------------------------------*/
/*                  Reverse String Function                  */
/*-----------------------------------------------------------*/
void reverseString(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

/*-----------------------------------------------------------*/
/*               Convert String to Uppercase                 */
/*-----------------------------------------------------------*/
void toUpperCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}
