/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Simple Contact Management System using    */
/*                 structures in C. The program reads up to  */
/*                 5 contacts, each containing a name and a  */
/*                 contact number, then displays them.       */
/*                                                           */
/*   Input:                                                  */
/*       n (1–5) – number of people                          */
/*       For each person:                                    */
/*           name (string without spaces)                    */
/*           contact number (10-digit string or number)      */
/*                                                           */
/*   Output:                                                 */
/*       Person i: Name: <Name>, Contact No: <ContactNumber> */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           3                                               */
/*           Alice                                           */
/*           1234567890                                      */
/*           Bob                                             */
/*           0987654321                                      */
/*           Charlie                                         */
/*           1112223333                                      */
/*                                                           */
/*       Output:                                             */
/*           Person 1: Name: Alice, Contact No: 1234567890   */
/*           Person 2: Name: Bob, Contact No: 0987654321     */
/*           Person 3: Name: Charlie, Contact No: 1112223333 */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Contact                                  */
/* Description    : Stores name and contact number           */
/* Members        : name   - person's name                   */
/*                  number - person's contact number         */
/*-----------------------------------------------------------*/
struct Contact {
    char name[50];
    char number[20];  // store as string to preserve leading zeros
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads n contacts and prints them in       */
/*                 formatted output.                         */
/*-----------------------------------------------------------*/
int main() {
    int n;
    scanf("%d", &n);

    struct Contact people[n];

    /* Reading contact details */
    for (int i = 0; i < n; i++) {
        scanf("%s", people[i].name);
        scanf("%s", people[i].number);
    }

    /* Displaying details */
    for (int i = 0; i < n; i++) {
        printf("Person %d: Name: %s, Contact No: %s\n",
               i + 1, people[i].name, people[i].number);
    }

    return 0;  /* Successful termination */
}
