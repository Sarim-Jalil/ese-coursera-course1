/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <this file contains declerations of all the functions defined in C file>
 *
 * <Add Extended Description Here>
 *
 * @author <Sarim Jalil>
 * @date <29/07/2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <This function is to print the statistics like mean, median, min and max of the provided data>
 * @param test array of unsigned char
 * @return nothing as it is a void function
 */

void  print_statistics(unsigned char[]);

/**
 * @brief <This function is to print t>he provided data>
 * @param test array of unsigned char
 * @return nothing as it is a void function
 */
void  print_array(unsigned char *);

/**
 * @brief <This function is to find the minimum of provided data>
 * @param test array of unsigned char
 * @return returns float value i.e median of data
 */
int find_median(unsigned char[]);

/**
 * @brief <This function is to find the mean of provided data>
 * @param test array of unsigned char
 * @return returns double value i.e mean of data
 */

double find_mean(unsigned char[]);

/**
 * @brief <This function is to find maximum value in provided data>
 * @param test array of unsigned char
 * @return returns int value i.e maximum of data
 */
int find_maximum(unsigned char[]);

/**
 * @brief <This function is to calculate the minimum value in the data>
 * @param test array of unsigned char
 * @return returns int value i.e minimum of data
 */
int find_minimum(unsigned char[]);

/**
 * @brief <This function is to sort the array in some order
 * @param test array of unsigned char
 * @return nothing
 */
void  sort_array(unsigned char []); 



#endif /* __STATS_H__ */
