/**
File Name: number swap.c
Author: Dominic OT
Date: 19-05-2023
Description: Find the factorial of a number
*/


//include necessary libraries
#include <stdio.h>
#include <math.h>

int main()
{
    long long binary, decimal=0;
    int i=0, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while(binary != 0)
    {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    printf("Decimal number: %lld", decimal);
    return 0;
}

