/*
 * Maurice.c
 *
 *  Created on: May 16, 2020
 *      Author: Maurice Wright
 */


#include <stdio.h>

int calculate(float a, float b, char operator)
{
	float result = 0.0;

	 switch (operator)
	 {
	    case '+':
	        result =  a + b;
	        break;
	    case '-':
	    	result =  a - b;
	        break;
	    case '*':
	    	result =  a * b;
	        break;
	    case '/':
	    	result =  a / b;
	        break;

	    default:
	        printf("Error! operator is not correct");
	  }
	 return result;
}
