#include "team2.h"
#include <stdio.h>
#include <time.h>

/************************************************************
 *
 * Function Name: Set_Overfrequency_Fault
 * Description: The function is to provide delay in seconds
 * Inputs: 'Frequency' in HZ
 * Outputs: Overfrequency Fault
 *
 ************************************************************/
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

/************************************************************
 *
 * Function Name: Read_Freq
 * Description:
 * Inputs:
 * Outputs:
 *
 ************************************************************/
int Read_Freq()
{
    // Converting time into milli_seconds
    int freq;

    printf("Enter the frequency\n");
    scanf("%d", &freq);

    return freq;

}

/************************************************************
 *
 * Function Name: log_nvm
 * Description:
 * Inputs:
 * Outputs:
 *
 ************************************************************/
void log_nvm(int fault_code)
{

	FAULT_CODE = fault_code;
	printf("FAULT_CODE = %d\n", FAULT_CODE);

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
