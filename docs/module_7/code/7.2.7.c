/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to store and display details of   */
/*                 multiple books using structures. The      */
/*                 program reads Title, Author, and Price    */
/*                 for exactly three books and prints them   */
/*                 in the required format.                   */
/*                                                           */
/*   Input:                                                  */
/*       For each of 3 books:                                */
/*           Title (string, no spaces)                       */
/*           Author (string, no spaces)                      */
/*           Price (float or integer)                        */
/*                                                           */
/*   Output:                                                 */
/*       Book 1:                                             */
/*       Title: <Title1>                                     */
/*       Author: <Author1>                                   */
/*       Price: <Price1>                                     */
/*                                                           */
/*       Book 2:                                             */
/*       Title: <Title2>                                     */
/*       Author: <Author2>                                   */
/*       Price: <Price2>                                     */
/*                                                           */
/*       Book 3:                                             */
/*       Title: <Title3>                                     */
/*       Author: <Author3>                                   */
/*       Price: <Price3>                                     */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           CProgramming                                    */
/*           DennisRitchie                                   */
/*           250                                             */
/*           LearnPython                                     */
/*           MarkLutz                                        */
/*           500                                             */
/*           DataStructures                                   */
/*           NarasimhaKarumanchi                              */
/*           300                                             */
/*                                                           */
/*       Output:                                             */
/*           Book 1:                                         */
/*           Title: CProgramming                             */
/*           Author: DennisRitchie                           */
/*           Price: 250.00                                   */
/*                                                           */
/*           Book 2:                                         */
/*           Title: LearnPython                              */
/*           Author: MarkLutz                                */
/*           Price: 500.00                                   */
/*                                                           */
/*           Book 3:                                         */
/*           Title: DataStructures                           */
/*           Author: NarasimhaKarumanchi                     */
/*           Price: 300.00                                   */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Book                                     */
/* Description    : Stores book information including title, */
/*                  author, and price.                       */
/* Members        : title  - book title                      */
/*                  author - book author                     */
/*                  price  - book price                      */
/*-----------------------------------------------------------*/
struct Book {
    char title[100];
    char author[100];
    float price;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads details for three books and prints  */
/*                 them in the required format.              */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main() {
    struct Book b[3];

    /* Reading details of 3 books */
    for (int i = 0; i < 3; i++) {
        scanf("%s", b[i].title);
        scanf("%s", b[i].author);
        scanf("%f", &b[i].price);
    }

    /* Printing book details */
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n", b[i].price);
        if (i < 2)
            printf("\n");  // Blank line except after last book
    }

    return 0; /* Successful termination */
}
