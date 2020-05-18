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

/************************************************************
 *
 * Function Name: Set_Overfrequency_Fault
 * Description: The function is to provide delay in seconds
 * Inputs: 'Frequency' in HZ
 * Outputs: Overfrequency Fault - TRUE or FALSE
 *          FAULT_CODE - 2025 or 0
 *
 ************************************************************/
int Set_Overfrequency_Fault(int FREQ)
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
	return OF_FAULT;
}

/************************************************************
 *
 * Function Name: Read_Freq
 * Description: This function is to read frequency
 * Inputs: None
 * Outputs: Frequency
 *
 ************************************************************/
int Read_Freq()
{
    // Converting time into milli_seconds
    int freq;

   // printf("Enter the frequency\n");
    //scanf("%d", &freq);
    freq = 450;
    return freq;

}

/************************************************************
 *
 * Function Name: log_nvm
 * Description:This function displays fault code for OF_FAULT
 * Inputs:None
 * Outputs:FAULT CODE - 0 or 2025
 *
 ************************************************************/
void log_nvm(int fault_code)
{

	FAULT_CODE = fault_code;
	//printf("FAULT_CODE = %d\n", FAULT_CODE);

}

/************************************************************
 *
 * Function Name: Timer
 * Description: The function is to provide delay in seconds
 * Inputs: 'Time' in seconds
 * Outputs: Wait for 'Time' in seconds
 *
 ************************************************************/
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
