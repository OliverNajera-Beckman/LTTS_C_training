#include <stdio.h>
/*********************************************************************************************
** Description : This function takes integer as input and return counts the number of digits
** Function: float32 secondorderCal(float32 a_f32, float32 b_f32, float32 c_f32, float32 input_f32)
** Arguments: None
** Return: number of digit in given no
** Date: 15/05/2020
** Author: Vipin
*********************************************************************************************/
int countsNumberOfDigits() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
 
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }
    
    return count;
}
