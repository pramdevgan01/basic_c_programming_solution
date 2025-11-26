/*************************************************************/
/*                                                           */
/*   File Name   : arrayutils.c                              */
/*   Author      : Param Vishwakarma                         */
/*   Description : Implements functions for computing the     */
/*                 average and maximum element of an array.   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include "arrayutils.h"

/*-----------------------------------------------------------*/
/*              Function to compute average                  */
/*-----------------------------------------------------------*/
float computeAverage(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
}

/*-----------------------------------------------------------*/
/*              Function to find maximum element             */
/*-----------------------------------------------------------*/
int findMaximum(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
