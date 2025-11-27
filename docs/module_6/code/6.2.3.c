/**************************************************************/
/*                                                            */
/*   File Name   : pointer_search.c                           */
/*   Author      : Param Vishwakarma                          */
/*   Description : Inputs array using pointer pt and searches */
/*                 for a given element, printing its 1-based  */
/*                 position or not-found message.             */
/*                                                            */
/*   Date        : November 2025                              */
/*                                                            */
/**************************************************************/

#include <stdio.h>

int main(void)
{
    int n, x;
    int arr[100];
    int *pt = arr;   /* Pointer to array */

    /* Read array size */
    scanf("%d", &n);

    /* Read array elements using pointer */
    for (int i = 0; i < n; i++) {
        scanf("%d", (pt + i));
    }

    /* Read element to search */
    scanf("%d", &x);

    /* Search the element using pointer arithmetic */
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (*(pt + i) == x) {
            found = i + 1;   // 1-based index
            break;
        }
    }

    /* Print result exactly as required */
    if (found != -1) {
        printf("%d is found at %d position.", x, found);
    } else {
        printf("%d is not available in the array.", x);
    }

    return 0;
}
