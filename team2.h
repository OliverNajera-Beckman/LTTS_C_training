#ifndef TEAM2_H
#define TEAM2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Anup***********************************/
//void swap2numbers();
void Timer (int number_of_seconds);
int Read_Freq ();
void log_nvm(int fault_code);
int Set_Overfrequency_Fault(int FREQ);

#define OVER_FREQUENCY_TIMER 5
#define TRUE 1
#define FALSE 0


/* Anup***********************************/

/*Oliver*/
const char* concat2strings(char,char);
int countsNumberOfDigits(long long n);
/* Maurice */
int calculate(float a, float b, char operator);

/*Harris*/
int fibonacci(int num)

#endif
