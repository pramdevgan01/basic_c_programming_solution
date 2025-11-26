/*************************************************************/
/*                                                           */
/*   File Name   : config.h                                  */
/*   Author      : Param Vishwakarma                         */
/*   Description : Header file defining the enum Mode and    */
/*                 declaring a global mode variable used to  */
/*                 store the current configuration mode.     */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

/*-----------------------------------------------------------*/
/*                      Enum Definition                      */
/*-----------------------------------------------------------*/
typedef enum {
    DEBUG = 0,
    RELEASE = 1,
    TEST = 2
} Mode;

/* Global mode variable (defined in config.c) */
extern Mode currentMode;

#endif
