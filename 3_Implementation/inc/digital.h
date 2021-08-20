/**
 * @file conversion.h
 * @author Ambika C L
 * @brief Header files for temp,length,weight,numsystem and percentage function
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __DIGITAL_H__
#define __DIGITAL_H__

#include<stdio.h>
#include<stdlib.h>
int decoder(int n);

/**
 * @brief Funtion for conversion of one number to another number system
 * 
 * @param[in] ch
 * @param[in] num1 
 * @return float result of number system conversion
 */
int encoder(int n);

#endif  /* __DIGITAL_H__  */