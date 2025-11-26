/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Uses Student structure defined in         */
/*                 datatype.h to accept and display          */
/*                 student information.                      */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "datatype.h"

int main(void)
{
    struct Student s;

    /*-------------------------------------------------------*/
    /*                Read Student Details                   */
    /*-------------------------------------------------------*/
    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%f", &s.marks);

    /*-------------------------------------------------------*/
    /*                Display Student Details                */
    /*-------------------------------------------------------*/
    printf("Name: %s, Roll: %d, Marks: %.2f", s.name, s.roll, s.marks);

    return 0;
}
