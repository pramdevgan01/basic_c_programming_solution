/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Uses extern to access rectangle dimensions*/
/*                 declared in dimensions.c and prints       */
/*                 length, breadth, and calculated area.     */
/*                                                           */
/*   Date        : February 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  extern declarations — imported from dimensions.c         */
/*-----------------------------------------------------------*/
// extern int length;
// extern int breadth;


int main() {
    int length;
    int breadth;
    
    scanf("%d", &length);
    scanf("%d", &breadth);
    
    int area = length * breadth;

    printf("Length = %d  \n", length);
    printf("Breadth = %d  \n", breadth);
    printf("Area of Rectangle = %d  ", area);

    return 0;
}
