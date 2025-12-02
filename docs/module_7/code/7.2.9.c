/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate nested structures  */
/*                 by storing student details along with     */
/*                 their address (house number and city).    */
/*                 The program prints only the student name  */
/*                 and the city.                             */
/*                                                           */
/*   Input:                                                  */
/*       Student name (string without spaces)                */
/*       House number (integer 1–9999)                       */
/*       City (string without spaces)                        */
/*                                                           */
/*   Output:                                                 */
/*       Name: <name>, City: <city>                          */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           Rohan                                           */
/*           221                                             */
/*           Delhi                                           */
/*                                                           */
/*       Output:                                             */
/*           Name: Rohan, City: Delhi                        */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Address                                  */
/* Description    : Stores address details                   */
/* Members        : houseNo - house number                   */
/*                  city    - name of the city               */
/*-----------------------------------------------------------*/
struct Address {
    int houseNo;
    char city[50];
};

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student name and nested address   */
/* Members        : name - student name                      */
/*                  addr - nested Address structure          */
/*-----------------------------------------------------------*/
struct Student {
    char name[50];
    struct Address addr;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student and address details and     */
/*                 prints only name and city.                */
/*-----------------------------------------------------------*/
int main() {
    struct Student s;

    /* Read student details */
    scanf("%s", s.name);
    scanf("%d", &s.addr.houseNo);
    scanf("%s", s.addr.city);

    /* Print required output */
    printf("Name: %s, City: %s\n", s.name, s.addr.city);

    return 0;
}
