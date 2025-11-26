/*************************************************************/
/*                                                           */
/*   File Name   : utils.h                                   */
/*   Author      : Param Vishwakarma                         */
/*   Description : Contains macro definitions for finding    */
/*                 maximum, minimum, and absolute values.    */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#ifndef UTILS_H
#define UTILS_H

/*-----------------------------------------------------------*/
/*               Macro Definitions                           */
/*-----------------------------------------------------------*/

#define MAX(a, b)  ((a) > (b) ? (a) : (b))
#define MIN(a, b)  ((a) < (b) ? (a) : (b))
#define ABS(x)     ((x) < 0 ? -(x) : (x))

#endif
