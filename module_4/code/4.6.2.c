/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Total and Average Marks  */
/*                   for Students             */
/*   Description   : Program to read marks of */
/*                   3 students in 4 subjects */
/*                   (2D array), calculate    */
/*                   total and average marks  */
/*                   for each student, and    */
/*                   display the results.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int marks[3][4];   // Step 1: 2D array for 3 students × 4 subjects
    int i, j;
    int total;
    float avg;

    // Step 2: Input marks row-wise
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Step 3: Process each student's total and average
    for (i = 0; i < 3; i++) {
        total = 0;

        // Calculate total for student i
        for (j = 0; j < 4; j++) {
            total += marks[i][j];
        }

        avg = total / 4.0;  // Calculate average

        // Step 4: Display results
        printf("Student %d - Total: %d, Average: %.2f\n", i + 1, total, avg);
    }

    return 0;  // End of program
}
