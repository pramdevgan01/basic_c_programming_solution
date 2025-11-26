/*************************************************************/
/*                                                           */
/*   File Name   : datatype.h                                */
/*   Author      : Param Vishwakarma                         */
/*   Description : Defines a Student structure containing     */
/*                 name, roll number, and marks fields.       */
/*                 Used for modular data handling across      */
/*                 multiple C files.                          */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#ifndef DATATYPE_H
#define DATATYPE_H

/*-----------------------------------------------------------*/
/*                 Structure Definition                       */
/*-----------------------------------------------------------*/
struct Student {
    char name[50];
    int roll;
    float marks;
};

#endif
