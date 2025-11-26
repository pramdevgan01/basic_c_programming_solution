/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Percentages and Grades   */
/*   Description   : Program to calculate     */
/*                   percentage and grade     */
/*                   based on marks of        */
/*                   4 subjects.              */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>

int main(void) {
    /* Step 1: Declare variables */
    int physics, chemistry, maths, biology;
    float percentage;

    /* Step 2: Input marks for 4 subjects */
    scanf("%d", &physics);
    scanf("%d", &chemistry);
    scanf("%d", &maths);
    scanf("%d", &biology);

    /* Step 3: Calculate percentage */
    int totalMarks = physics + chemistry + maths + biology;
    percentage = totalMarks / 4.0;

    /* Step 4: Print percentage */
    printf("%.2f\n", percentage);

    /* Step 5: Determine grade using if-else ladder */
    if (percentage >= 90) {
        printf("You got a A+ grade");
    }
    else if (percentage >= 80) {
        printf("You got a A grade");
    }
    else if (percentage >= 70) {
        printf("You got a B grade");
    }
    else if (percentage >= 60) {
        printf("You got a C grade");
    }
    else if (percentage >= 40) {
        printf("You got a D grade");
    }
    else {
        printf("You got a E grade");
    }

    return 0;
}
