/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates use of extern keyword across */
/*                 multiple files to calculate the area of   */
/*                 a rectangle.                              */
/*                                                           */
/*                 The global variables 'length' and         */
/*                 'breadth' are declared in dimensions.c    */
/*                 and accessed here using extern. The user  */
/*                 inputs both values, and the program       */
/*                 computes and displays the area.            */
/*                                                           */
/*   Input Format:                                           */
/*       Length = <value>                                    */
/*       Breadth = <value>                                   */
/*                                                           */
/*   Output Format:                                          */
/*       Length = <value>                                    */
/*       Breadth = <value>                                   */
/*       Area of Rectangle = <value>                         */
/*                                                           */
/*   Constraints:                                            */
/*       length, breadth > 0                                 */
/*       Uses extern for variable sharing across files       */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "dimensions.c" 

extern int length;
extern int breadth;

int main() {
    scanf("Length = %d", &length);
    scanf(" Breadth = %d", &breadth);

    int area = length * breadth;

    printf("Length = %d  \n", length);
    printf("Breadth = %d  \n", breadth);
    printf("Area of Rectangle = %d \n", area);

    return 0;
}
