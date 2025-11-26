/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads an array from user input and uses    */
/*                 functions from arrayutils.h to compute     */
/*                 the average and maximum element.           */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "arrayutils.h"
#include "arrayutils.c"

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float avg = computeAverage(arr, n);
    int max = findMaximum(arr, n);

    printf("Average: %.2f\n", avg);
    printf("Maximum: %d", max);

    return 0;
}
