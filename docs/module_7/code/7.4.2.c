/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating how structures and  */
/*                 unions can be used together to manage     */
/*                 contact information. The structure stores */
/*                 each person's name and a union that       */
/*                 contains the contact number.              */
/*                                                           */
/*                 Although only one field of the union is   */
/*                 used at a time, it illustrates how union  */
/*                 stores shared memory for related data.    */
/*                                                           */
/*   Input:                                                  */
/*       Fixed 2 persons                                     */
/*       For each:                                           */
/*           Name (string without spaces)                    */
/*           Contact Number (10-digit string or number)      */
/*                                                           */
/*   Output:                                                 */
/*       Person i: Name: <Name>, Contact No: <ContactNumber> */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           James                                           */
/*           8889990000                                      */
/*           Nora                                            */
/*           1112223333                                      */
/*       Output:                                             */
/*           Person 1: Name: James, Contact No: 8889990000   */
/*           Person 2: Name: Nora, Contact No: 1112223333    */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : ContactInfo                                  */
/* Description : Stores contact number in a union, showing   */
/*               memory sharing capability.                  */
/* Members     : number - contact number stored as string    */
/*-----------------------------------------------------------*/
union ContactInfo {
    char number[15];  // store as string, union demo
};

/*-----------------------------------------------------------*/
/* Structure Name : Person                                   */
/* Description    : Stores a person's name and contact info  */
/* Members        : name - person's name                     */
/*                  contact - union containing contact number*/
/*-----------------------------------------------------------*/
struct Person {
    char name[50];
    union ContactInfo contact;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads 2 persons' contact details and      */
/*                 prints them.                              */
/*-----------------------------------------------------------*/
int main() {
    struct Person people[2];

    /* Read 2 persons' data */
    for (int i = 0; i < 2; i++) {
        scanf("%s", people[i].name);
        scanf("%s", people[i].contact.number);
    }

    /* Print results */
    for (int i = 0; i < 2; i++) {
        printf("Person %d: Name: %s, Contact No: %s\n",
               i + 1, people[i].name, people[i].contact.number);
    }

    return 0;  /* Successful termination */
}
