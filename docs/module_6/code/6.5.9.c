/*************************************************************
 *                                                           *
 *   File Name   : sort_comparator.c                         *
 *   Author      : Param Vishwakarma                         *
 *   Description : Sorts an integer array using a comparator *
 *                 function pointer. Comparator switches     *
 *                 between ascending and descending order    *
 *                 based on user input ("asc" / "desc").     *
 *                                                           *
 *   Input Format:                                           *
 *       n                                                   *
 *       n space-separated integers                          *
 *       mode: "asc" or "desc"                               *
 *                                                           *
 *   Output Format:                                          *
 *       Sorted array elements (space-separated)             *
 *                                                           *
 *   Constraints:                                            *
 *       1 ≤ n ≤ 10                                          *
 *                                                           *
 *   Sample Input:                                           *
 *       4                                                   *
 *       3 1 4 2                                             *
 *       asc                                                 *
 *                                                           *
 *   Sample Output:                                          *
 *       1 2 3 4                                             *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------*/
/* Comparator for ascending order                            */
/*-----------------------------------------------------------*/
int asc(int a, int b)
{
    return a > b;   // swap when a > b
}

/*-----------------------------------------------------------*/
/* Comparator for descending order                           */
/*-----------------------------------------------------------*/
int desc(int a, int b)
{
    return a < b;   // swap when a < b
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[20];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    char mode[10];
    scanf("%s", mode);

    /*-------------------------------------------------------*/
    /* Decide comparator based on input                      */
    /*-------------------------------------------------------*/
    int (*cmp)(int, int) = NULL;

    if (strcmp(mode, "asc") == 0)
        cmp = asc;
    else if (strcmp(mode, "desc") == 0)
        cmp = desc;
    else {
        printf("Invalid mode");
        return 0;
    }

    /*-------------------------------------------------------*/
    /* Bubble sort using the comparator function pointer     */
    /*-------------------------------------------------------*/
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (cmp(arr[j], arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    /*-------------------------------------------------------*/
    /* Print sorted array                                    */
    /*-------------------------------------------------------*/
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
