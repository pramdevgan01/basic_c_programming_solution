/*************************************************************/
/*                                                           */
/*   File Name   : helper.h                                  */
/*   Author      : Param Vishwakarma                         */
/*   Description : Header file containing extern declaration */
/*                 and function prototypes used across       */
/*                 multiple source files.                    */
/*   Date        : February 2025                             */
/*                                                           */
/*************************************************************/

#ifndef HELPER_H
#define HELPER_H

/* Extern declaration for variable 'g', defined in main.c */
extern int g;

/* Function prototypes implemented in helper.c */
void printExtern(void);
void printStatic(int value);

#endif
