/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Analyze Weekly           */
/*                   Temperature Data         */
/*   Description   : Program to read 7 daily  */
/*                   temperatures, calculate   */
/*                   the average temperature,  */
/*                   and determine the highest */
/*                   and lowest temperatures.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O functions

int main() {
    int temp[7];       // Step 1: Array to store temperatures for 7 days
    int i;
    int highest, lowest;
    float sum = 0.0, avg;

    // Step 2: Read 7 temperatures
    for (i = 0; i < 7; i++) {
        scanf("%d", &temp[i]);
    }

    // Step 3: Initialize highest and lowest to first day temp
    highest = temp[0];
    lowest = temp[0];

    // Step 4: Calculate sum, highest, and lowest
    for (i = 0; i < 7; i++) {
        sum += temp[i];

        if (temp[i] > highest)
            highest = temp[i];

        if (temp[i] < lowest)
            lowest = temp[i];
    }

    // Step 5: Calculate average temperature
    avg = sum / 7.0;

    // Step 6: Display results (formatted to 2 decimal places)
    printf("Average Temperature: %.2f\n", avg);
    printf("Highest Temperature: %d\n", highest);
    printf("Lowest Temperature: %d\n", lowest);

    return 0;  // End of program
}
