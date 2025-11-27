/**************************************************************/
/*                                                            */
/*   File Name   : matrix_dma.c                               */
/*   Author      : Param Vishwakarma                          */
/*   Description : This program dynamically allocates memory  */
/*                 for a 2D integer array (matrix) using DMA  */
/*                 based on user-provided rows and columns.   */
/*                 It then reads the matrix values and        */
/*                 displays the matrix in formatted output.   */
/*                                                            */
/*   Input        : r, c (rows and columns)                   */
/*                  r lines of c space-separated integers     */
/*                                                            */
/*   Output       : Prints the matrix as entered by user      */
/*                  in the format:                            */
/*                  The entered matrix is:                    */
/*                  <matrix elements>                         */
/*                                                            */
/*   Constraints  : 1 ≤ r, c ≤ 100                            */
/*                  −10^6 ≤ matrix elements ≤ 10^6            */
/*                                                            */
/*   Date         : November 2025                             */
/*                                                            */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>   /* For malloc() and free() */

int main(void)
{
    int r, c;

    /*------------------------------------------------------*/
    /*  Read matrix dimensions                              */
    /*------------------------------------------------------*/
    scanf("%d %d", &r, &c);

    /*------------------------------------------------------*/
    /*  Allocate memory for row pointers                    */
    /*------------------------------------------------------*/
    int **matrix = (int **)malloc(r * sizeof(int *));
    if (matrix == NULL) return 0;

    /*------------------------------------------------------*/
    /*  Allocate memory for each row                        */
    /*------------------------------------------------------*/
    for (int i = 0; i < r; i++) {
        matrix[i] = (int *)malloc(c * sizeof(int));
        if (matrix[i] == NULL) return 0;
    }

    /*------------------------------------------------------*/
    /*  Read matrix values                                  */
    /*------------------------------------------------------*/
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);

    /*------------------------------------------------------*/
    /*  Display the matrix                                  */
    /*------------------------------------------------------*/
    printf("The entered matrix is:\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    /*------------------------------------------------------*/
    /*  Free the allocated memory                           */
    /*------------------------------------------------------*/
    for (int i = 0; i < r; i++)
        free(matrix[i]);

    free(matrix);

    return 0;
}
