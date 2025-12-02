/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates the use of a union to store  */
/*                 a dimension in different units:           */
/*                 centimeters, meters, and inches.          */
/*                 The user selects which unit to store, and */
/*                 the program prints the dimension          */
/*                 accordingly.                              */
/*                                                           */
/*   Input:                                                  */
/*       choice (1 = cm, 2 = m, 3 = inches)                  */
/*       dimension (float > 0)                               */
/*                                                           */
/*   Output:                                                 */
/*       Correct dimension unit and value, or error message. */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           1                                               */
/*           150.50                                          */
/*       Output:                                             */
/*           Dimension in cm: 150.50                         */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : Dimension                                    */
/* Description : Stores a measurement in one of three units. */
/* Members     : cm     - centimeters                        */
/*               meters  - meters                            */
/*               inches  - inches                            */
/*-----------------------------------------------------------*/
union Dimension {
    float cm;
    float meters;
    float inches;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads the user's unit choice and value,   */
/*                 stores the value in the union, and prints */
/*                 the corresponding dimension.              */
/*-----------------------------------------------------------*/
int main() {
    int choice;
    float value;

    union Dimension d;

    /* Read user inputs */
    scanf("%d", &choice);
    scanf("%f", &value);

    switch (choice) {
        case 1:  /* Centimeters */
            d.cm = value;
            printf("Dimension in cm: %.2f\n", d.cm);
            break;

        case 2:  /* Meters */
            d.meters = value;
            printf("Dimension in m: %.2f\n", d.meters);
            break;

        case 3:  /* Inches */
            d.inches = value;
            printf("Dimension in inches: %.2f\n", d.inches);
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            break;
    }

    return 0; /* Successful termination */
}
