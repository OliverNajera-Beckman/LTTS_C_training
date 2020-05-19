/*
 * oliver.c
 *
 *  Created on: May 16, 2020
 *      Author: najera
 * in my experiance ability to manilupate strings of filenames was absolutely paramount
 * so I decided to start there
 */
#include <stdio.h>
#include <string.h>

char concat2strings(char *word1,char *word2 ){
	char word3[50];
	printf("first string is %s\n",word1);
	printf("second string is %s\n",word2);

	strcat(word1,word2);
	return word1;
}
