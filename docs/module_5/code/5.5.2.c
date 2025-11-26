/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads user input (C/F and temperature),   */
/*                 converts temperature using functions      */
/*                 declared in temperature.h, and prints     */
/*                 the result.                               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "temperature.h"

/*-----------------------------------------------------------*/
/*        Function Definitions (User Defined Functions)       */
/*-----------------------------------------------------------*/

float celsius_to_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheit_to_celsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {

    char type;
    float temp;

    /* Read input format: C 0   or   F 32 */
    scanf("%c %f", &type, &temp);

    /* Check conversion type */
    if (type == 'C' || type == 'c') {
        float result = celsius_to_fahrenheit(temp);
        printf("Fahrenheit: %.2f", result);
    }
    else if (type == 'F' || type == 'f') {
        float result = fahrenheit_to_celsius(temp);
        printf("Celsius: %.2f", result);
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}
