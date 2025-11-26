/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads user input (shape + dimensions),    */
/*                 calculates the required area using        */
/*                 functions declared in area.h, and prints  */
/*                 the result.                               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>
#include "area.h"

/*-----------------------------------------------------------*/
/*           Function Definitions (user-defined)             */
/*-----------------------------------------------------------*/

float area_circle(float radius) {
    return 3.14f * radius * radius;
}

float area_rectangle(float length, float breadth) {
    return length * breadth;
}

int main() {

    char shape[20];
    float a, b;

    /* Read shape name first */
    scanf("%s", shape);

    /*-------------------------------------------------------*/
    /*   If shape is 'circle', read one dimension            */
    /*-------------------------------------------------------*/
    if (strcmp(shape, "circle") == 0) {
        scanf("%f", &a);
        float result = area_circle(a);
        printf("Area of circle: %.2f", result);
    }

    /*-------------------------------------------------------*/
    /*   If shape is 'rectangle', read two dimensions        */
    /*-------------------------------------------------------*/
    else if (strcmp(shape, "rectangle") == 0) {
        scanf("%f %f", &a, &b);
        float result = area_rectangle(a, b);
        printf("Area of rectangle: %.2f", result);
    }

    else {
        printf("Invalid shape");
    }

    return 0;
}
