/*************************************************************/
/*                                                           */
/*   File Name   : fibonacci_recursive.c                     */
/*   Author      : Param Vishwakarma                         */
/*   Description : Generates the Fibonacci sequence up to    */
/*                 n terms using recursion.                  */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*   Recursive function to return nth Fibonacci number       */
/*-----------------------------------------------------------*/
int fibonacci(int n) {
    if (n == 0) return 0;               // Base case 1
    if (n == 1) return 1;               // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
}

int main() {
    int n;

    /* Read the number of terms */
    scanf("%d", &n);

    /* Print Fibonacci sequence */
    for (int i = 0; i <= n; i++) {
        printf("%d", fibonacci(i));
        if (i < n) printf(" ");  // space except after last number
    }

    return 0;
}
