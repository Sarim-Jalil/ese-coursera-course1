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
 * @file <stats.c> 
 * @brief <different functions to print and calculate statistics of provided data >
 *
 * <Add Extended Description Here>
 *
 * @author <Sarim Jalil>
 * @date <29/07/20021 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Below is the array of provided data \n");
  print_array(test);
  printf("\nBelow are the statistics of provided data \n");
  print_statistics(test);


  return 0;
}

/* Add other Implementation File Code Here */
void print_array(unsigned char* arr){
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ",arr[i]);
  }
  
}

double find_mean(unsigned char arr[]){
  int sum = 0;
  for (int i = 0; i < SIZE; i++)
  {
    sum += (int)arr[i];
  }

  return sum/SIZE;
}

int find_maximum(unsigned char arr[]){
  
  int max = 0;
  for (int i = 0; i < SIZE; i++)
  {
    if((int)arr[i] > max){
      max = (int)arr[i];
    }
  }
  
  return max;
}

int find_minimum(unsigned char arr[]){
  
  int min = 0;
  for (int i = 0; i < SIZE; i++)
  {
    if((int)arr[i] < min){
      min = (int)arr[i];
    }
  }
  
  return min;
}


void print_statistics(unsigned char arr[]){
  printf("\nMean: %f", find_mean(arr));
  printf("\nMinimum: %d", find_minimum(arr));
  printf("\nMaximum: %d", find_maximum(arr));
}