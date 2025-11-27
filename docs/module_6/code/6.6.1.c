/*************************************************************
 *                                                           *
 *   File Name   : temp_tracker.c                            *
 *   Author      : Param Vishwakarma                         *
 *   Description : Dynamically stores temperatures of        *
 *                 patients using pointers. Computes the     *
 *                 average using pointer arithmetic and      *
 *                 prints all temperatures above average.    *
 *                                                           *
 *   Input  : n (number of patients)                         *
 *            n temperature values (float)                   *
 *                                                           *
 *   Output : Average Temperature                             *
 *             List of temperatures above average            *
 *                                                           *
 *   Constraints : 1 ≤ n ≤ 100                               *
 *                 Temperature range: 90.0 to 110.0          *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    /* Allocate memory for n float temperatures */
    float *temps = (float *)malloc(n * sizeof(float));
    if (temps == NULL) {
        return 0;  /* Allocation failed */
    }

    /* Read temperatures using pointer arithmetic */
    for (int i = 0; i < n; i++) {
        scanf("%f", (temps + i));
    }

    /* Compute average */
    float sum = 0.0f;
    float *ptr = temps;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    float avg = sum / n;

    /* Print average */
    printf("Average Temperature: %.2f\n", avg);
    printf("Above Average Temperatures:\n");

    /* Print values above average */
    for (int i = 0; i < n; i++) {
        if (*(temps + i) > avg) {
            printf("%.2f\n", *(temps + i));
        }
    }

    /* Free allocated memory */
    free(temps);

    return 0;
}
