/*************************************************************/
/*                                                           */
/*   File Name   : fileutils.h                               */
/*   Author      : Param Vishwakarma                         */
/*   Description : Header file containing declarations for   */
/*                 functions that count the number of lines  */
/*                 and characters inside a text file.        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#ifndef FILEUTILS_H
#define FILEUTILS_H

/* Function to count number of lines in a file */
int countLines(const char *filename);

/* Function to count number of characters in a file */
int countCharacters(const char *filename);

#endif
