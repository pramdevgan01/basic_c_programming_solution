/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Recursively checks and prints all happy   */
/*                 numbers within a user-specified range.    */
/*                 A happy number eventually reaches 1 when  */
/*                 replaced repeatedly by the sum of squares */
/*                 of its digits. Recursion is used for:     */
/*                 - Computing sum of squares                */
/*                 - Detecting happy number cycle            */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Recursive Function Prototypes                            */
/*-----------------------------------------------------------*/
int sumOfSquares(int n);
int isHappyRecursive(int slow, int fast);

/*************************************************************/
/*                           main()                          */
/*************************************************************/
int main(void) {

    int start, end;

    /* Read input range */
    scanf("%d", &start);
    scanf("%d", &end);

    printf("Happy numbers between %d and %d are: ", start, end);

    /* Loop only for iterating range — recursion used inside */
    for (int i = start; i <= end; i++) {
        if (isHappyRecursive(i, i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

/*************************************************************/
/*        sumOfSquares(int n) — Recursive version            */
/*   Returns sum of squares of digits of n                   */
/*************************************************************/
int sumOfSquares(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;
    return (digit * digit) + sumOfSquares(n / 10);
}

/*************************************************************/
/*   isHappyRecursive(int slow, int fast)                    */
/*   Uses Floyd cycle detection recursively:                 */
/*     slow moves 1 step (sumOfSquares)                      */
/*     fast moves 2 steps (sumOfSquares twice)               */
/*   If cycle reaches 1 → happy number                       */
/*   If cycle loops elsewhere → not happy                    */
/*************************************************************/
int isHappyRecursive(int slow, int fast) {

    slow = sumOfSquares(slow);
    fast = sumOfSquares(sumOfSquares(fast));

    /* base case — if either pointer reaches 1 */
    if (slow == 1 || fast == 1)
        return 1;

    /* cycle detected — not a happy number */
    if (slow == fast)
        return 0;

    /* recursive step */
    return isHappyRecursive(slow, fast);
}
