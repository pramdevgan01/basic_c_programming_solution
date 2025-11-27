/*************************************************************
 *                                                           *
 *   File Name   : search_element.c                          *
 *   Author      : Param Vishwakarma                         *
 *   Description : Reads an integer array from the user and  *
 *                 searches for a given key value. If found, *
 *                 prints its 1-based position; otherwise    *
 *                 indicates that the element is not found.  *
 *                                                           *
 *   Constraints :                                           *
 *       - 1 ≤ n ≤ 100                                       *
 *       - Element values range: -10000 to 10000             *
 *       - Linear search is used                             *
 *                                                           *
 *   Sample Input :                                          *
 *       5                                                   *
 *       10 20 30 40 50                                      *
 *       30                                                  *
 *                                                           *
 *   Sample Output :                                         *
 *       Element found at position 3                         *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

int main(void)
{
    int n, key, i, found = -1;

    /*-------------------------------------------------------*/
    /*  Read number of elements                              */
    /*-------------------------------------------------------*/
    scanf("%d", &n);

    int arr[n];

    /*-------------------------------------------------------*/
    /*  Read array elements                                  */
    /*-------------------------------------------------------*/
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    /*-------------------------------------------------------*/
    /*  Read the key to search                               */
    /*-------------------------------------------------------*/
    scanf("%d", &key);

    /*-------------------------------------------------------*/
    /*  Linear search for the key                            */
    /*-------------------------------------------------------*/
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i + 1;   /* Convert to 1-based index */
            break;
        }
    }

    /*-------------------------------------------------------*/
    /*  Print result                                         */
    /*-------------------------------------------------------*/
    if (found != -1)
        printf("Element found at position %d", found);
    else
        printf("Element not found");

    return 0;
}
