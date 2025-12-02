/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to read and display detailed book */
/*                 information using a structure. It accepts */
/*                 Book ID, Book Name (with spaces), Book    */
/*                 Author, and Book Page Count, then prints  */
/*                 them in the required format.              */
/*                                                           */
/*   Input:                                                  */
/*       Book ID (integer > 0)                               */
/*       Book Name (string, may contain spaces)              */
/*       Book Author (string without spaces)                 */
/*       Page Count (integer > 0)                            */
/*                                                           */
/*   Output:                                                 */
/*       Displaying Book Details:                            */
/*       Book ID: <ID>                                       */
/*       Book Name: <Name>                                   */
/*       Book Author: <Author>                               */
/*       Book Page Count: <Page Count>                       */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           12345                                           */
/*           The Great Gatsby                                */
/*           Fitzgerald                                      */
/*           218                                             */
/*                                                           */
/*       Output:                                             */
/*           Displaying Book Details:                        */
/*           Book ID: 12345                                  */
/*           Book Name: The Great Gatsby                     */
/*           Book Author: Fitzgerald                         */
/*           Book Page Count: 218                            */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------*/
/* Structure Name : Book                                     */
/* Description    : Stores book information                  */
/* Members        : id       - Book ID                       */
/*                  name     - Book Name                     */
/*                  author   - Book Author                   */
/*                  pages    - Page Count                    */
/*-----------------------------------------------------------*/
struct Book {
    int id;
    char name[100];
    char author[50];
    int pages;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads book information and prints it      */
/*                 in the required format.                   */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main() {
    struct Book b;

    printf("Enter Book ID:\n");
    scanf("%d", &b.id);
    getchar();  /* Clear newline left by scanf */

    printf("Enter Book Name:\n");
    fgets(b.name, sizeof(b.name), stdin);
    b.name[strcspn(b.name, "\n")] = '\0';  // remove newline

    printf("Enter Book Author:\n");
    scanf("%s", b.author);

    printf("Enter Page Count:\n");
    scanf("%d", &b.pages);

    printf("\nDisplaying Book Details:\n");
    printf("Book ID: %d\n", b.id);
    printf("Book Name: %s\n", b.name);
    printf("Book Author: %s\n", b.author);
    printf("Book Page Count: %d\n", b.pages);

    return 0; /* Successful termination */
}
