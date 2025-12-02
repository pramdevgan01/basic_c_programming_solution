/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate nested structures  */
/*                 in C. A Book structure is defined that     */
/*                 internally uses another structure to store */
/*                 title and author. The program reads a     */
/*                 single book's details and prints them in  */
/*                 a formatted single line.                  */
/*                                                           */
/*   Input:                                                  */
/*       Title  (string without spaces)                      */
/*       Author (string without spaces)                      */
/*       Price  (float)                                      */
/*                                                           */
/*   Output:                                                 */
/*       Title: <title>, Author: <author>, Price: <price>    */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           CProgramming                                    */
/*           DennisRitchie                                   */
/*           399.99                                          */
/*                                                           */
/*       Output:                                             */
/*           Title: CProgramming, Author: DennisRitchie,     */
/*           Price: 399.99                                   */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Info                                     */
/* Description    : Stores basic textual book information    */
/* Members        : title  - book title                      */
/*                  author - book author                     */
/*-----------------------------------------------------------*/
struct Info {
    char title[50];
    char author[50];
};

/*-----------------------------------------------------------*/
/* Structure Name : Book                                     */
/* Description    : Stores nested book details including      */
/*                  price and the Info structure.            */
/* Members        : details - nested Info structure          */
/*                  price   - book price                     */
/*-----------------------------------------------------------*/
struct Book {
    struct Info details;
    float price;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads book details using nested structure */
/*                 and prints them in a single formatted     */
/*                 output line.                              */
/*-----------------------------------------------------------*/
int main() {
    struct Book b;

    /* Read Title, Author, Price */
    scanf("%s", b.details.title);
    scanf("%s", b.details.author);
    scanf("%f", &b.price);

    /* Print result */
    printf("Title: %s, Author: %s, Price: %.2f\n",
           b.details.title, b.details.author, b.price);

    return 0;
}
