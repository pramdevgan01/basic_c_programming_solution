/*************************************************************
 *                                                           *
 *   File Name   : student_names.c                           *
 *   Author      : Param Vishwakarma                         *
 *   Description : Dynamically allocates memory to store     *
 *                 student names. Reads 'n' names using      *
 *                 pointers and prints them in reverse       *
 *                 input order.                              *
 *                                                           *
 *   Input  : n (number of students)                         *
 *            n student names (each up to 50 characters)     *
 *                                                           *
 *   Output : Names printed in reverse input order           *
 *                                                           *
 *   Constraints : 1 ≤ n ≤ 20                                *
 *                 Each name ≤ 50 characters                 *
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

    /* Allocate array of char pointers */
    char **names = (char **)malloc(n * sizeof(char *));
    if (names == NULL) {
        return 0; /* Allocation failed */
    }

    /* Read each name using dynamic allocation */
    for (int i = 0; i < n; i++) {
        names[i] = (char *)malloc(51 * sizeof(char));  /* Up to 50 chars + '\0' */

        if (names[i] == NULL) {
            return 0; /* Allocation failure */
        }

        scanf("%s", names[i]);
    }

    /* Print names in reverse order */
    for (int i = n - 1; i >= 0; i--) {
        printf("%s\n", names[i]);
    }

    /* Free allocated memory */
    for (int i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}
