/*************************************************************/
/*                                                           */
/* File Name : Main.c                                        */
/* Author    : Param Vishwakarma                             */
/* Description : Railway Ticket Booking Simulation using     */
/*               Call by Value and proper scoping.           */
/*               Calculates fare at ₹2 per km with 50%       */
/*               discount for senior citizens (age > 60).    */
/*               Uses a static variable as attempt counter.  */
/*                                                           */
/* Date      : November 2025                                 */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function Prototype                                        */
/*-----------------------------------------------------------*/
float calculateFare(int dist, int passengerAge);

/*-----------------------------------------------------------*/
/* Fare Calculation Function - Call by Value                 */
/*-----------------------------------------------------------*/
float calculateFare(int dist, int passengerAge)
{
    float baseFare = dist * 2.0;        /* ₹2 per km */

    if (passengerAge > 60)
    {
        baseFare *= 0.5;                /* 50% discount for seniors */
    }

    return baseFare;
}

/*-----------------------------------------------------------*/
/* MAIN PROGRAM                                              */
/*-----------------------------------------------------------*/
int main(void)
{
    char name[50];
    int distance, age;
    float fare;
    static int attempt = 0;             /* Static counter for booking attempts */
                                        /* Preserves value between program runs if needed */
                                        /* Compliant with modern C standards */

    /* Input: Name, Distance in km, Age */
    scanf("%s", name);
    scanf("%d", &distance);
    scanf("%d", &age);

    /* Increment booking attempt counter */
    attempt++;

    /* Calculate fare using call by value */
    fare = calculateFare(distance, age);

    /* Output in required format */
    printf("Name: %s\n", name);
    printf("Fare: ₹%.2f\n", fare);
    printf("Booking Attempt #: %d\n", attempt);

    return 0;
}