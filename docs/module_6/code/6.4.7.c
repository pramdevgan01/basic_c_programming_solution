/*************************************************************/
/*                                                           */
/*   File Name   : diagonal_sum.c                            */
/*   Author      : Param Vishwakarma                         */
/*   Description : This program dynamically allocates memory */
/*                 for a square matrix of size n × n, reads  */
/*                 its values, and computes the sum of       */
/*                 diagonal elements (elements where i == j).*/
/*                                                           */
/*   Input        : n (size of matrix)                       */
/*                  n rows of n space-separated integers     */
/*                                                           */
/*   Output       : Sum of diagonal elements in format:      */
/*                  Sum of diagonal elements: <sum>          */
/*                                                           */
/*   Constraints  : 1 ≤ n ≤ 100                              */
/*                  −10^6 ≤ matrix elements ≤ 10^6           */
/*                                                           */
/*   Date         : November 2025                            */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>     /* For malloc() and free() */

int main(void)
{
    int n;
    scanf("%d", &n);

    /*------------------------------------------------------*/
    /*  Dynamically allocate memory for square matrix       */
    /*------------------------------------------------------*/
    int **matrix = (int **)malloc(n * sizeof(int *));
    if (matrix == NULL) return 0;

    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
        if (matrix[i] == NULL) return 0;
    }

    /*------------------------------------------------------*/
    /*  Read matrix values                                  */
    /*------------------------------------------------------*/
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    /*------------------------------------------------------*/
    /*  Compute diagonal sum                                */
    /*------------------------------------------------------*/
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += matrix[i][i];

    /*------------------------------------------------------*/
    /*  Display result                                      */
    /*------------------------------------------------------*/
    printf("Sum of diagonal elements: %lld", sum);

    /*------------------------------------------------------*/
    /*  Free allocated memory                               */
    /*------------------------------------------------------*/
    for (int i = 0; i < n; i++)
        free(matrix[i]);

    free(matrix);

    return 0;
}
