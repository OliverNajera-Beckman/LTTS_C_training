#include "team2.h"
#include <stdio.h>

int main()
{
	printf("Hello Team 2\n");
	char team2 = 'V';
	
	switch(team2)
	{
		case 'A':
			printf("Anup to write function");
			Set_Overfrequency_Fault();
			break;
		case 'O':
			printf("Oliver to write function");
			//concat2strings();
			break;
		case 'M':
			printf("Maurice to write function");
			break;
		case 'V':
			printf("Vipin to write function");
			// Program to Count the Number of Digits
			int count = countsNumberOfDigits(60978);
			printf("Number of digits: %d", count);
			break;
		case 'H':
			printf("Harris to write function");
			break;
		default:
			printf("Enter correct team member");
			
	}
	
	return 0;
}

