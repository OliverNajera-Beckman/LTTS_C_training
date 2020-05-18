#include "team2.h"
#include <stdio.h>

int OF_FAULT = 0;
int FAULT_CODE = 0;

/*void swap2numbers()
{
  printf("TEST");
  int a = 10, b = 20;
  int temp;

  temp = a;
  a = b;
  b = temp;
}*/

void Set_Overfrequency_Fault()
{
	int Frequency = 0;

	// Read Frequency
	Frequency = Read_Freq();

	// Wait 5 seconds if Frequency > 420 Hz
	if (Frequency > 420)
	{
		OF_FAULT = TRUE;
	}

	if (OF_FAULT == TRUE)
	{
		Timer(OVER_FREQUENCY_TIMER);
		log_nvm(2025);
	}
	else
	{
		log_nvm(0);
	}
	printf("OF_FAULT = %d\n", OF_FAULT);
}

int Read_Freq()
{
    // Converting time into milli_seconds
    int freq;

   // printf("Enter the frequency\n");
    //scanf("%d", &freq);
    freq = 450;
    return freq;

}

void log_nvm(int fault_code)
{

	FAULT_CODE = fault_code;
	//printf("FAULT_CODE = %d\n", FAULT_CODE);

}

void Timer(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
