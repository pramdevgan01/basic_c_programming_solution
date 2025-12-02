/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to manage book records using an   */
/*                 array of structures. The program stores   */
/*                 details of 3 books, calculates the        */
/*                 average price, and identifies the most    */
/*                 expensive book.                           */
/*                                                           */
/*   Input:                                                  */
/*       For each of the 3 books:                            */
/*           Title (string, ≤ 50 chars)                      */
/*           Author (string, ≤ 50 chars)                     */
/*           Price (float > 0)                               */
/*                                                           */
/*   Output:                                                 */
/*       Average Price: <avg>                                */
/*       Most Expensive: <title>                             */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           C                                               */
/*           A                                               */
/*           300                                             */
/*           Java                                            */
/*           B                                               */
/*           500                                             */
/*           Python                                          */
/*           C                                               */
/*           200                                             */
/*                                                           */
/*       Output:                                             */
/*           Average Price: 333.33                           */
/*           Most Expensive: Java                            */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Book                                     */
/* Description    : Stores details of a single book          */
/* Members        : title  - book title                      */
/*                  author - book author                     */
/*                  price  - book price                      */
/*-----------------------------------------------------------*/
struct Book {
    char title[50];
    char author[50];
    float price;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads 3 books, computes average price,    */
/*                 and finds the most expensive book.        */
/*-----------------------------------------------------------*/
int main() {
    struct Book books[3];
    float sum = 0;
    int maxIndex = 0;

    /* Reading 3 books */
    for (int i = 0; i < 3; i++) {
        scanf("%s", books[i].title);
        scanf("%s", books[i].author);
        scanf("%f", &books[i].price);

        sum += books[i].price;

        /* Track most expensive book */
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    /* Compute average price */
    float avg = sum / 3.0f;

    /* Print results */
    printf("Average Price: %.2f\n", avg);
    printf("Most Expensive: %s\n", books[maxIndex].title);

    return 0; /* Successful termination */
}
