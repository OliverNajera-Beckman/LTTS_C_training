#ifndef TEAM2_H
#define TEAM2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Anup***********************************/
//void swap2numbers();
void Timer (int number_of_seconds);
int Read_Freq ();
void log_nvm(int fault_code);
void Set_Overfrequency_Fault();

#define OVER_FREQUENCY_TIMER 5
#define TRUE 1
#define FALSE 0

int OF_FAULT = 0;
int FAULT_CODE = 0;
/* Anup***********************************/


//string concat2strings();
int countsNumberOfDigits(long long n);

#endif
