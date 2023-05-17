/**
File Name: fibonnaci series.c
Author: Dominic OT
Date: 16-05-2023
*/


#include <stdio.h>

int main()
{
    float fahr, cel;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahr);

    cel = (fahr - 32) * 5/9;

    printf("%.2f Fahrenheit = %.2f Celsius", fahr, cel);
    return 0;
}

