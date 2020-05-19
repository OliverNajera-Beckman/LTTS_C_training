#include "team2.h"
#include <stdio.h>
#include <string.h>

int main()
{
	printf("Hello Team 2\n");
	char team2 = 'A';
	
	switch(team2)
	{
		case 'A':
			printf("Anup to write function\n");
			int FAULT_STATUS = Set_Overfrequency_Fault(450);
			break;
		case 'O':
			printf("Oliver to write function\n");
			//function to concatenate two strings
			printf ("combined string is %s\n",concat2strings("two","strings"));
			break;
		case 'M':
			printf("Maurice to write function\n");
			char operator;
			double first, second;
    			printf("Enter an operator (+, -, *,): ");
   			scanf("%c", &operator);
			printf("\n Enter two operands: ");
			scanf("%.2f %.2f", &first, &second);
			float result = calculate(first, second, operator);
			printf("Result is: %.2f", result );
			break;
		case 'V':
			printf("Vipin to write function\n");
			// Program to Count the Number of Digits
			int count = countsNumberOfDigits(60978);
			printf("Number of digits: %d", count);
			break;
		case 'H':
			printf("Harris to write function\n");
			break;
		default:
			printf("Enter correct team member\n");
			
	}
	
	return 0;
}

