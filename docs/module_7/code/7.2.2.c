/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to store and display trainer      */
/*                 details using a structure. The program    */
/*                 reads Trainer ID, Trainer Name, Company   */
/*                 Name, and Location, then prints them in   */
/*                 the required format.                      */
/*                                                           */
/*   Input:                                                  */
/*       Trainer ID (integer > 0)                            */
/*       Trainer Name (string without spaces)                */
/*       Company Name (string without spaces)                */
/*       Location (string without spaces)                    */
/*                                                           */
/*   Output:                                                 */
/*       Displaying Trainer Details:                         */
/*       Trainer ID: <ID>                                    */
/*       Trainer Name: <Name>                                */
/*       Company Name: <Company>                             */
/*       Location: <Location>                                */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           101                                             */
/*           Vishwa                                          */
/*           ByteXL                                          */
/*           Hyderabad                                       */
/*                                                           */
/*       Output:                                             */
/*           Displaying Trainer Details:                     */
/*           Trainer ID: 101                                 */
/*           Trainer Name: Vishwa                            */
/*           Company Name: ByteXL                            */
/*           Location: Hyderabad                             */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Trainer                                  */
/* Description    : Stores trainer information               */
/* Members        : id       - trainer ID                    */
/*                  name     - trainer name                  */
/*                  company  - company name                  */
/*                  location - trainer location              */
/*-----------------------------------------------------------*/
struct Trainer {
    int id;
    char name[50];
    char company[50];
    char location[50];
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads trainer details and prints them     */
/*                 in the required output format.            */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main() {
    struct Trainer t;

    /* Reading trainer details */
    scanf("%d", &t.id);
    scanf("%s", t.name);
    scanf("%s", t.company);
    scanf("%s", t.location);

    /* Printing trainer details */
    printf("Displaying Trainer Details:\n");
    printf("Trainer ID: %d\n", t.id);
    printf("Trainer Name: %s\n", t.name);
    printf("Company Name: %s\n", t.company);
    printf("Location: %s\n", t.location);

    return 0;  /* Successful termination */
}
