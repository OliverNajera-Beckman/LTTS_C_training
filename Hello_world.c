#include <stdio.h>
#include "team2.h"

int main()
{
	printf("Hello Team 2\n");
	char team2 = 'A';
	
	switch(team2)
	{
		case 'A':
			printf("Anup to write function");
			swap2numbers();
			break;
		case 'O':
			printf("Oliver to write function");
			break;
		case 'M':
			printf("Maurice to write function");
			break;
		case 'V':
			printf("Vipin to write function");
			break;
		case 'H':
			printf("Harris to write function");
			break;
		default:
			printf("Enter correct team member");
			
	}
	
	return 0;
}

